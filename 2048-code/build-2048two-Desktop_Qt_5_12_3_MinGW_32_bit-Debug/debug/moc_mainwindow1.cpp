/****************************************************************************
** Meta object code from reading C++ file 'mainwindow1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../2048two/mainwindow1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow1_t {
    QByteArrayData data[18];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow1_t qt_meta_stringdata_MainWindow1 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MainWindow1"
QT_MOC_LITERAL(1, 12, 14), // "changeUislot10"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "on_btnPlay_clicked"
QT_MOC_LITERAL(4, 47, 34), // "on_hSliderPlayProgress_slider..."
QT_MOC_LITERAL(5, 82, 8), // "position"
QT_MOC_LITERAL(6, 91, 14), // "setSliderValue"
QT_MOC_LITERAL(7, 106, 28), // "on_vSliderVolume_sliderMoved"
QT_MOC_LITERAL(8, 135, 32), // "on_lwMusicList_itemDoubleClicked"
QT_MOC_LITERAL(9, 168, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(10, 185, 4), // "item"
QT_MOC_LITERAL(11, 190, 22), // "on_btnAddMusic_clicked"
QT_MOC_LITERAL(12, 213, 22), // "on_btnPreMusic_clicked"
QT_MOC_LITERAL(13, 236, 23), // "on_btnNextMusic_clicked"
QT_MOC_LITERAL(14, 260, 20), // "on_btnVolume_clicked"
QT_MOC_LITERAL(15, 281, 31), // "on_vSliderVolume_sliderReleased"
QT_MOC_LITERAL(16, 313, 18), // "on_btnBack_clicked"
QT_MOC_LITERAL(17, 332, 19) // "on_btnPause_clicked"

    },
    "MainWindow1\0changeUislot10\0\0"
    "on_btnPlay_clicked\0"
    "on_hSliderPlayProgress_sliderMoved\0"
    "position\0setSliderValue\0"
    "on_vSliderVolume_sliderMoved\0"
    "on_lwMusicList_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0on_btnAddMusic_clicked\0"
    "on_btnPreMusic_clicked\0on_btnNextMusic_clicked\0"
    "on_btnVolume_clicked\0"
    "on_vSliderVolume_sliderReleased\0"
    "on_btnBack_clicked\0on_btnPause_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow1[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x08 /* Private */,
       4,    1,   81,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    1,   85,    2, 0x08 /* Private */,
       8,    1,   88,    2, 0x08 /* Private */,
      11,    0,   91,    2, 0x08 /* Private */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,
      16,    0,   96,    2, 0x08 /* Private */,
      17,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeUislot10(); break;
        case 1: _t->on_btnPlay_clicked(); break;
        case 2: _t->on_hSliderPlayProgress_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setSliderValue(); break;
        case 4: _t->on_vSliderVolume_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_lwMusicList_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->on_btnAddMusic_clicked(); break;
        case 7: _t->on_btnPreMusic_clicked(); break;
        case 8: _t->on_btnNextMusic_clicked(); break;
        case 9: _t->on_btnVolume_clicked(); break;
        case 10: _t->on_vSliderVolume_sliderReleased(); break;
        case 11: _t->on_btnBack_clicked(); break;
        case 12: _t->on_btnPause_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow1::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow1::changeUislot10)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow1::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow1.data,
    qt_meta_data_MainWindow1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow1.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MainWindow1::changeUislot10()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
