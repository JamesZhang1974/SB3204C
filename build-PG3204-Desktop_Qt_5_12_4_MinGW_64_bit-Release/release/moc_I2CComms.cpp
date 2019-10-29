/****************************************************************************
** Meta object code from reading C++ file 'I2CComms.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../I2CComms.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'I2CComms.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_I2CComms_t {
    QByteArrayData data[16];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_I2CComms_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_I2CComms_t qt_meta_stringdata_I2CComms = {
    {
QT_MOC_LITERAL(0, 0, 8), // "I2CComms"
QT_MOC_LITERAL(1, 9, 16), // "I2CWorkerConnect"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "port"
QT_MOC_LITERAL(4, 32, 19), // "I2CWorkerDisconnect"
QT_MOC_LITERAL(5, 52, 15), // "I2CProbeAdaptor"
QT_MOC_LITERAL(6, 68, 19), // "I2CConfigureAdaptor"
QT_MOC_LITERAL(7, 88, 11), // "I2CWorkerOp"
QT_MOC_LITERAL(8, 100, 13), // "nBytesToWrite"
QT_MOC_LITERAL(9, 114, 11), // "const char*"
QT_MOC_LITERAL(10, 126, 9), // "dataWrite"
QT_MOC_LITERAL(11, 136, 12), // "nBytesToRead"
QT_MOC_LITERAL(12, 149, 5), // "char*"
QT_MOC_LITERAL(13, 155, 8), // "dataRead"
QT_MOC_LITERAL(14, 164, 12), // "I2CClearPort"
QT_MOC_LITERAL(15, 177, 13) // "I2CWorkerExit"

    },
    "I2CComms\0I2CWorkerConnect\0\0port\0"
    "I2CWorkerDisconnect\0I2CProbeAdaptor\0"
    "I2CConfigureAdaptor\0I2CWorkerOp\0"
    "nBytesToWrite\0const char*\0dataWrite\0"
    "nBytesToRead\0char*\0dataRead\0I2CClearPort\0"
    "I2CWorkerExit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_I2CComms[] = {

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
       1,    1,   49,    2, 0x06 /* Public */,
       4,    0,   52,    2, 0x06 /* Public */,
       5,    0,   53,    2, 0x06 /* Public */,
       6,    0,   54,    2, 0x06 /* Public */,
       7,    4,   55,    2, 0x06 /* Public */,
      14,    0,   64,    2, 0x06 /* Public */,
      15,    0,   65,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9, QMetaType::Int, 0x80000000 | 12,    8,   10,   11,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void I2CComms::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<I2CComms *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->I2CWorkerConnect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->I2CWorkerDisconnect(); break;
        case 2: _t->I2CProbeAdaptor(); break;
        case 3: _t->I2CConfigureAdaptor(); break;
        case 4: _t->I2CWorkerOp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< char*(*)>(_a[4]))); break;
        case 5: _t->I2CClearPort(); break;
        case 6: _t->I2CWorkerExit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (I2CComms::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CComms::I2CWorkerConnect)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (I2CComms::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CComms::I2CWorkerDisconnect)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (I2CComms::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CComms::I2CProbeAdaptor)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (I2CComms::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CComms::I2CConfigureAdaptor)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (I2CComms::*)(int , const char * , int , char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CComms::I2CWorkerOp)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (I2CComms::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CComms::I2CClearPort)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (I2CComms::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&I2CComms::I2CWorkerExit)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject I2CComms::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_I2CComms.data,
    qt_meta_data_I2CComms,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *I2CComms::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *I2CComms::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_I2CComms.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int I2CComms::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void I2CComms::I2CWorkerConnect(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void I2CComms::I2CWorkerDisconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void I2CComms::I2CProbeAdaptor()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void I2CComms::I2CConfigureAdaptor()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void I2CComms::I2CWorkerOp(int _t1, const char * _t2, int _t3, char * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void I2CComms::I2CClearPort()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void I2CComms::I2CWorkerExit()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
struct qt_meta_stringdata_I2CCommsWorker_t {
    QByteArrayData data[18];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_I2CCommsWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_I2CCommsWorker_t qt_meta_stringdata_I2CCommsWorker = {
    {
QT_MOC_LITERAL(0, 0, 14), // "I2CCommsWorker"
QT_MOC_LITERAL(1, 15, 16), // "I2CWorkerConnect"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "port"
QT_MOC_LITERAL(4, 38, 19), // "I2CWorkerDisconnect"
QT_MOC_LITERAL(5, 58, 15), // "I2CProbeAdaptor"
QT_MOC_LITERAL(6, 74, 19), // "I2CConfigureAdaptor"
QT_MOC_LITERAL(7, 94, 11), // "I2CWorkerOp"
QT_MOC_LITERAL(8, 106, 13), // "nBytesToWrite"
QT_MOC_LITERAL(9, 120, 11), // "const char*"
QT_MOC_LITERAL(10, 132, 9), // "dataWrite"
QT_MOC_LITERAL(11, 142, 12), // "nBytesToRead"
QT_MOC_LITERAL(12, 155, 5), // "char*"
QT_MOC_LITERAL(13, 161, 8), // "dataRead"
QT_MOC_LITERAL(14, 170, 12), // "I2CClearPort"
QT_MOC_LITERAL(15, 183, 13), // "I2CWorkerExit"
QT_MOC_LITERAL(16, 197, 19), // "transactionFinished"
QT_MOC_LITERAL(17, 217, 13) // "serialTimeout"

    },
    "I2CCommsWorker\0I2CWorkerConnect\0\0port\0"
    "I2CWorkerDisconnect\0I2CProbeAdaptor\0"
    "I2CConfigureAdaptor\0I2CWorkerOp\0"
    "nBytesToWrite\0const char*\0dataWrite\0"
    "nBytesToRead\0char*\0dataRead\0I2CClearPort\0"
    "I2CWorkerExit\0transactionFinished\0"
    "serialTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_I2CCommsWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    0,   62,    2, 0x0a /* Public */,
       5,    0,   63,    2, 0x0a /* Public */,
       6,    0,   64,    2, 0x0a /* Public */,
       7,    4,   65,    2, 0x0a /* Public */,
      14,    0,   74,    2, 0x0a /* Public */,
      15,    0,   75,    2, 0x0a /* Public */,
      16,    0,   76,    2, 0x0a /* Public */,
      17,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9, QMetaType::Int, 0x80000000 | 12,    8,   10,   11,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void I2CCommsWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<I2CCommsWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->I2CWorkerConnect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->I2CWorkerDisconnect(); break;
        case 2: _t->I2CProbeAdaptor(); break;
        case 3: _t->I2CConfigureAdaptor(); break;
        case 4: _t->I2CWorkerOp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< char*(*)>(_a[4]))); break;
        case 5: _t->I2CClearPort(); break;
        case 6: _t->I2CWorkerExit(); break;
        case 7: _t->transactionFinished(); break;
        case 8: _t->serialTimeout(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject I2CCommsWorker::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_I2CCommsWorker.data,
    qt_meta_data_I2CCommsWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *I2CCommsWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *I2CCommsWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_I2CCommsWorker.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int I2CCommsWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
