/****************************************************************************
** Meta object code from reading C++ file 'traymenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../traymenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'traymenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TrayMenu_t {
    QByteArrayData data[5];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrayMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrayMenu_t qt_meta_stringdata_TrayMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TrayMenu"
QT_MOC_LITERAL(1, 9, 12), // "showSettings"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "quit"
QT_MOC_LITERAL(4, 28, 14) // "showMainwindow"

    },
    "TrayMenu\0showSettings\0\0quit\0showMainwindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrayMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TrayMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrayMenu *_t = static_cast<TrayMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showSettings(); break;
        case 1: _t->quit(); break;
        case 2: _t->showMainwindow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TrayMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrayMenu::showSettings)) {
                *result = 0;
            }
        }
        {
            typedef void (TrayMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrayMenu::quit)) {
                *result = 1;
            }
        }
        {
            typedef void (TrayMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrayMenu::showMainwindow)) {
                *result = 2;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TrayMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_TrayMenu.data,
      qt_meta_data_TrayMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TrayMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrayMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TrayMenu.stringdata0))
        return static_cast<void*>(const_cast< TrayMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int TrayMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void TrayMenu::showSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void TrayMenu::quit()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void TrayMenu::showMainwindow()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
