/****************************************************************************
** Meta object code from reading C++ file 'BertUICDRChannel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/BertUICDRChannel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BertUICDRChannel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BertUICDRChannel_t {
    QByteArrayData data[10];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BertUICDRChannel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BertUICDRChannel_t qt_meta_stringdata_BertUICDRChannel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BertUICDRChannel"
QT_MOC_LITERAL(1, 17, 40), // "listCDRChannelSelect_currentI..."
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 4), // "core"
QT_MOC_LITERAL(4, 64, 5), // "index"
QT_MOC_LITERAL(5, 70, 38), // "listCDRDivideRatio_currentInd..."
QT_MOC_LITERAL(6, 109, 43), // "listLoopBandwidthSelect_curre..."
QT_MOC_LITERAL(7, 153, 38), // "listDataRateSelect_currentInd..."
QT_MOC_LITERAL(8, 192, 41), // "listRateDividerSelect_current..."
QT_MOC_LITERAL(9, 234, 39) // "listTargetLBWSelect_currentIn..."

    },
    "BertUICDRChannel\0"
    "listCDRChannelSelect_currentIndexChanged\0"
    "\0core\0index\0listCDRDivideRatio_currentIndexChanged\0"
    "listLoopBandwidthSelect_currentIndexChanged\0"
    "listDataRateSelect_currentIndexChanged\0"
    "listRateDividerSelect_currentIndexChanged\0"
    "listTargetLBWSelect_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BertUICDRChannel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       5,    2,   79,    2, 0x06 /* Public */,
       6,    2,   84,    2, 0x06 /* Public */,
       7,    2,   89,    2, 0x06 /* Public */,
       8,    2,   94,    2, 0x06 /* Public */,
       9,    2,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x08 /* Private */,
       5,    1,  107,    2, 0x08 /* Private */,
       6,    1,  110,    2, 0x08 /* Private */,
       7,    1,  113,    2, 0x08 /* Private */,
       8,    1,  116,    2, 0x08 /* Private */,
       9,    1,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void BertUICDRChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BertUICDRChannel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listCDRChannelSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->listCDRDivideRatio_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->listLoopBandwidthSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->listDataRateSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->listRateDividerSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->listTargetLBWSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->listCDRChannelSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->listCDRDivideRatio_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->listLoopBandwidthSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->listDataRateSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->listRateDividerSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->listTargetLBWSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BertUICDRChannel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertUICDRChannel::listCDRChannelSelect_currentIndexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BertUICDRChannel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertUICDRChannel::listCDRDivideRatio_currentIndexChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BertUICDRChannel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertUICDRChannel::listLoopBandwidthSelect_currentIndexChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BertUICDRChannel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertUICDRChannel::listDataRateSelect_currentIndexChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BertUICDRChannel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertUICDRChannel::listRateDividerSelect_currentIndexChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BertUICDRChannel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertUICDRChannel::listTargetLBWSelect_currentIndexChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BertUICDRChannel::staticMetaObject = { {
    &BertUIGroup::staticMetaObject,
    qt_meta_stringdata_BertUICDRChannel.data,
    qt_meta_data_BertUICDRChannel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BertUICDRChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BertUICDRChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BertUICDRChannel.stringdata0))
        return static_cast<void*>(this);
    return BertUIGroup::qt_metacast(_clname);
}

int BertUICDRChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BertUIGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void BertUICDRChannel::listCDRChannelSelect_currentIndexChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BertUICDRChannel::listCDRDivideRatio_currentIndexChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BertUICDRChannel::listLoopBandwidthSelect_currentIndexChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BertUICDRChannel::listDataRateSelect_currentIndexChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BertUICDRChannel::listRateDividerSelect_currentIndexChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BertUICDRChannel::listTargetLBWSelect_currentIndexChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
