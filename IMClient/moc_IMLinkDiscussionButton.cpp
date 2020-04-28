/****************************************************************************
** Meta object code from reading C++ file 'IMLinkDiscussionButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/IMLinkDiscussionButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMLinkDiscussionButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMLinkDiscussionButton[] = {

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
      24,   23,   23,   23, 0x0a,
      46,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMLinkDiscussionButton[] = {
    "IMLinkDiscussionButton\0\0onDoubleClickButton()\0"
    "ignoreMessage()\0"
};

void IMLinkDiscussionButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMLinkDiscussionButton *_t = static_cast<IMLinkDiscussionButton *>(_o);
        switch (_id) {
        case 0: _t->onDoubleClickButton(); break;
        case 1: _t->ignoreMessage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IMLinkDiscussionButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMLinkDiscussionButton::staticMetaObject = {
    { &IMLinkButton::staticMetaObject, qt_meta_stringdata_IMLinkDiscussionButton,
      qt_meta_data_IMLinkDiscussionButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMLinkDiscussionButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMLinkDiscussionButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMLinkDiscussionButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMLinkDiscussionButton))
        return static_cast<void*>(const_cast< IMLinkDiscussionButton*>(this));
    return IMLinkButton::qt_metacast(_clname);
}

int IMLinkDiscussionButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IMLinkButton::qt_metacall(_c, _id, _a);
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
