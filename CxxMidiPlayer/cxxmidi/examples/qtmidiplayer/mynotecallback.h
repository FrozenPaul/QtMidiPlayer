#ifndef MYNOTECALLBACK_H
#define MYNOTECALLBACK_H

#include <QObject>

#include <cxxmidi/player/abstract.hpp>
#include <cxxmidi/MyNoteCallaback.hpp>
#include <cxxmidi/note.hpp>

class MyNoteCallback
        : public QObject
        , public CxxMidi::MyNoteCallaback
{
    Q_OBJECT

public:
    MyNoteCallback(CxxMidi::Player::Abstract *player_,QObject *parent_=0);

    virtual void operator() (CxxMidi::Note note, bool is_pressed);

signals:
    void noteChanged(CxxMidi::Note note, bool is_pressed);

private:
    CxxMidi::Player::Abstract *_player;
};

#endif // MYNOTECALLBACK_H
