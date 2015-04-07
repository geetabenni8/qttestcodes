/****************************************************************************
** Meta object code from reading C++ file 'leds.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sqlInQt/leds.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'leds.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Leds[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      26,    5,    5,    5, 0x08,
      46,    5,    5,    5, 0x08,
      66,    5,    5,    5, 0x08,
      86,    5,    5,    5, 0x08,
     107,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Leds[] = {
    "Leds\0\0on_leds_1_clicked()\0on_leds_2_clicked()\0"
    "on_leds_3_clicked()\0on_leds_4_clicked()\0"
    "on_all_led_clicked()\0on_led_start_stop_clicked()\0"
};

void Leds::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Leds *_t = static_cast<Leds *>(_o);
        switch (_id) {
        case 0: _t->on_leds_1_clicked(); break;
        case 1: _t->on_leds_2_clicked(); break;
        case 2: _t->on_leds_3_clicked(); break;
        case 3: _t->on_leds_4_clicked(); break;
        case 4: _t->on_all_led_clicked(); break;
        case 5: _t->on_led_start_stop_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Leds::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Leds::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Leds,
      qt_meta_data_Leds, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Leds::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Leds::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Leds::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Leds))
        return static_cast<void*>(const_cast< Leds*>(this));
    return QDialog::qt_metacast(_clname);
}

int Leds::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
