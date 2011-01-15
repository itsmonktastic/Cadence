/****************************************************************************
** Meta object code from reading C++ file 'objecttree.h'
**
** Created: Sat 15. Jan 20:48:40 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../modules/ui/src/objecttree.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objecttree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ObjectTree[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   12,   11,   11, 0x08,
      39,   12,   11,   11, 0x08,
      74,   69,   11,   11, 0x08,
     101,   69,   11,   11, 0x08,
     143,  129,   11,   11, 0x08,
     198,  185,   11,   11, 0x08,
     246,   11,   11,   11, 0x08,
     261,   11,   11,   11, 0x08,
     276,   11,   11,   11, 0x08,
     289,   11,   11,   11, 0x08,
     305,   11,   11,   11, 0x08,
     315,   11,   11,   11, 0x08,
     324,   11,   11,   11, 0x08,
     333,   11,   11,   11, 0x08,
     347,   11,   11,   11, 0x08,
     360,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ObjectTree[] = {
    "ObjectTree\0\0i\0onItem(QTreeWidgetItem*)\0"
    "itemClicked(QTreeWidgetItem*)\0item\0"
    "expanded(QTreeWidgetItem*)\0"
    "collapsed(QTreeWidgetItem*)\0item,col,text\0"
    "itemRenamed(QTreeWidgetItem*,int,QString)\0"
    "item,pos,col\0"
    "rightButtonClicked(QTreeWidgetItem*,QPoint,int)\0"
    "addAttribute()\0deleteObject()\0"
    "saveObject()\0monitorObject()\0objcopy()\0"
    "objcut()\0objref()\0traceObject()\0"
    "editObject()\0viewObject()\0"
};

const QMetaObject ObjectTree::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ObjectTree,
      qt_meta_data_ObjectTree, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ObjectTree::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ObjectTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ObjectTree::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectTree))
        return static_cast<void*>(const_cast< ObjectTree*>(this));
    return QWidget::qt_metacast(_clname);
}

int ObjectTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: expanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: collapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: itemRenamed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: rightButtonClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: addAttribute(); break;
        case 7: deleteObject(); break;
        case 8: saveObject(); break;
        case 9: monitorObject(); break;
        case 10: objcopy(); break;
        case 11: objcut(); break;
        case 12: objref(); break;
        case 13: traceObject(); break;
        case 14: editObject(); break;
        case 15: viewObject(); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
