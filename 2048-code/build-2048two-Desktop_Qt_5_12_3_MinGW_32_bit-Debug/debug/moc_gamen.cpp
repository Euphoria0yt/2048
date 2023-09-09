/****************************************************************************
** Meta object code from reading C++ file 'gamen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../2048two/gamen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameN_t {
    QByteArrayData data[12];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameN_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameN_t qt_meta_stringdata_GameN = {
    {
QT_MOC_LITERAL(0, 0, 5), // "GameN"
QT_MOC_LITERAL(1, 6, 13), // "ChangeUiSlot5"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 43, 15), // "on_four_clicked"
QT_MOC_LITERAL(5, 59, 10), // "dealslot20"
QT_MOC_LITERAL(6, 70, 15), // "on_five_clicked"
QT_MOC_LITERAL(7, 86, 10), // "dealslot21"
QT_MOC_LITERAL(8, 97, 14), // "on_six_clicked"
QT_MOC_LITERAL(9, 112, 10), // "dealslot22"
QT_MOC_LITERAL(10, 123, 16), // "on_seven_clicked"
QT_MOC_LITERAL(11, 140, 10) // "dealslot23"

    },
    "GameN\0ChangeUiSlot5\0\0on_pushButton_clicked\0"
    "on_four_clicked\0dealslot20\0on_five_clicked\0"
    "dealslot21\0on_six_clicked\0dealslot22\0"
    "on_seven_clicked\0dealslot23"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameN[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GameN::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameN *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ChangeUiSlot5(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_four_clicked(); break;
        case 3: _t->dealslot20(); break;
        case 4: _t->on_five_clicked(); break;
        case 5: _t->dealslot21(); break;
        case 6: _t->on_six_clicked(); break;
        case 7: _t->dealslot22(); break;
        case 8: _t->on_seven_clicked(); break;
        case 9: _t->dealslot23(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameN::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameN::ChangeUiSlot5)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GameN::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_GameN.data,
    qt_meta_data_GameN,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameN::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameN::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameN.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GameN::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void GameN::ChangeUiSlot5()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
