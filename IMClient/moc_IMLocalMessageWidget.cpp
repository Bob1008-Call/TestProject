/****************************************************************************
** Meta object code from reading C++ file 'IMLocalMessageWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/IMLocalMessageWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMLocalMessageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMLocalMessageWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x0a,
      42,   21,   21,   21, 0x0a,
      61,   21,   21,   21, 0x0a,
      80,   21,   21,   21, 0x0a,
      96,   21,   21,   21, 0x0a,
     115,   21,   21,   21, 0x0a,
     134,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMLocalMessageWidget[] = {
    "IMLocalMessageWidget\0\0onClickDeleteDate()\0"
    "onClickDeleteOne()\0onClickDeleteAll()\0"
    "onClickImport()\0onClickExportOne()\0"
    "onClickExportAll()\0onClickGetMessage()\0"
};

void IMLocalMessageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMLocalMessageWidget *_t = static_cast<IMLocalMessageWidget *>(_o);
        switch (_id) {
        case 0: _t->onClickDeleteDate(); break;
        case 1: _t->onClickDeleteOne(); break;
        case 2: _t->onClickDeleteAll(); break;
        case 3: _t->onClickImport(); break;
        case 4: _t->onClickExportOne(); break;
        case 5: _t->onClickExportAll(); break;
        case 6: _t->onClickGetMessage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IMLocalMessageWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMLocalMessageWidget::staticMetaObject = {
    { &IMMessageWidget::staticMetaObject, qt_meta_stringdata_IMLocalMessageWidget,
      qt_meta_data_IMLocalMessageWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMLocalMessageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMLocalMessageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMLocalMessageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMLocalMessageWidget))
        return static_cast<void*>(const_cast< IMLocalMessageWidget*>(this));
    return IMMessageWidget::qt_metacast(_clname);
}

int IMLocalMessageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IMMessageWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
