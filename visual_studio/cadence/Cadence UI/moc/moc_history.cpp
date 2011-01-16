/****************************************************************************
** Meta object code from reading C++ file 'history.h'
**
** Created: Sun 16. Jan 01:38:23 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../modules/ui/src/history.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'history.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HistoryLog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x0a,
      47,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HistoryLog[] = {
    "HistoryLog\0\0item\0doubleclick(QListWidgetItem*)\0"
    "savehist()\0"
};

const QMetaObject HistoryLog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HistoryLog,
      qt_meta_data_HistoryLog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HistoryLog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HistoryLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HistoryLog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryLog))
        return static_cast<void*>(const_cast< HistoryLog*>(this));
    return QWidget::qt_metacast(_clname);
}

int HistoryLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: doubleclick((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: savehist(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
