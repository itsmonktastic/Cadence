/****************************************************************************
** Meta object code from reading C++ file 'inputwindow.h'
**
** Created: Sat 15. Jan 20:48:39 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../modules/ui/src/inputwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      18,    8,    8,    8, 0x0a,
      33,    8,    8,    8, 0x0a,
      44,    8,    8,    8, 0x0a,
      54,    8,    8,    8, 0x0a,
      65,    8,    8,    8, 0x0a,
      77,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IWindow[] = {
    "IWindow\0\0submit()\0editPrevious()\0"
    "editNext()\0editCut()\0editCopy()\0"
    "editPaste()\0textchanged()\0"
};

const QMetaObject IWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IWindow,
      qt_meta_data_IWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IWindow))
        return static_cast<void*>(const_cast< IWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int IWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: submit(); break;
        case 1: editPrevious(); break;
        case 2: editNext(); break;
        case 3: editCut(); break;
        case 4: editCopy(); break;
        case 5: editPaste(); break;
        case 6: textchanged(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
