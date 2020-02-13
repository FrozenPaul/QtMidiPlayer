#-------------------------------------------------
#
# Project created by QtCreator 2015-01-03T22:51:47
#
#-------------------------------------------------

QT       += gui widgets

TARGET = qtmidiplayer

TEMPLATE = app

INCLUDEPATH += "../../include"

SOURCES += main.cpp \
    mainwindow.cpp \
    mynotecallback.cpp \
    playerfinishedcallback.cpp \
    playerheartbeatcallback.cpp

HEADERS += \
    mainwindow.h \
    mynotecallback.h \
    playerheartbeatcallback.h \
    playerfinishedcallback.h

FORMS += \ 
    mainwindow.ui

unix:!macx {
    LIBS += /usr/lib/x86_64-linux-gnu/libasound.so
}
win32 {
    LIBS += "c:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.18362.0\\um\\x64\\winmm.lib"
}


