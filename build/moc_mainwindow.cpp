/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[433];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "getScreenshotImgBase64Str"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 29), // "getAccessTokenRequestFinished"
QT_MOC_LITERAL(4, 68, 14), // "QNetworkReply*"
QT_MOC_LITERAL(5, 83, 5), // "reply"
QT_MOC_LITERAL(6, 89, 26), // "recognitionRequestFinished"
QT_MOC_LITERAL(7, 116, 17), // "translateByGoogle"
QT_MOC_LITERAL(8, 134, 17), // "translateByYoudao"
QT_MOC_LITERAL(9, 152, 35), // "getTranslateByYoudaoRequestFi..."
QT_MOC_LITERAL(10, 188, 35), // "getTranslateByGoogleRequestFi..."
QT_MOC_LITERAL(11, 224, 12), // "showSettings"
QT_MOC_LITERAL(12, 237, 13), // "closeSettings"
QT_MOC_LITERAL(13, 251, 19), // "onScreenshotClicked"
QT_MOC_LITERAL(14, 271, 18), // "onTranslateClicked"
QT_MOC_LITERAL(15, 290, 20), // "onSplitButtonClicked"
QT_MOC_LITERAL(16, 311, 20), // "onMergeButtonClicked"
QT_MOC_LITERAL(17, 332, 28), // "onExitTranslateButtonClicked"
QT_MOC_LITERAL(18, 361, 18), // "loadConfigSettings"
QT_MOC_LITERAL(19, 380, 11), // "onActivated"
QT_MOC_LITERAL(20, 392, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(21, 426, 6) // "reason"

    },
    "MainWindow\0getScreenshotImgBase64Str\0"
    "\0getAccessTokenRequestFinished\0"
    "QNetworkReply*\0reply\0recognitionRequestFinished\0"
    "translateByGoogle\0translateByYoudao\0"
    "getTranslateByYoudaoRequestFinished\0"
    "getTranslateByGoogleRequestFinished\0"
    "showSettings\0closeSettings\0"
    "onScreenshotClicked\0onTranslateClicked\0"
    "onSplitButtonClicked\0onMergeButtonClicked\0"
    "onExitTranslateButtonClicked\0"
    "loadConfigSettings\0onActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x08 /* Private */,
       3,    1,   97,    2, 0x08 /* Private */,
       6,    1,  100,    2, 0x08 /* Private */,
       7,    0,  103,    2, 0x08 /* Private */,
       8,    0,  104,    2, 0x08 /* Private */,
       9,    1,  105,    2, 0x08 /* Private */,
      10,    1,  108,    2, 0x08 /* Private */,
      11,    0,  111,    2, 0x08 /* Private */,
      12,    0,  112,    2, 0x08 /* Private */,
      13,    0,  113,    2, 0x08 /* Private */,
      14,    0,  114,    2, 0x08 /* Private */,
      15,    0,  115,    2, 0x08 /* Private */,
      16,    0,  116,    2, 0x08 /* Private */,
      17,    0,  117,    2, 0x08 /* Private */,
      18,    0,  118,    2, 0x08 /* Private */,
      19,    1,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getScreenshotImgBase64Str((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->getAccessTokenRequestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->recognitionRequestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->translateByGoogle(); break;
        case 4: _t->translateByYoudao(); break;
        case 5: _t->getTranslateByYoudaoRequestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->getTranslateByGoogleRequestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->showSettings(); break;
        case 8: _t->closeSettings(); break;
        case 9: _t->onScreenshotClicked(); break;
        case 10: _t->onTranslateClicked(); break;
        case 11: _t->onSplitButtonClicked(); break;
        case 12: _t->onMergeButtonClicked(); break;
        case 13: _t->onExitTranslateButtonClicked(); break;
        case 14: _t->loadConfigSettings(); break;
        case 15: _t->onActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
