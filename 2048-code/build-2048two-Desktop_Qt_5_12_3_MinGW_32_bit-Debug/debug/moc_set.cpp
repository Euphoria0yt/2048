/****************************************************************************
** Meta object code from reading C++ file 'set.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../2048two/set.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'set.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_set_t {
    QByteArrayData data[15];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_set_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_set_t qt_meta_stringdata_set = {
    {
QT_MOC_LITERAL(0, 0, 3), // "set"
QT_MOC_LITERAL(1, 4, 18), // "on_btnPlay_clicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 34), // "on_hSliderPlayProgress_slider..."
QT_MOC_LITERAL(4, 59, 8), // "position"
QT_MOC_LITERAL(5, 68, 14), // "setSliderValue"
QT_MOC_LITERAL(6, 83, 28), // "on_vSliderVolume_sliderMoved"
QT_MOC_LITERAL(7, 112, 32), // "on_lwMusicList_itemDoubleClicked"
QT_MOC_LITERAL(8, 145, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 162, 4), // "item"
QT_MOC_LITERAL(10, 167, 22), // "on_btnAddMusic_clicked"
QT_MOC_LITERAL(11, 190, 22), // "on_btnPreMusic_clicked"
QT_MOC_LITERAL(12, 213, 23), // "on_btnNextMusic_clicked"
QT_MOC_LITERAL(13, 237, 20), // "on_btnVolume_clicked"
QT_MOC_LITERAL(14, 258, 31) // "on_vSliderVolume_sliderReleased"

    },
    "set\0on_btnPlay_clicked\0\0"
    "on_hSliderPlayProgress_sliderMoved\0"
    "position\0setSliderValue\0"
    "on_vSliderVolume_sliderMoved\0"
    "on_lwMusicList_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0on_btnAddMusic_clicked\0"
    "on_btnPreMusic_clicked\0on_btnNextMusic_clicked\0"
    "on_btnVolume_clicked\0"
    "on_vSliderVolume_sliderReleased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_set[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    1,   65,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    1,   69,    2, 0x08 /* Private */,
       7,    1,   72,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void set::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<set *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnPlay_clicked(); break;
        case 1: _t->on_hSliderPlayProgress_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setSliderValue(); break;
        case 3: _t->on_vSliderVolume_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_lwMusicList_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_btnAddMusic_clicked(); break;
        case 6: _t->on_btnPreMusic_clicked(); break;
        case 7: _t->on_btnNextMusic_clicked(); break;
        case 8: _t->on_btnVolume_clicked(); break;
        case 9: _t->on_vSliderVolume_sliderReleased(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject set::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_set.data,
    qt_meta_data_set,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *set::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *set::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_set.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int set::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
