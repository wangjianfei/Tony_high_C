/****************************************************************************
** Meta object code from reading C++ file 'display.h'
**
** Created: Mon Nov 7 20:41:44 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "display.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mydisplay[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_mydisplay[] = {
    "mydisplay\0\0started()\0"
};

const QMetaObject mydisplay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mydisplay,
      qt_meta_data_mydisplay, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mydisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mydisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mydisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mydisplay))
        return static_cast<void*>(const_cast< mydisplay*>(this));
    return QWidget::qt_metacast(_clname);
}

int mydisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: started(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void mydisplay::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
