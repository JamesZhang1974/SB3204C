/****************************************************************************
** Meta object code from reading C++ file 'M24M02.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../M24M02.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'M24M02.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_M24M02_t {
    QByteArrayData data[14];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_M24M02_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_M24M02_t qt_meta_stringdata_M24M02 = {
    {
QT_MOC_LITERAL(0, 0, 6), // "M24M02"
QT_MOC_LITERAL(1, 7, 16), // "EEPROMStringData"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "deviceID"
QT_MOC_LITERAL(4, 34, 5), // "model"
QT_MOC_LITERAL(5, 40, 6), // "serial"
QT_MOC_LITERAL(6, 47, 14), // "productionDate"
QT_MOC_LITERAL(7, 62, 15), // "calibrationDate"
QT_MOC_LITERAL(8, 78, 13), // "warrantyStart"
QT_MOC_LITERAL(9, 92, 11), // "warrantyEnd"
QT_MOC_LITERAL(10, 104, 18), // "synthConfigVersion"
QT_MOC_LITERAL(11, 123, 17), // "EEPROMReadStrings"
QT_MOC_LITERAL(12, 141, 18), // "EEPROMWriteStrings"
QT_MOC_LITERAL(13, 160, 13) // "WriteFirmware"

    },
    "M24M02\0EEPROMStringData\0\0deviceID\0"
    "model\0serial\0productionDate\0calibrationDate\0"
    "warrantyStart\0warrantyEnd\0synthConfigVersion\0"
    "EEPROMReadStrings\0EEPROMWriteStrings\0"
    "WriteFirmware"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_M24M02[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    8,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   51,    2, 0x0a /* Public */,
      12,    8,   54,    2, 0x0a /* Public */,
      13,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,    8,    9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void M24M02::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<M24M02 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->EEPROMStringData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 1: _t->EEPROMReadStrings((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->EEPROMWriteStrings((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 3: _t->WriteFirmware((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (M24M02::*)(int , QString , QString , QString , QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&M24M02::EEPROMStringData)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject M24M02::staticMetaObject = { {
    &BertComponent::staticMetaObject,
    qt_meta_stringdata_M24M02.data,
    qt_meta_data_M24M02,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *M24M02::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *M24M02::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_M24M02.stringdata0))
        return static_cast<void*>(this);
    return BertComponent::qt_metacast(_clname);
}

int M24M02::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BertComponent::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void M24M02::EEPROMStringData(int _t1, QString _t2, QString _t3, QString _t4, QString _t5, QString _t6, QString _t7, QString _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
