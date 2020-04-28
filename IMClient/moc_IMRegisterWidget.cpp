/****************************************************************************
** Meta object code from reading C++ file 'IMRegisterWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/IMRegisterWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMRegisterWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMRegisterWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      41,   17,   17,   17, 0x08,
      62,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMRegisterWidget[] = {
    "IMRegisterWidget\0\0resetBtnRegister(bool)\0"
    "onClickBtnRegister()\0conClickBtnCancel()\0"
};

void IMRegisterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMRegisterWidget *_t = static_cast<IMRegisterWidget *>(_o);
        switch (_id) {
        case 0: _t->resetBtnRegister((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onClickBtnRegister(); break;
        case 2: _t->conClickBtnCancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IMRegisterWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMRegisterWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMRegisterWidget,
      qt_meta_data_IMRegisterWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMRegisterWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMRegisterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMRegisterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMRegisterWidget))
        return static_cast<void*>(const_cast< IMRegisterWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMRegisterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
