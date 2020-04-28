/****************************************************************************
** Meta object code from reading C++ file 'IMMailInformationWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/IMMailInformationWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMMailInformationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMMailInformationWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      44,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMMailInformationWidget[] = {
    "IMMailInformationWidget\0\0onClickBtnDelete()\0"
    "onClickBtnClose()\0"
};

void IMMailInformationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMMailInformationWidget *_t = static_cast<IMMailInformationWidget *>(_o);
        switch (_id) {
        case 0: _t->onClickBtnDelete(); break;
        case 1: _t->onClickBtnClose(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IMMailInformationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMMailInformationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMMailInformationWidget,
      qt_meta_data_IMMailInformationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMMailInformationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMMailInformationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMMailInformationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMMailInformationWidget))
        return static_cast<void*>(const_cast< IMMailInformationWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMMailInformationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
