/****************************************************************************
** Meta object code from reading C++ file 'testffmpegdecoder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ffmpeg/testffmpegdecoder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testffmpegdecoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestFfmpegDecoder_t {
    QByteArrayData data[6];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestFfmpegDecoder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestFfmpegDecoder_t qt_meta_stringdata_TestFfmpegDecoder = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TestFfmpegDecoder"
QT_MOC_LITERAL(1, 18, 7), // "SendImg"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "unsigned char*"
QT_MOC_LITERAL(4, 42, 11), // "SendPicPath"
QT_MOC_LITERAL(5, 54, 9) // "GetPicCmd"

    },
    "TestFfmpegDecoder\0SendImg\0\0unsigned char*\0"
    "SendPicPath\0GetPicCmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestFfmpegDecoder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::UInt,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void TestFfmpegDecoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestFfmpegDecoder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendImg((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->SendPicPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->GetPicCmd(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TestFfmpegDecoder::*)(unsigned char * , unsigned int , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestFfmpegDecoder::SendImg)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TestFfmpegDecoder::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestFfmpegDecoder::SendPicPath)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TestFfmpegDecoder::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TestFfmpegDecoder.data,
    qt_meta_data_TestFfmpegDecoder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestFfmpegDecoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestFfmpegDecoder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestFfmpegDecoder.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TestDecoder"))
        return static_cast< TestDecoder*>(this);
    return QObject::qt_metacast(_clname);
}

int TestFfmpegDecoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void TestFfmpegDecoder::SendImg(unsigned char * _t1, unsigned int _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TestFfmpegDecoder::SendPicPath(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
