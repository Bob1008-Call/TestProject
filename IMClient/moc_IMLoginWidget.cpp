/****************************************************************************
** Meta object code from reading C++ file 'IMLoginWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/IMLoginWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMLoginWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMLoginWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      47,   32,   14,   14, 0x0a,
     111,   99,   14,   14, 0x2a,
     145,   14,  140,   14, 0x0a,
     162,   14,   14,   14, 0x0a,
     180,   14,   14,   14, 0x08,
     203,   14,   14,   14, 0x08,
     233,  227,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMLoginWidget[] = {
    "IMLoginWidget\0\0showMainWidget()\0"
    "mes,isLogin,me\0"
    "setLabelStatus(QString,bool,const UserInformation*)\0"
    "mes,isLogin\0setLabelStatus(QString,bool)\0"
    "bool\0getIsAutoLogin()\0onClickBtnLogin()\0"
    "onClickLabelRegister()\0onClickLabelForgotPwd()\0"
    "state\0onClickCbAutoLogin(int)\0"
};

void IMLoginWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMLoginWidget *_t = static_cast<IMLoginWidget *>(_o);
        switch (_id) {
        case 0: _t->showMainWidget(); break;
        case 1: _t->setLabelStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const UserInformation*(*)>(_a[3]))); break;
        case 2: _t->setLabelStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: { bool _r = _t->getIsAutoLogin();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->onClickBtnLogin(); break;
        case 5: _t->onClickLabelRegister(); break;
        case 6: _t->onClickLabelForgotPwd(); break;
        case 7: _t->onClickCbAutoLogin((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IMLoginWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMLoginWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMLoginWidget,
      qt_meta_data_IMLoginWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMLoginWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMLoginWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMLoginWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMLoginWidget))
        return static_cast<void*>(const_cast< IMLoginWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMLoginWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
