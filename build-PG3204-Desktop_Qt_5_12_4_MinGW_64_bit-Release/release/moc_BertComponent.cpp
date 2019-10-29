/****************************************************************************
** Meta object code from reading C++ file 'BertComponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BertComponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BertComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BertComponent_t {
    QByteArrayData data[17];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BertComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BertComponent_t qt_meta_stringdata_BertComponent = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BertComponent"
QT_MOC_LITERAL(1, 14, 6), // "Result"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "result"
QT_MOC_LITERAL(4, 29, 4), // "lane"
QT_MOC_LITERAL(5, 34, 12), // "ListPopulate"
QT_MOC_LITERAL(6, 47, 4), // "name"
QT_MOC_LITERAL(7, 52, 5), // "items"
QT_MOC_LITERAL(8, 58, 12), // "defaultIndex"
QT_MOC_LITERAL(9, 71, 10), // "ListSelect"
QT_MOC_LITERAL(10, 82, 5), // "index"
QT_MOC_LITERAL(11, 88, 13), // "UpdateBoolean"
QT_MOC_LITERAL(12, 102, 5), // "value"
QT_MOC_LITERAL(13, 108, 12), // "UpdateString"
QT_MOC_LITERAL(14, 121, 11), // "ShowMessage"
QT_MOC_LITERAL(15, 133, 7), // "message"
QT_MOC_LITERAL(16, 141, 6) // "append"

    },
    "BertComponent\0Result\0\0result\0lane\0"
    "ListPopulate\0name\0items\0defaultIndex\0"
    "ListSelect\0index\0UpdateBoolean\0value\0"
    "UpdateString\0ShowMessage\0message\0"
    "append"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BertComponent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    4,   54,    2, 0x06 /* Public */,
       9,    3,   63,    2, 0x06 /* Public */,
      11,    3,   70,    2, 0x06 /* Public */,
      13,    3,   77,    2, 0x06 /* Public */,
      14,    2,   84,    2, 0x06 /* Public */,
      14,    1,   89,    2, 0x26 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QStringList, QMetaType::Int,    6,    4,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    6,    4,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    6,    4,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,    6,    4,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   15,   16,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void BertComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BertComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Result((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->ListPopulate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->ListSelect((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->UpdateBoolean((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->UpdateString((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->ShowMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->ShowMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BertComponent::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertComponent::Result)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BertComponent::*)(QString , int , QStringList , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertComponent::ListPopulate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BertComponent::*)(QString , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertComponent::ListSelect)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BertComponent::*)(QString , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertComponent::UpdateBoolean)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BertComponent::*)(QString , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertComponent::UpdateString)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BertComponent::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertComponent::ShowMessage)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BertComponent::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_BertComponent.data,
    qt_meta_data_BertComponent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BertComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BertComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BertComponent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BertComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void BertComponent::Result(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BertComponent::ListPopulate(QString _t1, int _t2, QStringList _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BertComponent::ListSelect(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BertComponent::UpdateBoolean(QString _t1, int _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BertComponent::UpdateString(QString _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BertComponent::ShowMessage(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
