/****************************************************************************
** Meta object code from reading C++ file 'systemsetting.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../uipage/systemsetting.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemsetting.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSystemSettingENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSystemSettingENDCLASS = QtMocHelpers::stringData(
    "SystemSetting",
    "signalRotate",
    "",
    "on_btnSaveSetting_clicked",
    "on_toolButton_clicked",
    "on_toolBtnLeftClr_clicked",
    "on_toolBtnClr_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSystemSettingENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[14];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[22];
    char stringdata5[26];
    char stringdata6[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSystemSettingENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSystemSettingENDCLASS_t qt_meta_stringdata_CLASSSystemSettingENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "SystemSetting"
        QT_MOC_LITERAL(14, 12),  // "signalRotate"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 25),  // "on_btnSaveSetting_clicked"
        QT_MOC_LITERAL(54, 21),  // "on_toolButton_clicked"
        QT_MOC_LITERAL(76, 25),  // "on_toolBtnLeftClr_clicked"
        QT_MOC_LITERAL(102, 21)   // "on_toolBtnClr_clicked"
    },
    "SystemSetting",
    "signalRotate",
    "",
    "on_btnSaveSetting_clicked",
    "on_toolButton_clicked",
    "on_toolBtnLeftClr_clicked",
    "on_toolBtnClr_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSystemSettingENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SystemSetting::staticMetaObject = { {
    QMetaObject::SuperData::link<CustomDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSystemSettingENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSystemSettingENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSystemSettingENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SystemSetting, std::true_type>,
        // method 'signalRotate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSaveSetting_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolBtnLeftClr_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolBtnClr_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SystemSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemSetting *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalRotate(); break;
        case 1: _t->on_btnSaveSetting_clicked(); break;
        case 2: _t->on_toolButton_clicked(); break;
        case 3: _t->on_toolBtnLeftClr_clicked(); break;
        case 4: _t->on_toolBtnClr_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SystemSetting::*)();
            if (_t _q_method = &SystemSetting::signalRotate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *SystemSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSystemSettingENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return CustomDialog::qt_metacast(_clname);
}

int SystemSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SystemSetting::signalRotate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
