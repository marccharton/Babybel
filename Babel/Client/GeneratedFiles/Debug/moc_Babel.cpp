/****************************************************************************
** Meta object code from reading C++ file 'Babel.hpp'
**
** Created: Mon 14. Jan 01:00:10 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Includes/Babel.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Babel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Babel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,
      23,    6,    6,    6, 0x0a,
      41,    6,    6,    6, 0x0a,
      74,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Babel[] = {
    "Babel\0\0connectAction()\0configureServer()\0"
    "configureServerDestroy(QObject*)\0"
    "buttonEffect(QString)\0"
};

const QMetaObject Babel::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Babel,
      qt_meta_data_Babel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Babel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Babel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Babel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Babel))
        return static_cast<void*>(const_cast< Babel*>(this));
    if (!strcmp(_clname, "Ui_ClientBabel"))
        return static_cast< Ui_ClientBabel*>(const_cast< Babel*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Babel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: connectAction(); break;
        case 1: configureServer(); break;
        case 2: configureServerDestroy((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: buttonEffect((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
