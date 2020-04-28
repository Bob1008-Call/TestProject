/****************************************************************************
** Meta object code from reading C++ file 'IMFriendButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/IMFriendButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMFriendButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMFriendButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   15,   15,   15, 0x0a,
      72,   15,   15,   15, 0x0a,
      93,   15,   15,   15, 0x0a,
     114,   15,   15,   15, 0x0a,
     134,   15,   15,   15, 0x0a,
     152,   15,   15,   15, 0x0a,
     177,   15,   15,   15, 0x0a,
     199,   15,   15,   15, 0x0a,
     213,   15,   15,   15, 0x0a,
     235,   15,   15,   15, 0x0a,
     255,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMFriendButton[] = {
    "IMFriendButton\0\0deleteFriendSignal(QString)\0"
    "onDoubleClickFriendButton()\0"
    "onClickRightButton()\0onClickSendMessage()\0"
    "onClickShowRecord()\0onClickSendMail()\0"
    "onClickShowInformation()\0onClickChangeRemark()\0"
    "onClickMove()\0onClickRemoveFriend()\0"
    "onClickEnterSpace()\0chatRoomQuit()\0"
};

void IMFriendButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMFriendButton *_t = static_cast<IMFriendButton *>(_o);
        switch (_id) {
        case 0: _t->deleteFriendSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onDoubleClickFriendButton(); break;
        case 2: _t->onClickRightButton(); break;
        case 3: _t->onClickSendMessage(); break;
        case 4: _t->onClickShowRecord(); break;
        case 5: _t->onClickSendMail(); break;
        case 6: _t->onClickShowInformation(); break;
        case 7: _t->onClickChangeRemark(); break;
        case 8: _t->onClickMove(); break;
        case 9: _t->onClickRemoveFriend(); break;
        case 10: _t->onClickEnterSpace(); break;
        case 11: _t->chatRoomQuit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IMFriendButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMFriendButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_IMFriendButton,
      qt_meta_data_IMFriendButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMFriendButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMFriendButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMFriendButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMFriendButton))
        return static_cast<void*>(const_cast< IMFriendButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int IMFriendButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void IMFriendButton::deleteFriendSignal(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
