/****************************************************************************
** Meta object code from reading C++ file 'observableviewer.h'
**
** Created: Sun 16. Jan 01:38:23 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../modules/ui/src/observableviewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'observableviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ObservableViewer[] = {

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
      18,   17,   17,   17, 0x0a,
      27,   17,   17,   17, 0x0a,
      37,   17,   17,   17, 0x0a,
      53,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ObservableViewer[] = {
    "ObservableViewer\0\0submit()\0closeme()\0"
    "typechange(int)\0textchanged()\0"
};

const QMetaObject ObservableViewer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ObservableViewer,
      qt_meta_data_ObservableViewer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ObservableViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ObservableViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ObservableViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ObservableViewer))
        return static_cast<void*>(const_cast< ObservableViewer*>(this));
    return QWidget::qt_metacast(_clname);
}

int ObservableViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: submit(); break;
        case 1: closeme(); break;
        case 2: typechange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: textchanged(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
