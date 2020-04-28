/****************************************************************************
** Meta object code from reading C++ file 'IMNetWorkMessageWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/IMNetWorkMessageWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMNetWorkMessageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMNetWorkMessageWidget[] = {

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
      24,   23,   23,   23, 0x0a,
      44,   23,   23,   23, 0x0a,
      63,   23,   23,   23, 0x0a,
      82,   23,   23,   23, 0x0a,
     101,   23,   23,   23, 0x0a,
     120,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMNetWorkMessageWidget[] = {
    "IMNetWorkMessageWidget\0\0onClickDeleteDate()\0"
    "onClickDeleteOne()\0onClickDeleteAll()\0"
    "onClickExportOne()\0onClickExportAll()\0"
    "onClickGetMessage()\0"
};

void IMNetWorkMessageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMNetWorkMessageWidget *_t = static_cast<IMNetWorkMessageWidget *>(_o);
        switch (_id) {
        case 0: _t->onClickDeleteDate(); break;
        case 1: _t->onClickDeleteOne(); break;
        case 2: _t->onClickDeleteAll(); break;
        case 3: _t->onClickExportOne(); break;
        case 4: _t->onClickExportAll(); break;
        case 5: _t->onClickGetMessage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IMNetWorkMessageWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMNetWorkMessageWidget::staticMetaObject = {
    { &IMMessageWidget::staticMetaObject, qt_meta_stringdata_IMNetWorkMessageWidget,
      qt_meta_data_IMNetWorkMessageWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMNetWorkMessageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMNetWorkMessageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMNetWorkMessageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMNetWorkMessageWidget))
        return static_cast<void*>(const_cast< IMNetWorkMessageWidget*>(this));
    return IMMessageWidget::qt_metacast(_clname);
}

int IMNetWorkMessageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IMMessageWidget::qt_metacall(_c, _id, _a);
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
