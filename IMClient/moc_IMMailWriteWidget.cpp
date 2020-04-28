/****************************************************************************
** Meta object code from reading C++ file 'IMMailWriteWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/IMMailWriteWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMMailWriteWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMMailWriteWidget[] = {

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
      24,   19,   18,   18, 0x08,
      53,   48,   18,   18, 0x08,
      87,   79,   18,   18, 0x08,
     108,   79,   18,   18, 0x08,
     131,   79,   18,   18, 0x08,
     157,   18,   18,   18, 0x08,
     175,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMMailWriteWidget[] = {
    "IMMailWriteWidget\0\0font\0setInputTextFont(QFont)\0"
    "size\0setInputTextSize(QString)\0checked\0"
    "onClickBtnBold(bool)\0onClickBtnItalic(bool)\0"
    "onClickBtnUnderline(bool)\0onClickBtnColor()\0"
    "onClickBtnSend()\0"
};

void IMMailWriteWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMMailWriteWidget *_t = static_cast<IMMailWriteWidget *>(_o);
        switch (_id) {
        case 0: _t->setInputTextFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 1: _t->setInputTextSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onClickBtnBold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onClickBtnItalic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onClickBtnUnderline((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onClickBtnColor(); break;
        case 6: _t->onClickBtnSend(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IMMailWriteWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMMailWriteWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMMailWriteWidget,
      qt_meta_data_IMMailWriteWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMMailWriteWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMMailWriteWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMMailWriteWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMMailWriteWidget))
        return static_cast<void*>(const_cast< IMMailWriteWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMMailWriteWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
