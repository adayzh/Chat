/****************************************************************************
** Meta object code from reading C++ file 'AudioRecorder.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../media/AudioRecorder.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioRecorder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAudioRecorderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAudioRecorderENDCLASS = QtMocHelpers::stringData(
    "AudioRecorder",
    "signalMaxValue",
    "",
    "val",
    "signalFinished",
    "sltStopRecord",
    "OnRecordPlay",
    "OnStateChange",
    "QAudio::State",
    "s",
    "OnReadMore",
    "OnSliderValueChanged",
    "OnTimeOut"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAudioRecorderENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[14];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[15];
    char stringdata5[14];
    char stringdata6[13];
    char stringdata7[14];
    char stringdata8[14];
    char stringdata9[2];
    char stringdata10[11];
    char stringdata11[21];
    char stringdata12[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAudioRecorderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAudioRecorderENDCLASS_t qt_meta_stringdata_CLASSAudioRecorderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "AudioRecorder"
        QT_MOC_LITERAL(14, 14),  // "signalMaxValue"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 3),  // "val"
        QT_MOC_LITERAL(34, 14),  // "signalFinished"
        QT_MOC_LITERAL(49, 13),  // "sltStopRecord"
        QT_MOC_LITERAL(63, 12),  // "OnRecordPlay"
        QT_MOC_LITERAL(76, 13),  // "OnStateChange"
        QT_MOC_LITERAL(90, 13),  // "QAudio::State"
        QT_MOC_LITERAL(104, 1),  // "s"
        QT_MOC_LITERAL(106, 10),  // "OnReadMore"
        QT_MOC_LITERAL(117, 20),  // "OnSliderValueChanged"
        QT_MOC_LITERAL(138, 9)   // "OnTimeOut"
    },
    "AudioRecorder",
    "signalMaxValue",
    "",
    "val",
    "signalFinished",
    "sltStopRecord",
    "OnRecordPlay",
    "OnStateChange",
    "QAudio::State",
    "s",
    "OnReadMore",
    "OnSliderValueChanged",
    "OnTimeOut"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAudioRecorderENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       4,    0,   65,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   66,    2, 0x0a,    4 /* Public */,
       6,    0,   67,    2, 0x08,    5 /* Private */,
       7,    1,   68,    2, 0x08,    6 /* Private */,
      10,    0,   71,    2, 0x08,    8 /* Private */,
      11,    1,   72,    2, 0x08,    9 /* Private */,
      12,    0,   75,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AudioRecorder::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAudioRecorderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAudioRecorderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAudioRecorderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AudioRecorder, std::true_type>,
        // method 'signalMaxValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'signalFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sltStopRecord'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OnRecordPlay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OnStateChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudio::State, std::false_type>,
        // method 'OnReadMore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OnSliderValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'OnTimeOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AudioRecorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioRecorder *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalMaxValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->signalFinished(); break;
        case 2: _t->sltStopRecord(); break;
        case 3: _t->OnRecordPlay(); break;
        case 4: _t->OnStateChange((*reinterpret_cast< std::add_pointer_t<QAudio::State>>(_a[1]))); break;
        case 5: _t->OnReadMore(); break;
        case 6: _t->OnSliderValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->OnTimeOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioRecorder::*)(int );
            if (_t _q_method = &AudioRecorder::signalMaxValue; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioRecorder::*)();
            if (_t _q_method = &AudioRecorder::signalFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *AudioRecorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioRecorder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAudioRecorderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioRecorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AudioRecorder::signalMaxValue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AudioRecorder::signalFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
