#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QActionGroup>
#include <QPushButton>

#include <cxxmidi/file.hpp>
#include <cxxmidi/output/default.hpp>
#include <cxxmidi/player/asynchronous.hpp>
#include <cxxmidi/time/point.hpp>
#include <cxxmidi/note.hpp>

#include "playerheartbeatcallback.h"
#include "playerfinishedcallback.h"
#include "mynotecallback.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void onTimeSliderReleased();
    void onTimeSliderPressed();
    void onSpeedChange(double speed_);
    void updateTimeCode(CxxMidi::Time::Point time_);
    void onPauseClicked();
    void onPlayClicked();
    void openFile(const QString& path_);
    void openFile();
    void setOutput(int num_);
    void onOutputSelected(QAction* action_);
    void playerFinished();
    void updateNoteInformation(CxxMidi::Note note, bool isPressed);

private:

    void createMenuBar();

    QActionGroup * _outputsActionGroup;
    Ui::MainWindow *_ui;


    CxxMidi::Time::Point _currentTimePoint;
    CxxMidi::Time::Point _finalTimePoint;

    CxxMidi::Output::Default* _midiOutput;
    CxxMidi::Player::Asynchronous* _midiPlayer;
    CxxMidi::File* _midiFile;

    PlayerHeartbeatCallback _playerHeartbeatCallback;
    PlayerFinishedCallback _playerFinishedCallback;

    // add by Paul Halian
    MyNoteCallback _myNoteCallback;
    QMap<QString,QPushButton*> _allButtons;
    QMap<QString,QPushButton*> _allCurrentPushedButtons;

    bool _sliderLocked;
    bool _is_playing = true;
};

#endif // MAINWINDOW_H
