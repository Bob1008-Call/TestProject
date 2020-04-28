/****************************************************************************
** Meta object code from reading C++ file 'IMFileReceiverWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/IMFileReceiverWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMFileReceiverWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMFileReceiverWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x0a,
      40,   21,   21,   21, 0x0a,
      59,   21,   21,   21, 0x0a,
      73,   21,   21,   21, 0x0a,
     116,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMFileReceiverWidget[] = {
    "IMFileReceiverWidget\0\0onClickBtnClose()\0"
    "onClickBtnCancel()\0readMessage()\0"
    "displayError(QAbstractSocket::SocketError)\0"
    "showClosedConnect()\0"
};

void IMFileReceiverWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMFileReceiverWidget *_t = static_cast<IMFileReceiverWidget *>(_o);
        switch (_id) {
        case 0: _t->onClickBtnClose(); break;
        case 1: _t->onClickBtnCancel(); break;
        case 2: _t->readMessage(); break;
        case 3: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->showClosedConnect(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IMFileReceiverWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMFileReceiverWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMFileReceiverWidget,
      qt_meta_data_IMFileReceiverWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMFileReceiverWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMFileReceiverWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMFileReceiverWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMFileReceiverWidget))
        return static_cast<void*>(const_cast< IMFileReceiverWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMFileReceiverWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
