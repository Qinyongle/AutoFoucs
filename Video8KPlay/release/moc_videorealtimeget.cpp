/****************************************************************************
** Meta object code from reading C++ file 'videorealtimeget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ffmpeg/videorealtimeget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videorealtimeget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoRealTimeGet_t {
    QByteArrayData data[15];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoRealTimeGet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoRealTimeGet_t qt_meta_stringdata_VideoRealTimeGet = {
    {
QT_MOC_LITERAL(0, 0, 16), // "VideoRealTimeGet"
QT_MOC_LITERAL(1, 17, 17), // "FramePositionSend"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "FrameMasageSend"
QT_MOC_LITERAL(4, 52, 8), // "RunStart"
QT_MOC_LITERAL(5, 61, 28), // "QtFfmpegDecoder::DECODE_TYPE"
QT_MOC_LITERAL(6, 90, 7), // "RunStop"
QT_MOC_LITERAL(7, 98, 12), // "SetFrameTime"
QT_MOC_LITERAL(8, 111, 12), // "SetPlayState"
QT_MOC_LITERAL(9, 124, 16), // "SetPlayDelayTime"
QT_MOC_LITERAL(10, 141, 11), // "SetPlaySlot"
QT_MOC_LITERAL(11, 153, 9), // "GetPicCmd"
QT_MOC_LITERAL(12, 163, 11), // "SetSavePath"
QT_MOC_LITERAL(13, 175, 4), // "path"
QT_MOC_LITERAL(14, 180, 4) // "name"

    },
    "VideoRealTimeGet\0FramePositionSend\0\0"
    "FrameMasageSend\0RunStart\0"
    "QtFfmpegDecoder::DECODE_TYPE\0RunStop\0"
    "SetFrameTime\0SetPlayState\0SetPlayDelayTime\0"
    "SetPlaySlot\0GetPicCmd\0SetSavePath\0"
    "path\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoRealTimeGet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    2,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   72,    2, 0x0a /* Public */,
       6,    0,   77,    2, 0x0a /* Public */,
       7,    1,   78,    2, 0x0a /* Public */,
       8,    1,   81,    2, 0x0a /* Public */,
       9,    1,   84,    2, 0x0a /* Public */,
      10,    2,   87,    2, 0x0a /* Public */,
      11,    0,   92,    2, 0x0a /* Public */,
      12,    2,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Double,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Long,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::ULong, QMetaType::ULong,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   14,

       0        // eod
};

void VideoRealTimeGet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoRealTimeGet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FramePositionSend((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->FrameMasageSend((*reinterpret_cast< unsigned long long(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->RunStart((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QtFfmpegDecoder::DECODE_TYPE(*)>(_a[2]))); break;
        case 3: _t->RunStop(); break;
        case 4: _t->SetFrameTime((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 5: _t->SetPlayState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->SetPlayDelayTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->SetPlaySlot((*reinterpret_cast< ulong(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 8: _t->GetPicCmd(); break;
        case 9: _t->SetSavePath((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoRealTimeGet::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoRealTimeGet::FramePositionSend)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VideoRealTimeGet::*)(unsigned long long , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoRealTimeGet::FrameMasageSend)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VideoRealTimeGet::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_VideoRealTimeGet.data,
    qt_meta_data_VideoRealTimeGet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VideoRealTimeGet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoRealTimeGet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoRealTimeGet.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VideoRealTimeGet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void VideoRealTimeGet::FramePositionSend(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VideoRealTimeGet::FrameMasageSend(unsigned long long _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
