/****************************************************************************
** Meta object code from reading C++ file 'clientsocket.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../clientsocket.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientsocket.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSClientSocketENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSClientSocketENDCLASS = QtMocHelpers::stringData(
    "ClientSocket",
    "signalMessage",
    "",
    "type",
    "dataVal",
    "signalStatus",
    "state",
    "SltSendMessage",
    "SltSendOnline",
    "SltSendOffline",
    "SltDisconnected",
    "SltConnected",
    "SltReadyRead"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientSocketENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[13];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[8];
    char stringdata5[13];
    char stringdata6[6];
    char stringdata7[15];
    char stringdata8[14];
    char stringdata9[15];
    char stringdata10[16];
    char stringdata11[13];
    char stringdata12[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientSocketENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientSocketENDCLASS_t qt_meta_stringdata_CLASSClientSocketENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "ClientSocket"
        QT_MOC_LITERAL(13, 13),  // "signalMessage"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 4),  // "type"
        QT_MOC_LITERAL(33, 7),  // "dataVal"
        QT_MOC_LITERAL(41, 12),  // "signalStatus"
        QT_MOC_LITERAL(54, 5),  // "state"
        QT_MOC_LITERAL(60, 14),  // "SltSendMessage"
        QT_MOC_LITERAL(75, 13),  // "SltSendOnline"
        QT_MOC_LITERAL(89, 14),  // "SltSendOffline"
        QT_MOC_LITERAL(104, 15),  // "SltDisconnected"
        QT_MOC_LITERAL(120, 12),  // "SltConnected"
        QT_MOC_LITERAL(133, 12)   // "SltReadyRead"
    },
    "ClientSocket",
    "signalMessage",
    "",
    "type",
    "dataVal",
    "signalStatus",
    "state",
    "SltSendMessage",
    "SltSendOnline",
    "SltSendOffline",
    "SltDisconnected",
    "SltConnected",
    "SltReadyRead"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientSocketENDCLASS[] = {

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
       1,    2,   62,    2, 0x06,    1 /* Public */,
       5,    1,   67,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,   70,    2, 0x0a,    6 /* Public */,
       8,    0,   75,    2, 0x0a,    9 /* Public */,
       9,    0,   76,    2, 0x0a,   10 /* Public */,
      10,    0,   77,    2, 0x08,   11 /* Private */,
      11,    0,   78,    2, 0x08,   12 /* Private */,
      12,    0,   79,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::QJsonValue,    3,    4,
    QMetaType::Void, QMetaType::UChar,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::QJsonValue,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ClientSocket::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientSocketENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientSocketENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientSocketENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClientSocket, std::true_type>,
        // method 'signalMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'signalStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        // method 'SltSendMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'SltSendOnline'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltSendOffline'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ClientSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientSocket *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalMessage((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[2]))); break;
        case 1: _t->signalStatus((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1]))); break;
        case 2: _t->SltSendMessage((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[2]))); break;
        case 3: _t->SltSendOnline(); break;
        case 4: _t->SltSendOffline(); break;
        case 5: _t->SltDisconnected(); break;
        case 6: _t->SltConnected(); break;
        case 7: _t->SltReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientSocket::*)(const quint8 & , const QJsonValue & );
            if (_t _q_method = &ClientSocket::signalMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientSocket::*)(const quint8 & );
            if (_t _q_method = &ClientSocket::signalStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *ClientSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClientSocketENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ClientSocket::signalMessage(const quint8 & _t1, const QJsonValue & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientSocket::signalStatus(const quint8 & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSClientFileSocketENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSClientFileSocketENDCLASS = QtMocHelpers::stringData(
    "ClientFileSocket",
    "signalSendFinished",
    "",
    "signamFileRecvOk",
    "type",
    "filePath",
    "signalUpdateProgress",
    "currSize",
    "total",
    "signalConnectd",
    "displayError",
    "QAbstractSocket::SocketError",
    "SltUpdateClientProgress",
    "SltReadyRead",
    "SltConnected",
    "SltDisConnected"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientFileSocketENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[17];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[5];
    char stringdata5[9];
    char stringdata6[21];
    char stringdata7[9];
    char stringdata8[6];
    char stringdata9[15];
    char stringdata10[13];
    char stringdata11[29];
    char stringdata12[24];
    char stringdata13[13];
    char stringdata14[13];
    char stringdata15[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientFileSocketENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientFileSocketENDCLASS_t qt_meta_stringdata_CLASSClientFileSocketENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "ClientFileSocket"
        QT_MOC_LITERAL(17, 18),  // "signalSendFinished"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 16),  // "signamFileRecvOk"
        QT_MOC_LITERAL(54, 4),  // "type"
        QT_MOC_LITERAL(59, 8),  // "filePath"
        QT_MOC_LITERAL(68, 20),  // "signalUpdateProgress"
        QT_MOC_LITERAL(89, 8),  // "currSize"
        QT_MOC_LITERAL(98, 5),  // "total"
        QT_MOC_LITERAL(104, 14),  // "signalConnectd"
        QT_MOC_LITERAL(119, 12),  // "displayError"
        QT_MOC_LITERAL(132, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(161, 23),  // "SltUpdateClientProgress"
        QT_MOC_LITERAL(185, 12),  // "SltReadyRead"
        QT_MOC_LITERAL(198, 12),  // "SltConnected"
        QT_MOC_LITERAL(211, 15)   // "SltDisConnected"
    },
    "ClientFileSocket",
    "signalSendFinished",
    "",
    "signamFileRecvOk",
    "type",
    "filePath",
    "signalUpdateProgress",
    "currSize",
    "total",
    "signalConnectd",
    "displayError",
    "QAbstractSocket::SocketError",
    "SltUpdateClientProgress",
    "SltReadyRead",
    "SltConnected",
    "SltDisConnected"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientFileSocketENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    2,   69,    2, 0x06,    2 /* Public */,
       6,    2,   74,    2, 0x06,    5 /* Public */,
       9,    0,   79,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   80,    2, 0x08,    9 /* Private */,
      12,    1,   83,    2, 0x08,   11 /* Private */,
      13,    0,   86,    2, 0x08,   13 /* Private */,
      14,    0,   87,    2, 0x08,   14 /* Private */,
      15,    0,   88,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    7,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ClientFileSocket::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientFileSocketENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientFileSocketENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientFileSocketENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClientFileSocket, std::true_type>,
        // method 'signalSendFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signamFileRecvOk'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'signalUpdateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'signalConnectd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'SltUpdateClientProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'SltReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltDisConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ClientFileSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientFileSocket *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalSendFinished(); break;
        case 1: _t->signamFileRecvOk((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->signalUpdateProgress((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[2]))); break;
        case 3: _t->signalConnectd(); break;
        case 4: _t->displayError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 5: _t->SltUpdateClientProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 6: _t->SltReadyRead(); break;
        case 7: _t->SltConnected(); break;
        case 8: _t->SltDisConnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientFileSocket::*)();
            if (_t _q_method = &ClientFileSocket::signalSendFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientFileSocket::*)(const quint8 & , const QString & );
            if (_t _q_method = &ClientFileSocket::signamFileRecvOk; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientFileSocket::*)(quint64 , quint64 );
            if (_t _q_method = &ClientFileSocket::signalUpdateProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientFileSocket::*)();
            if (_t _q_method = &ClientFileSocket::signalConnectd; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *ClientFileSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientFileSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClientFileSocketENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientFileSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ClientFileSocket::signalSendFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ClientFileSocket::signamFileRecvOk(const quint8 & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientFileSocket::signalUpdateProgress(quint64 _t1, quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientFileSocket::signalConnectd()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
