#include <QApplication>

#include "mainwindow.h"

int main(int argc, char ** argv)
{
    qRegisterMetaType<CxxMidi::Time::Point>("CxxMidi::Time::Point");
    qRegisterMetaType<CxxMidi::Note>("CxxMidi::Note");

    QApplication app(argc,argv);

    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
