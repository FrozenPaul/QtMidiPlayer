/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../qtmidiplayer/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 20), // "onTimeSliderReleased"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "onTimeSliderPressed"
QT_MOC_LITERAL(4, 53, 13), // "onSpeedChange"
QT_MOC_LITERAL(5, 67, 6), // "speed_"
QT_MOC_LITERAL(6, 74, 14), // "updateTimeCode"
QT_MOC_LITERAL(7, 89, 20), // "CxxMidi::Time::Point"
QT_MOC_LITERAL(8, 110, 5), // "time_"
QT_MOC_LITERAL(9, 116, 14), // "onPauseClicked"
QT_MOC_LITERAL(10, 131, 13), // "onPlayClicked"
QT_MOC_LITERAL(11, 145, 8), // "openFile"
QT_MOC_LITERAL(12, 154, 5), // "path_"
QT_MOC_LITERAL(13, 160, 9), // "setOutput"
QT_MOC_LITERAL(14, 170, 4), // "num_"
QT_MOC_LITERAL(15, 175, 16), // "onOutputSelected"
QT_MOC_LITERAL(16, 192, 8), // "QAction*"
QT_MOC_LITERAL(17, 201, 7), // "action_"
QT_MOC_LITERAL(18, 209, 14), // "playerFinished"
QT_MOC_LITERAL(19, 224, 21), // "updateNoteInformation"
QT_MOC_LITERAL(20, 246, 13), // "CxxMidi::Note"
QT_MOC_LITERAL(21, 260, 4), // "note"
QT_MOC_LITERAL(22, 265, 9) // "isPressed"

    },
    "MainWindow\0onTimeSliderReleased\0\0"
    "onTimeSliderPressed\0onSpeedChange\0"
    "speed_\0updateTimeCode\0CxxMidi::Time::Point\0"
    "time_\0onPauseClicked\0onPlayClicked\0"
    "openFile\0path_\0setOutput\0num_\0"
    "onOutputSelected\0QAction*\0action_\0"
    "playerFinished\0updateNoteInformation\0"
    "CxxMidi::Note\0note\0isPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    1,   76,    2, 0x08 /* Private */,
       6,    1,   79,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    1,   84,    2, 0x08 /* Private */,
      11,    0,   87,    2, 0x08 /* Private */,
      13,    1,   88,    2, 0x08 /* Private */,
      15,    1,   91,    2, 0x08 /* Private */,
      18,    0,   94,    2, 0x08 /* Private */,
      19,    2,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20, QMetaType::Bool,   21,   22,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTimeSliderReleased(); break;
        case 1: _t->onTimeSliderPressed(); break;
        case 2: _t->onSpeedChange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->updateTimeCode((*reinterpret_cast< CxxMidi::Time::Point(*)>(_a[1]))); break;
        case 4: _t->onPauseClicked(); break;
        case 5: _t->onPlayClicked(); break;
        case 6: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->openFile(); break;
        case 8: _t->setOutput((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onOutputSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 10: _t->playerFinished(); break;
        case 11: _t->updateNoteInformation((*reinterpret_cast< CxxMidi::Note(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
