/****************************************************************************
** Meta object code from reading C++ file 'DotaBPMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DotaBPMainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DotaBPMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DotaBPMainWindow_t {
    QByteArrayData data[10];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DotaBPMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DotaBPMainWindow_t qt_meta_stringdata_DotaBPMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DotaBPMainWindow"
QT_MOC_LITERAL(1, 17, 14), // "OnEditFinished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "LoadCSV"
QT_MOC_LITERAL(4, 41, 11), // "const char*"
QT_MOC_LITERAL(5, 53, 8), // "filename"
QT_MOC_LITERAL(6, 62, 24), // "vector<vector<string> >&"
QT_MOC_LITERAL(7, 87, 8), // "OutTable"
QT_MOC_LITERAL(8, 96, 12), // "RefreshTable"
QT_MOC_LITERAL(9, 109, 7) // "LoadXML"

    },
    "DotaBPMainWindow\0OnEditFinished\0\0"
    "LoadCSV\0const char*\0filename\0"
    "vector<vector<string> >&\0OutTable\0"
    "RefreshTable\0LoadXML"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DotaBPMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    2,   35,    2, 0x0a /* Public */,
       8,    0,   40,    2, 0x0a /* Public */,
       9,    1,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void DotaBPMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DotaBPMainWindow *_t = static_cast<DotaBPMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnEditFinished(); break;
        case 1: _t->LoadCSV((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< vector<vector<string> >(*)>(_a[2]))); break;
        case 2: _t->RefreshTable(); break;
        case 3: _t->LoadXML((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DotaBPMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DotaBPMainWindow.data,
      qt_meta_data_DotaBPMainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DotaBPMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DotaBPMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DotaBPMainWindow.stringdata0))
        return static_cast<void*>(const_cast< DotaBPMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DotaBPMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
