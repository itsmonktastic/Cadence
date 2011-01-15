/****************************************************************************
** Meta object code from reading C++ file 'browser.h'
**
** Created: Sat 15. Jan 13:29:30 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../modules/ui/src/browser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Browser[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      24,    8,    8,    8, 0x0a,
      41,    8,    8,    8, 0x0a,
      60,    8,    8,    8, 0x0a,
      76,    8,    8,    8, 0x0a,
      89,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Browser[] = {
    "Browser\0\0updateScreen()\0showdefinition()\0"
    "browsedefinition()\0adddefinition()\0"
    "finishEdit()\0finishNewEdge()\0"
};

const QMetaObject Browser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Browser,
      qt_meta_data_Browser, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Browser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Browser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Browser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Browser))
        return static_cast<void*>(const_cast< Browser*>(this));
    if (!strcmp(_clname, "cadence::BaseAgent"))
        return static_cast< cadence::BaseAgent*>(const_cast< Browser*>(this));
    return QWidget::qt_metacast(_clname);
}

int Browser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateScreen(); break;
        case 1: showdefinition(); break;
        case 2: browsedefinition(); break;
        case 3: adddefinition(); break;
        case 4: finishEdit(); break;
        case 5: finishNewEdge(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
