/****************************************************************************
** Meta object code from reading C++ file 'tcpserver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../tcpserver.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpserver.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTcpServerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTcpServerENDCLASS = QtMocHelpers::stringData(
    "TcpServer",
    "signalUserStatus",
    "",
    "text",
    "SltNewConnection",
    "SltConnected",
    "SltDisConnected"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTcpServerENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[10];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[17];
    char stringdata5[13];
    char stringdata6[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTcpServerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTcpServerENDCLASS_t qt_meta_stringdata_CLASSTcpServerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "TcpServer"
        QT_MOC_LITERAL(10, 16),  // "signalUserStatus"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 4),  // "text"
        QT_MOC_LITERAL(33, 16),  // "SltNewConnection"
        QT_MOC_LITERAL(50, 12),  // "SltConnected"
        QT_MOC_LITERAL(63, 15)   // "SltDisConnected"
    },
    "TcpServer",
    "signalUserStatus",
    "",
    "text",
    "SltNewConnection",
    "SltConnected",
    "SltDisConnected"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTcpServerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   41,    2, 0x09,    3 /* Protected */,
       5,    0,   42,    2, 0x09,    4 /* Protected */,
       6,    0,   43,    2, 0x09,    5 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TcpServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTcpServerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTcpServerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTcpServerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TcpServer, std::true_type>,
        // method 'signalUserStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SltNewConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltDisConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TcpServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalUserStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->SltNewConnection(); break;
        case 2: _t->SltConnected(); break;
        case 3: _t->SltDisConnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TcpServer::*)(const QString & );
            if (_t _q_method = &TcpServer::signalUserStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *TcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTcpServerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TcpServer::signalUserStatus(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTcpMsgServerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTcpMsgServerENDCLASS = QtMocHelpers::stringData(
    "TcpMsgServer",
    "signalDownloadFile",
    "",
    "json",
    "SltTransFileToClient",
    "userId",
    "SltNewConnection",
    "SltConnected",
    "SltDisConnected",
    "SltMsgToClient",
    "type",
    "id"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTcpMsgServerENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[13];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[21];
    char stringdata5[7];
    char stringdata6[17];
    char stringdata7[13];
    char stringdata8[16];
    char stringdata9[15];
    char stringdata10[5];
    char stringdata11[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTcpMsgServerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTcpMsgServerENDCLASS_t qt_meta_stringdata_CLASSTcpMsgServerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "TcpMsgServer"
        QT_MOC_LITERAL(13, 18),  // "signalDownloadFile"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 4),  // "json"
        QT_MOC_LITERAL(38, 20),  // "SltTransFileToClient"
        QT_MOC_LITERAL(59, 6),  // "userId"
        QT_MOC_LITERAL(66, 16),  // "SltNewConnection"
        QT_MOC_LITERAL(83, 12),  // "SltConnected"
        QT_MOC_LITERAL(96, 15),  // "SltDisConnected"
        QT_MOC_LITERAL(112, 14),  // "SltMsgToClient"
        QT_MOC_LITERAL(127, 4),  // "type"
        QT_MOC_LITERAL(132, 2)   // "id"
    },
    "TcpMsgServer",
    "signalDownloadFile",
    "",
    "json",
    "SltTransFileToClient",
    "userId",
    "SltNewConnection",
    "SltConnected",
    "SltDisConnected",
    "SltMsgToClient",
    "type",
    "id"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTcpMsgServerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,   53,    2, 0x0a,    3 /* Public */,
       6,    0,   58,    2, 0x08,    6 /* Private */,
       7,    0,   59,    2, 0x08,    7 /* Private */,
       8,    0,   60,    2, 0x08,    8 /* Private */,
       9,    3,   61,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonValue,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonValue,    5,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::Int, QMetaType::QJsonValue,   10,   11,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject TcpMsgServer::staticMetaObject = { {
    QMetaObject::SuperData::link<TcpServer::staticMetaObject>(),
    qt_meta_stringdata_CLASSTcpMsgServerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTcpMsgServerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTcpMsgServerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TcpMsgServer, std::true_type>,
        // method 'signalDownloadFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'SltTransFileToClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'SltNewConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltDisConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltMsgToClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>
    >,
    nullptr
} };

void TcpMsgServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TcpMsgServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalDownloadFile((*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[1]))); break;
        case 1: _t->SltTransFileToClient((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[2]))); break;
        case 2: _t->SltNewConnection(); break;
        case 3: _t->SltConnected(); break;
        case 4: _t->SltDisConnected(); break;
        case 5: _t->SltMsgToClient((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TcpMsgServer::*)(const QJsonValue & );
            if (_t _q_method = &TcpMsgServer::signalDownloadFile; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *TcpMsgServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpMsgServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTcpMsgServerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TcpServer::qt_metacast(_clname);
}

int TcpMsgServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TcpMsgServer::signalDownloadFile(const QJsonValue & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTcpFileServerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTcpFileServerENDCLASS = QtMocHelpers::stringData(
    "TcpFileServer",
    "signalRecvFinished",
    "",
    "id",
    "json",
    "SltNewConnection",
    "SltConnected",
    "SltDisConnected",
    "SltClientDownloadFile"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTcpFileServerENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[14];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[5];
    char stringdata5[17];
    char stringdata6[13];
    char stringdata7[16];
    char stringdata8[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTcpFileServerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTcpFileServerENDCLASS_t qt_meta_stringdata_CLASSTcpFileServerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "TcpFileServer"
        QT_MOC_LITERAL(14, 18),  // "signalRecvFinished"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 2),  // "id"
        QT_MOC_LITERAL(37, 4),  // "json"
        QT_MOC_LITERAL(42, 16),  // "SltNewConnection"
        QT_MOC_LITERAL(59, 12),  // "SltConnected"
        QT_MOC_LITERAL(72, 15),  // "SltDisConnected"
        QT_MOC_LITERAL(88, 21)   // "SltClientDownloadFile"
    },
    "TcpFileServer",
    "signalRecvFinished",
    "",
    "id",
    "json",
    "SltNewConnection",
    "SltConnected",
    "SltDisConnected",
    "SltClientDownloadFile"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTcpFileServerENDCLASS[] = {

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
       1,    2,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   49,    2, 0x08,    4 /* Private */,
       6,    0,   50,    2, 0x08,    5 /* Private */,
       7,    0,   51,    2, 0x08,    6 /* Private */,
       8,    1,   52,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonValue,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonValue,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject TcpFileServer::staticMetaObject = { {
    QMetaObject::SuperData::link<TcpServer::staticMetaObject>(),
    qt_meta_stringdata_CLASSTcpFileServerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTcpFileServerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTcpFileServerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TcpFileServer, std::true_type>,
        // method 'signalRecvFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'SltNewConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltDisConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltClientDownloadFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>
    >,
    nullptr
} };

void TcpFileServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TcpFileServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalRecvFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[2]))); break;
        case 1: _t->SltNewConnection(); break;
        case 2: _t->SltConnected(); break;
        case 3: _t->SltDisConnected(); break;
        case 4: _t->SltClientDownloadFile((*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TcpFileServer::*)(int , const QJsonValue & );
            if (_t _q_method = &TcpFileServer::signalRecvFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *TcpFileServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpFileServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTcpFileServerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TcpServer::qt_metacast(_clname);
}

int TcpFileServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TcpServer::qt_metacall(_c, _id, _a);
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
void TcpFileServer::signalRecvFinished(int _t1, const QJsonValue & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
