/****************************************************************************
** Meta object code from reading C++ file 'picturecutdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../pictureedit/picturecutdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picturecutdialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPictureCutDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPictureCutDialogENDCLASS = QtMocHelpers::stringData(
    "PictureCutDialog",
    "signalCutHeadOk",
    "",
    "signalClose",
    "SltCutDlgMoved",
    "rect",
    "on_btnLoad_clicked",
    "on_btnSave_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPictureCutDialogENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[17];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[15];
    char stringdata5[5];
    char stringdata6[19];
    char stringdata7[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPictureCutDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPictureCutDialogENDCLASS_t qt_meta_stringdata_CLASSPictureCutDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "PictureCutDialog"
        QT_MOC_LITERAL(17, 15),  // "signalCutHeadOk"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 11),  // "signalClose"
        QT_MOC_LITERAL(46, 14),  // "SltCutDlgMoved"
        QT_MOC_LITERAL(61, 4),  // "rect"
        QT_MOC_LITERAL(66, 18),  // "on_btnLoad_clicked"
        QT_MOC_LITERAL(85, 18)   // "on_btnSave_clicked"
    },
    "PictureCutDialog",
    "signalCutHeadOk",
    "",
    "signalClose",
    "SltCutDlgMoved",
    "rect",
    "on_btnLoad_clicked",
    "on_btnSave_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPictureCutDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   46,    2, 0x08,    3 /* Private */,
       6,    0,   49,    2, 0x08,    5 /* Private */,
       7,    0,   50,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QRect,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PictureCutDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<CustomMoveWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSPictureCutDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPictureCutDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPictureCutDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PictureCutDialog, std::true_type>,
        // method 'signalCutHeadOk'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltCutDlgMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QRect, std::false_type>,
        // method 'on_btnLoad_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSave_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PictureCutDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PictureCutDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalCutHeadOk(); break;
        case 1: _t->signalClose(); break;
        case 2: _t->SltCutDlgMoved((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1]))); break;
        case 3: _t->on_btnLoad_clicked(); break;
        case 4: _t->on_btnSave_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PictureCutDialog::*)();
            if (_t _q_method = &PictureCutDialog::signalCutHeadOk; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PictureCutDialog::*)();
            if (_t _q_method = &PictureCutDialog::signalClose; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *PictureCutDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PictureCutDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPictureCutDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return CustomMoveWidget::qt_metacast(_clname);
}

int PictureCutDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomMoveWidget::qt_metacall(_c, _id, _a);
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
void PictureCutDialog::signalCutHeadOk()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PictureCutDialog::signalClose()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
