/****************************************************************************
** Meta object code from reading C++ file 'SI5340.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SI5340.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SI5340.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SI5340_t {
    QByteArrayData data[13];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SI5340_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SI5340_t qt_meta_stringdata_SI5340 = {
    {
QT_MOC_LITERAL(0, 0, 6), // "SI5340"
QT_MOC_LITERAL(1, 7, 12), // "RefClockInfo"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "deviceID"
QT_MOC_LITERAL(4, 30, 12), // "indexProfile"
QT_MOC_LITERAL(5, 43, 11), // "frequencyIn"
QT_MOC_LITERAL(6, 55, 12), // "frequencyOut"
QT_MOC_LITERAL(7, 68, 13), // "descriptionIn"
QT_MOC_LITERAL(8, 82, 14), // "descriptionOut"
QT_MOC_LITERAL(9, 97, 23), // "RefClockSettingsChanged"
QT_MOC_LITERAL(10, 121, 15), // "GetRefClockInfo"
QT_MOC_LITERAL(11, 137, 21), // "RefClockSelectProfile"
QT_MOC_LITERAL(12, 159, 13) // "triggerResync"

    },
    "SI5340\0RefClockInfo\0\0deviceID\0"
    "indexProfile\0frequencyIn\0frequencyOut\0"
    "descriptionIn\0descriptionOut\0"
    "RefClockSettingsChanged\0GetRefClockInfo\0"
    "RefClockSelectProfile\0triggerResync"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SI5340[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   39,    2, 0x06 /* Public */,
       9,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   55,    2, 0x0a /* Public */,
      11,    2,   56,    2, 0x0a /* Public */,
      11,    1,   61,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    4,   12,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void SI5340::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SI5340 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RefClockInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 1: _t->RefClockSettingsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->GetRefClockInfo(); break;
        case 3: _t->RefClockSelectProfile((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->RefClockSelectProfile((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SI5340::*)(int , int , float , float , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SI5340::RefClockInfo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SI5340::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SI5340::RefClockSettingsChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SI5340::staticMetaObject = { {
    &BertComponent::staticMetaObject,
    qt_meta_stringdata_SI5340.data,
    qt_meta_data_SI5340,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SI5340::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SI5340::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SI5340.stringdata0))
        return static_cast<void*>(this);
    return BertComponent::qt_metacast(_clname);
}

int SI5340::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BertComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SI5340::RefClockInfo(int _t1, int _t2, float _t3, float _t4, QString _t5, QString _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SI5340::RefClockSettingsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
