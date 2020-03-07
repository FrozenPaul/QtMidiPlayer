#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <algorithm>

#include <QFileDialog>
namespace
{
    void SetButtonBackground(QPushButton* button, bool isPressed)
    {
        const auto name = button->objectName();
        QString str;
//        QString endl = "#" + button->objectName() + ":pressed{}";
        if(name != "C8" && name !="A0") {
            if (name.size() > 2) {
                str =  isPressed ?
                     "border-image: url(\":/pianokeys/images/C#Dbpurple.png\")":
                          "border-image: url(\":/pianokeys/images/C#Db.png\")";
            }else{
                QString s = name[0];
                if (s == "F") {
                    s = "C";
                }
                if (s == "B") {
                    s = "E";
                }
                str = isPressed ?
                      "border-image: url(\":/pianokeys/images/"+ s +"purple.png\")" :
                            "border-image: url(\":/pianokeys/images/"+ s +".png\")";
            }
        }else {
            if(name == "C8")
                str = isPressed ?
                        "border-image: url(\":/pianokeys/images/C8purple.png\")" :
                              "border-image: url(\":/pianokeys/images/C8.png\")";
            else {
                str = isPressed ?
                        "border-image: url(\":/pianokeys/images/Cpurple.png\")" :
                              "border-image: url(\":/pianokeys/images/C.png\")";
            }
        }

        button->setStyleSheet(str);
        QString style = button->styleSheet();
//        button->setProperty("","");

    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , _ui(new Ui::MainWindow)
    , _midiOutput(new CxxMidi::Output::Default(0))
    , _midiPlayer(new CxxMidi::Player::Asynchronous(_midiOutput))
    , _midiFile(0)
    , _playerHeartbeatCallback(_midiPlayer)
    , _myNoteCallback(_midiPlayer)


{
    _ui->setupUi(this);

    this->createMenuBar();
    this->centralWidget()->setDisabled(true);
    this->resize(this->minimumSizeHint());

    _midiPlayer->setCallbackHeartbeat(&_playerHeartbeatCallback);
    connect(&_playerHeartbeatCallback,SIGNAL(playerTimeChanged(CxxMidi::Time::Point)),
            this,SLOT(updateTimeCode(CxxMidi::Time::Point)),Qt::QueuedConnection);

    //add by Paul Halian
    _midiPlayer->repeatCallback(&_myNoteCallback);
    connect(&_myNoteCallback, SIGNAL(noteChanged(CxxMidi::Note,bool)),
            this,SLOT(updateNoteInformation(CxxMidi::Note,bool)),Qt::QueuedConnection);


    // add by Paul Halian
    QList<QPushButton *> allPButtons = centralWidget()->findChildren<QPushButton *>();
    for(auto a : allPButtons)
    {
        _allButtons.insert(a->objectName(), a);
    }


    _midiPlayer->setCallbackFinished(&_playerFinishedCallback);
    connect(&_playerFinishedCallback,SIGNAL(playerFinished()),
            this,SLOT(playerFinished()),Qt::QueuedConnection);

    connect(_ui->doubleSpinBoxSpeed,SIGNAL(valueChanged(double)),
            this,SLOT(onSpeedChange(double)));

    connect(_ui->pushButtonPlay,SIGNAL(clicked()),
            this,SLOT(onPlayClicked()));

    connect(_ui->pushButtonPause,SIGNAL(clicked()),
            this,SLOT(onPauseClicked()));

    connect(_ui->pushButtonStop,SIGNAL(clicked()),
            this,SLOT(onStopClicked()));

    connect(_ui->sliderTimeline,SIGNAL(sliderPressed()),
            this,SLOT(onTimeSliderPressed()));

    connect(_ui->sliderTimeline,SIGNAL(sliderReleased()),
            this,SLOT(onTimeSliderReleased()));


    // first argument is file name
    if(QApplication::arguments().size() >=2 )
    {
        QString fileName = QApplication::arguments().at(1);
        this->openFile(fileName);
    }

    // second argument is output num
    if(QApplication::arguments().size() >=3)
    {
        int num = QApplication::arguments().at(2).toInt();
        this->setOutput(num);
        _outputsActionGroup->actions()[num]->setChecked(true);
    }

    // auto play
    if( QApplication::arguments().size() >= 2)
        _midiPlayer->play();
}

MainWindow::~MainWindow()
{
    delete _ui;
}

void MainWindow::createMenuBar()
{
    // file menu
    QMenu* fileMenu= this->menuBar()->addMenu(tr("&Файл"));
    QAction *action = fileMenu->addAction("&Открыть");

    connect(action,SIGNAL(triggered()),
            this,SLOT(openFile()));

    fileMenu->addSeparator();

    action = fileMenu->addAction("&Выйти");
    connect(action,SIGNAL(triggered()),
            QApplication::instance(),SLOT(quit()));

    // output menu
    QMenu* outputMenu= this->menuBar()->addMenu(tr("&Вывод"));
    _outputsActionGroup = new QActionGroup(this);
    _outputsActionGroup->setExclusive(true);

    QString name;
    for(size_t i=0; i<_midiOutput->getPortCount();i++)
    {
        name=QString("%1. %2").arg(i).arg(_midiOutput->getPortName(i).c_str());
        action = _outputsActionGroup->addAction(name);
        action->setCheckable(true);
        if(!i) // first is opened
            action->setChecked(true);
    }

    outputMenu->addActions(_outputsActionGroup->actions());

    connect(_outputsActionGroup,SIGNAL(triggered(QAction*)),
            this,SLOT(onOutputSelected(QAction*)));
}


void MainWindow::onOutputSelected(QAction* action_)
{
    int num = action_->text().split(".")[0].toInt();
    this->setOutput(num);
}

void MainWindow::setOutput(int num_)
{
    bool wasPlaying = _midiPlayer->isPlaying();

    if(wasPlaying)
        _midiPlayer->pause();
    CxxMidi::Time::Point tp = _midiPlayer->currentTimePos();
    _midiOutput->openPort(num_);
    _midiPlayer->goTo(tp);
    if(wasPlaying)
        _midiPlayer->play();
}

void MainWindow::openFile()
{
    _midiPlayer->pause();
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Открыть Файл"), "C:/Users/User/Downloads", tr("MIDI files (*.mid *.midi);;Any files (*)"));
    if( fileName.size() )
    {
        this->openFile(fileName);
        //add be Paul Halian
        _ui->textBrowser->clear();
        _ui->label_3->clear();
        _ui->label_3->setText(fileName.split("/")[4]);

//        if (_is_first_play) {
//            _midiPlayer->setSpeed(100000);
//        }
        _midiPlayer->play();

    }
}

void MainWindow::openFile(const QString& path_)
{
    // add by Paul Halian

    if(_midiPlayer->isPlaying())
        _midiPlayer->pause();

    repaintPushedButtons();

    if(_midiFile)
        delete _midiFile;

    _midiFile = new CxxMidi::File(path_.toStdString().c_str());
    _midiPlayer->setFile(_midiFile);

    _finalTimePoint = _midiFile->duration().toPoint();
    _ui->labelTotal->setText(_finalTimePoint.toTimecode().c_str());

    this->centralWidget()->setDisabled(false);
}

void MainWindow::onPlayClicked()
{
    _midiPlayer->play();
    _ui->textBrowser->insertPlainText("Play\n");
}

void MainWindow::onPauseClicked()
{
    _midiPlayer->pause();
    _ui->textBrowser->insertPlainText("Pause\n");
}

void MainWindow::onStopClicked()
{
    repaintPushedButtons();
    playerFinished();
}


void MainWindow::playerFinished()
{
//    _is_first_play = false;
//    _midiPlayer->setSpeed(1);
    _midiPlayer->goTo(CxxMidi::Time::Point::zero());
    _midiPlayer->play();
}

void MainWindow::updateTimeCode(CxxMidi::Time::Point time_)
{
    _currentTimePoint = time_;
    _ui->labelTime->setText(time_.toTimecode().c_str());

    if(!_sliderLocked)
    {
        double normPos = _currentTimePoint / _finalTimePoint;
        _ui->sliderTimeline->setValue(100*normPos);
    }
}

// add by Paul Halian
void MainWindow::updateNoteInformation(CxxMidi::Note note, bool isPressed)
{
    const QString noteName =QString::fromStdString(CxxMidi::Note::name(note));
    const QVariant varValue(isPressed);
    const QString boolStr(varValue.toString());
    _ui->textBrowser->insertPlainText("Note: " +noteName +" is pressed " + boolStr + "\n");


    QPushButton* myButton = nullptr;
    if (noteName.size() > 3) {
        QString newStr  =  noteName.left(noteName.indexOf("/"));
        myButton = _allButtons.value(newStr);
    }else {
        myButton = _allButtons.value(noteName);
    }

    if(isPressed){
        _allCurrentPushedButtons.insert(myButton->objectName(),myButton);
//        myButton->animateClick();
    }else{
        _allCurrentPushedButtons.remove(myButton->objectName());
    }
    SetButtonBackground(myButton,isPressed);

}

void MainWindow::repaintPushedButtons()
{
    for(auto a : _allCurrentPushedButtons){
        SetButtonBackground(a,false);
    }
}

void MainWindow::onSpeedChange(double speed_)
{
    _midiPlayer->setSpeed(speed_);
}

void MainWindow::onTimeSliderPressed()
{
    _sliderLocked = true;
}

void MainWindow::onTimeSliderReleased()
{
    // add by Paul Halian
    repaintPushedButtons();
    //

    double val = _ui->sliderTimeline->value();
    double size = _ui->sliderTimeline->maximum();
    double pos = val/size;
    CxxMidi::Time::Point tp =  _midiFile->duration().toPoint();
    tp*=pos;

    bool wasPlaying = _midiPlayer->isPlaying();
    _midiPlayer->pause();
    _midiPlayer->goTo(tp);
    if(wasPlaying)
        _midiPlayer->play();

    _sliderLocked = false;
}
