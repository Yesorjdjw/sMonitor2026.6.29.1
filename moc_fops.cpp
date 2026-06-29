/****************************************************************************
** Meta object code from reading C++ file 'fops.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fops.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fops.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_fops_t {
    QByteArrayData data[13];
    char stringdata[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fops_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fops_t qt_meta_stringdata_fops = {
    {
QT_MOC_LITERAL(0, 0, 4), // "fops"
QT_MOC_LITERAL(1, 5, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "onFileClicked"
QT_MOC_LITERAL(4, 42, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 59, 4), // "item"
QT_MOC_LITERAL(6, 64, 11), // "onPlayVideo"
QT_MOC_LITERAL(7, 76, 12), // "onDeleteFile"
QT_MOC_LITERAL(8, 89, 9), // "onRefresh"
QT_MOC_LITERAL(9, 99, 11), // "onFilterAll"
QT_MOC_LITERAL(10, 111, 13), // "onFilterPhoto"
QT_MOC_LITERAL(11, 125, 13), // "onFilterVideo"
QT_MOC_LITERAL(12, 139, 11) // "onVideoTick"

    },
    "fops\0on_pushButton_clicked\0\0onFileClicked\0"
    "QListWidgetItem*\0item\0onPlayVideo\0"
    "onDeleteFile\0onRefresh\0onFilterAll\0"
    "onFilterPhoto\0onFilterVideo\0onVideoTick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fops[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,
      11,    0,   68,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void fops::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fops *_t = static_cast<fops *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->onFileClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->onPlayVideo(); break;
        case 3: _t->onDeleteFile(); break;
        case 4: _t->onRefresh(); break;
        case 5: _t->onFilterAll(); break;
        case 6: _t->onFilterPhoto(); break;
        case 7: _t->onFilterVideo(); break;
        case 8: _t->onVideoTick(); break;
        default: ;
        }
    }
}

const QMetaObject fops::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_fops.data,
      qt_meta_data_fops,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *fops::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fops::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_fops.stringdata))
        return static_cast<void*>(const_cast< fops*>(this));
    return QWidget::qt_metacast(_clname);
}

int fops::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
