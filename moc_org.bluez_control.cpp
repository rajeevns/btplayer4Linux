/****************************************************************************
** Meta object code from reading C++ file 'org.bluez_control.h'
**
** Created: Sun Jun 9 22:56:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dbusbindings/org.bluez_control.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'org.bluez_control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OrgBluezControlInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,
      38,   25,   25,   25, 0x05,
      61,   53,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     123,   25,   99,   25, 0x0a,
     157,   25,  137,   25, 0x0a,
     164,   25,  137,   25, 0x0a,
     176,   25,  137,   25, 0x0a,
     183,   25,  137,   25, 0x0a,
     196,   25,  137,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OrgBluezControlInterface[] = {
    "OrgBluezControlInterface\0\0Connected()\0"
    "DisConnected()\0in0,in1\0"
    "PropertyChanged(QString,QDBusVariant)\0"
    "QDBusPendingReply<bool>\0IsConnected()\0"
    "QDBusPendingReply<>\0Next()\0PlayPause()\0"
    "Prev()\0VolumeDown()\0VolumeUp()\0"
};

void OrgBluezControlInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OrgBluezControlInterface *_t = static_cast<OrgBluezControlInterface *>(_o);
        switch (_id) {
        case 0: _t->Connected(); break;
        case 1: _t->DisConnected(); break;
        case 2: _t->PropertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
        case 3: { QDBusPendingReply<bool> _r = _t->IsConnected();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<> _r = _t->Next();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 5: { QDBusPendingReply<> _r = _t->PlayPause();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<> _r = _t->Prev();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<> _r = _t->VolumeDown();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 8: { QDBusPendingReply<> _r = _t->VolumeUp();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OrgBluezControlInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OrgBluezControlInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgBluezControlInterface,
      qt_meta_data_OrgBluezControlInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrgBluezControlInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrgBluezControlInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrgBluezControlInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrgBluezControlInterface))
        return static_cast<void*>(const_cast< OrgBluezControlInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgBluezControlInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void OrgBluezControlInterface::Connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void OrgBluezControlInterface::DisConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void OrgBluezControlInterface::PropertyChanged(const QString & _t1, const QDBusVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
