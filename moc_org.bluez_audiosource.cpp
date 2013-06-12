/****************************************************************************
** Meta object code from reading C++ file 'org.bluez_audiosource.h'
**
** Created: Sun Jun 9 22:56:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dbusbindings/org.bluez_audiosource.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'org.bluez_audiosource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OrgBluezAudioSourceInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      50,   29,   30,   29, 0x0a,
      60,   29,   30,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OrgBluezAudioSourceInterface[] = {
    "OrgBluezAudioSourceInterface\0\0"
    "QDBusPendingReply<>\0Connect()\0"
    "Disconnect()\0"
};

void OrgBluezAudioSourceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OrgBluezAudioSourceInterface *_t = static_cast<OrgBluezAudioSourceInterface *>(_o);
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = _t->Connect();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 1: { QDBusPendingReply<> _r = _t->Disconnect();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OrgBluezAudioSourceInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OrgBluezAudioSourceInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgBluezAudioSourceInterface,
      qt_meta_data_OrgBluezAudioSourceInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrgBluezAudioSourceInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrgBluezAudioSourceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrgBluezAudioSourceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrgBluezAudioSourceInterface))
        return static_cast<void*>(const_cast< OrgBluezAudioSourceInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgBluezAudioSourceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
