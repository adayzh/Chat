/****************************************************************************
** Meta object code from reading C++ file 'widgethead.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../uipage/widgethead.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgethead.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSWidgetHeadENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSWidgetHeadENDCLASS = QtMocHelpers::stringData(
    "WidgetHead",
    "signalCutHeadOk",
    "",
    "signalUpdateUserHead",
    "userId",
    "strHead",
    "SltPictureCutClose",
    "SltChangeNewPixHead",
    "SltBeginToSend",
    "SltConnectedToServer",
    "SltSendFileOk",
    "SltFileRecvOk",
    "filePath"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWidgetHeadENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[7];
    char stringdata5[8];
    char stringdata6[19];
    char stringdata7[20];
    char stringdata8[15];
    char stringdata9[21];
    char stringdata10[14];
    char stringdata11[14];
    char stringdata12[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWidgetHeadENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWidgetHeadENDCLASS_t qt_meta_stringdata_CLASSWidgetHeadENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "WidgetHead"
        QT_MOC_LITERAL(11, 15),  // "signalCutHeadOk"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 20),  // "signalUpdateUserHead"
        QT_MOC_LITERAL(49, 6),  // "userId"
        QT_MOC_LITERAL(56, 7),  // "strHead"
        QT_MOC_LITERAL(64, 18),  // "SltPictureCutClose"
        QT_MOC_LITERAL(83, 19),  // "SltChangeNewPixHead"
        QT_MOC_LITERAL(103, 14),  // "SltBeginToSend"
        QT_MOC_LITERAL(118, 20),  // "SltConnectedToServer"
        QT_MOC_LITERAL(139, 13),  // "SltSendFileOk"
        QT_MOC_LITERAL(153, 13),  // "SltFileRecvOk"
        QT_MOC_LITERAL(167, 8)   // "filePath"
    },
    "WidgetHead",
    "signalCutHeadOk",
    "",
    "signalUpdateUserHead",
    "userId",
    "strHead",
    "SltPictureCutClose",
    "SltChangeNewPixHead",
    "SltBeginToSend",
    "SltConnectedToServer",
    "SltSendFileOk",
    "SltFileRecvOk",
    "filePath"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWidgetHeadENDCLASS[] = {

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
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    2,   63,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   68,    2, 0x08,    5 /* Private */,
       7,    0,   69,    2, 0x08,    6 /* Private */,
       8,    0,   70,    2, 0x08,    7 /* Private */,
       9,    0,   71,    2, 0x08,    8 /* Private */,
      10,    0,   72,    2, 0x08,    9 /* Private */,
      11,    2,   73,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QString,    2,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject WidgetHead::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSWidgetHeadENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWidgetHeadENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWidgetHeadENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WidgetHead, std::true_type>,
        // method 'signalCutHeadOk'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalUpdateUserHead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SltPictureCutClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltChangeNewPixHead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltBeginToSend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltConnectedToServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltSendFileOk'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltFileRecvOk'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void WidgetHead::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetHead *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalCutHeadOk(); break;
        case 1: _t->signalUpdateUserHead((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->SltPictureCutClose(); break;
        case 3: _t->SltChangeNewPixHead(); break;
        case 4: _t->SltBeginToSend(); break;
        case 5: _t->SltConnectedToServer(); break;
        case 6: _t->SltSendFileOk(); break;
        case 7: _t->SltFileRecvOk((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WidgetHead::*)();
            if (_t _q_method = &WidgetHead::signalCutHeadOk; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WidgetHead::*)(const int & , const QString & );
            if (_t _q_method = &WidgetHead::signalUpdateUserHead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *WidgetHead::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetHead::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWidgetHeadENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WidgetHead::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void WidgetHead::signalCutHeadOk()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WidgetHead::signalUpdateUserHead(const int & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
