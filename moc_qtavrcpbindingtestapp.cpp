/****************************************************************************
** Meta object code from reading C++ file 'qtavrcpbindingtestapp.h'
**
** Created: Wed Jun 12 22:59:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "avrcpprofile/qtavrcpbindingtestapp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtavrcpbindingtestapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtAvrcpBindingTestApp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      34,   22,   22,   22, 0x0a,
      46,   22,   22,   22, 0x0a,
      57,   22,   22,   22, 0x0a,
      68,   22,   22,   22, 0x0a,
      79,   22,   22,   22, 0x0a,
      93,   22,   22,   22, 0x0a,
     125,  117,   22,   22, 0x0a,
     176,   22,   22,   22, 0x0a,
     209,  203,   22,   22, 0x0a,
     236,  234,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QtAvrcpBindingTestApp[] = {
    "QtAvrcpBindingTestApp\0\0playSlot()\0"
    "pauseSlot()\0stopSlot()\0nextSlot()\0"
    "prevSlot()\0connectSlot()\0"
    "btDeamonConnectedSlot()\0in0,in1\0"
    "btDeamonConnectionStatusSlot(QString,QDBusVariant)\0"
    "btDeamonDisconnectedSlot()\0event\0"
    "closeEvent(QCloseEvent*)\0,\0"
    "mediakeysSlot(QString,QString)\0"
};

void QtAvrcpBindingTestApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtAvrcpBindingTestApp *_t = static_cast<QtAvrcpBindingTestApp *>(_o);
        switch (_id) {
        case 0: _t->playSlot(); break;
        case 1: _t->pauseSlot(); break;
        case 2: _t->stopSlot(); break;
        case 3: _t->nextSlot(); break;
        case 4: _t->prevSlot(); break;
        case 5: _t->connectSlot(); break;
        case 6: _t->btDeamonConnectedSlot(); break;
        case 7: _t->btDeamonConnectionStatusSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
        case 8: _t->btDeamonDisconnectedSlot(); break;
        case 9: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 10: _t->mediakeysSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtAvrcpBindingTestApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtAvrcpBindingTestApp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtAvrcpBindingTestApp,
      qt_meta_data_QtAvrcpBindingTestApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtAvrcpBindingTestApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtAvrcpBindingTestApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtAvrcpBindingTestApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtAvrcpBindingTestApp))
        return static_cast<void*>(const_cast< QtAvrcpBindingTestApp*>(this));
    return QWidget::qt_metacast(_clname);
}

int QtAvrcpBindingTestApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
