/****************************************************************************
** Meta object code from reading C++ file 'NemAPI.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/NemAPI.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NemAPI.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Snap2ChatAPISimple[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      47,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      81,   19,   19,   19, 0x08,

 // methods: signature, parameters, type, tag, flags
     101,   94,   19,   19, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_Snap2ChatAPISimple[] = {
    "Snap2ChatAPISimple\0\0response,httpcode,endpoint\0"
    "complete(QString,QString,QString)\0"
    "onComplete()\0params\0request(QVariant)\0"
};

void Snap2ChatAPISimple::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Snap2ChatAPISimple *_t = static_cast<Snap2ChatAPISimple *>(_o);
        switch (_id) {
        case 0: _t->complete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->onComplete(); break;
        case 2: _t->request((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Snap2ChatAPISimple::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Snap2ChatAPISimple::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Snap2ChatAPISimple,
      qt_meta_data_Snap2ChatAPISimple, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Snap2ChatAPISimple::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Snap2ChatAPISimple::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Snap2ChatAPISimple::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Snap2ChatAPISimple))
        return static_cast<void*>(const_cast< Snap2ChatAPISimple*>(this));
    return QObject::qt_metacast(_clname);
}

int Snap2ChatAPISimple::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Snap2ChatAPISimple::complete(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
