/****************************************************************************
** Meta object code from reading C++ file 'org.gnome.SettingsDaemon.h'
**
** Created: Wed Jun 12 22:48:19 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dbusbindings/org.gnome.SettingsDaemon.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'org.gnome.SettingsDaemon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OrgGnomeSettingsDaemonMediaKeysInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      50,   42,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
     109,   42,   89,   41, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OrgGnomeSettingsDaemonMediaKeysInterface[] = {
    "OrgGnomeSettingsDaemonMediaKeysInterface\0"
    "\0in0,in1\0MediaPlayerKeyPressed(QString,QString)\0"
    "QDBusPendingReply<>\0"
    "GrabMediaPlayerKeys(QString,uint)\0"
};

void OrgGnomeSettingsDaemonMediaKeysInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OrgGnomeSettingsDaemonMediaKeysInterface *_t = static_cast<OrgGnomeSettingsDaemonMediaKeysInterface *>(_o);
        switch (_id) {
        case 0: _t->MediaPlayerKeyPressed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: { QDBusPendingReply<> _r = _t->GrabMediaPlayerKeys((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OrgGnomeSettingsDaemonMediaKeysInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OrgGnomeSettingsDaemonMediaKeysInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgGnomeSettingsDaemonMediaKeysInterface,
      qt_meta_data_OrgGnomeSettingsDaemonMediaKeysInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrgGnomeSettingsDaemonMediaKeysInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrgGnomeSettingsDaemonMediaKeysInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrgGnomeSettingsDaemonMediaKeysInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrgGnomeSettingsDaemonMediaKeysInterface))
        return static_cast<void*>(const_cast< OrgGnomeSettingsDaemonMediaKeysInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgGnomeSettingsDaemonMediaKeysInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void OrgGnomeSettingsDaemonMediaKeysInterface::MediaPlayerKeyPressed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
