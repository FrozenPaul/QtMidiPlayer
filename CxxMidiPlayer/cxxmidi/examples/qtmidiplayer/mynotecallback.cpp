#include "mynotecallback.h"

#include <cxxmidi/player/abstract.hpp>

MyNoteCallback::MyNoteCallback(
        CxxMidi::Player::Abstract *player_,
        QObject *parent_)
    : QObject(parent_)
    , _player(player_)
{
}

void MyNoteCallback::operator()(CxxMidi::Note note, bool is_pressed)
{
    this->noteChanged(note, is_pressed);
}
