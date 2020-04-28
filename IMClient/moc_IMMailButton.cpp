/****************************************************************************
** Meta object code from reading C++ file 'IMMailButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/IMMailButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMMailButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMMailButton[] = {

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
      14,   13,   13,   13, 0x08,
      34,   13,   13,   13, 0x08,
      66,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMMailButton[] = {
    "IMMailButton\0\0onClickDeleteMail()\0"
    "onDoubleClickDiscussionButton()\0"
    "onClickRightButton()\0"
};

void IMMailButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMMailButton *_t = static_cast<IMMailButton *>(_o);
        switch (_id) {
        case 0: _t->onClickDeleteMail(); break;
        case 1: _t->onDoubleClickDiscussionButton(); break;
        case 2: _t->onClickRightButton(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IMMailButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMMailButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_IMMailButton,
      qt_meta_data_IMMailButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMMailButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMMailButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMMailButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMMailButton))
        return static_cast<void*>(const_cast< IMMailButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int IMMailButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
