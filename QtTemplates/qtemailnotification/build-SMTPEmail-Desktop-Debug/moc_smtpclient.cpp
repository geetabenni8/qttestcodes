/****************************************************************************
** Meta object code from reading C++ file 'smtpclient.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SmtpClient-for-Qt-1.1/src/smtpclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smtpclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SmtpClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   47,   11,   11, 0x09,
     108,  102,   11,   11, 0x09,
     150,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SmtpClient[] = {
    "SmtpClient\0\0e\0smtpError(SmtpClient::SmtpError)\0"
    "state\0socketStateChanged(QAbstractSocket::SocketState)\0"
    "error\0socketError(QAbstractSocket::SocketError)\0"
    "socketReadyRead()\0"
};

void SmtpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SmtpClient *_t = static_cast<SmtpClient *>(_o);
        switch (_id) {
        case 0: _t->smtpError((*reinterpret_cast< SmtpClient::SmtpError(*)>(_a[1]))); break;
        case 1: _t->socketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 2: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->socketReadyRead(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SmtpClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SmtpClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SmtpClient,
      qt_meta_data_SmtpClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SmtpClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SmtpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SmtpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SmtpClient))
        return static_cast<void*>(const_cast< SmtpClient*>(this));
    return QObject::qt_metacast(_clname);
}

int SmtpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SmtpClient::smtpError(SmtpClient::SmtpError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
