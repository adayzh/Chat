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
    "signalConnected",
    "",
    "signalDisConnected",
    "signalDownloadFile",
    "json",
    "signalMsgToClient",
    "type",
    "id",
    "dataVal",
    "SltSendMessage",
    "SltConnected",
    "SltDisconnected",
    "SltReadyRead"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientSocketENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[13];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[19];
    char stringdata5[5];
    char stringdata6[18];
    char stringdata7[5];
    char stringdata8[3];
    char stringdata9[8];
    char stringdata10[15];
    char stringdata11[13];
    char stringdata12[16];
    char stringdata13[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientSocketENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientSocketENDCLASS_t qt_meta_stringdata_CLASSClientSocketENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "ClientSocket"
        QT_MOC_LITERAL(13, 15),  // "signalConnected"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 18),  // "signalDisConnected"
        QT_MOC_LITERAL(49, 18),  // "signalDownloadFile"
        QT_MOC_LITERAL(68, 4),  // "json"
        QT_MOC_LITERAL(73, 17),  // "signalMsgToClient"
        QT_MOC_LITERAL(91, 4),  // "type"
        QT_MOC_LITERAL(96, 2),  // "id"
        QT_MOC_LITERAL(99, 7),  // "dataVal"
        QT_MOC_LITERAL(107, 14),  // "SltSendMessage"
        QT_MOC_LITERAL(122, 12),  // "SltConnected"
        QT_MOC_LITERAL(135, 15),  // "SltDisconnected"
        QT_MOC_LITERAL(151, 12)   // "SltReadyRead"
    },
    "ClientSocket",
    "signalConnected",
    "",
    "signalDisConnected",
    "signalDownloadFile",
    "json",
    "signalMsgToClient",
    "type",
    "id",
    "dataVal",
    "SltSendMessage",
    "SltConnected",
    "SltDisconnected",
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
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    1,   64,    2, 0x06,    3 /* Public */,
       6,    3,   67,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    2,   74,    2, 0x0a,    9 /* Public */,
      11,    0,   79,    2, 0x08,   12 /* Private */,
      12,    0,   80,    2, 0x08,   13 /* Private */,
      13,    0,   81,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonValue,    5,
    QMetaType::Void, QMetaType::UChar, QMetaType::Int, QMetaType::QJsonValue,    7,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::QJsonValue,    7,    5,
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
        // method 'signalConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalDisConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalDownloadFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'signalMsgToClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'SltSendMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'SltConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltDisconnected'
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
        case 0: _t->signalConnected(); break;
        case 1: _t->signalDisConnected(); break;
        case 2: _t->signalDownloadFile((*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[1]))); break;
        case 3: _t->signalMsgToClient((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[3]))); break;
        case 4: _t->SltSendMessage((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[2]))); break;
        case 5: _t->SltConnected(); break;
        case 6: _t->SltDisconnected(); break;
        case 7: _t->SltReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientSocket::*)();
            if (_t _q_method = &ClientSocket::signalConnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientSocket::*)();
            if (_t _q_method = &ClientSocket::signalDisConnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientSocket::*)(const QJsonValue & );
            if (_t _q_method = &ClientSocket::signalDownloadFile; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientSocket::*)(const quint8 & , const int & , const QJsonValue & );
            if (_t _q_method = &ClientSocket::signalMsgToClient; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
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
void ClientSocket::signalConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ClientSocket::signalDisConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ClientSocket::signalDownloadFile(const QJsonValue & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientSocket::signalMsgToClient(const quint8 & _t1, const int & _t2, const QJsonValue & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSClientFileSocketENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSClientFileSocketENDCLASS = QtMocHelpers::stringData(
    "ClientFileSocket",
    "signalConnected",
    "",
    "signalDisConnected",
    "signalRecvFinished",
    "id",
    "json",
    "displayError",
    "QAbstractSocket::SocketError",
    "SltReadyRead",
    "SltUpdateClientProgress",
    "numBytes"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientFileSocketENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[17];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[19];
    char stringdata5[3];
    char stringdata6[5];
    char stringdata7[13];
    char stringdata8[29];
    char stringdata9[13];
    char stringdata10[24];
    char stringdata11[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientFileSocketENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientFileSocketENDCLASS_t qt_meta_stringdata_CLASSClientFileSocketENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "ClientFileSocket"
        QT_MOC_LITERAL(17, 15),  // "signalConnected"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 18),  // "signalDisConnected"
        QT_MOC_LITERAL(53, 18),  // "signalRecvFinished"
        QT_MOC_LITERAL(72, 2),  // "id"
        QT_MOC_LITERAL(75, 4),  // "json"
        QT_MOC_LITERAL(80, 12),  // "displayError"
        QT_MOC_LITERAL(93, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(122, 12),  // "SltReadyRead"
        QT_MOC_LITERAL(135, 23),  // "SltUpdateClientProgress"
        QT_MOC_LITERAL(159, 8)   // "numBytes"
    },
    "ClientFileSocket",
    "signalConnected",
    "",
    "signalDisConnected",
    "signalRecvFinished",
    "id",
    "json",
    "displayError",
    "QAbstractSocket::SocketError",
    "SltReadyRead",
    "SltUpdateClientProgress",
    "numBytes"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientFileSocketENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,
       4,    2,   52,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   57,    2, 0x08,    6 /* Private */,
       9,    0,   60,    2, 0x08,    8 /* Private */,
      10,    1,   61,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonValue,    5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   11,

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
        // method 'signalConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalDisConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalRecvFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'displayError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'SltReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltUpdateClientProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>
    >,
    nullptr
} };

void ClientFileSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientFileSocket *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalConnected(); break;
        case 1: _t->signalDisConnected(); break;
        case 2: _t->signalRecvFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[2]))); break;
        case 3: _t->displayError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 4: _t->SltReadyRead(); break;
        case 5: _t->SltUpdateClientProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
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
            if (_t _q_method = &ClientFileSocket::signalConnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientFileSocket::*)();
            if (_t _q_method = &ClientFileSocket::signalDisConnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientFileSocket::*)(int , const QJsonValue & );
            if (_t _q_method = &ClientFileSocket::signalRecvFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
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
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ClientFileSocket::signalConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ClientFileSocket::signalDisConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ClientFileSocket::signalRecvFinished(int _t1, const QJsonValue & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
