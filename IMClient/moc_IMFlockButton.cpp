/****************************************************************************
** Meta object code from reading C++ file 'IMFlockButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/IMFlockButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMFlockButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMFlockButton[] = {

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
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   14,   14,   14, 0x0a,
      68,   14,   14,   14, 0x0a,
      89,   14,   14,   14, 0x0a,
     110,   14,   14,   14, 0x0a,
     130,   14,   14,   14, 0x0a,
     155,   14,   14,   14, 0x0a,
     174,   14,   14,   14, 0x0a,
     194,   14,   14,   14, 0x0a,
     218,   14,   14,   14, 0x0a,
     238,   14,   14,   14, 0x0a,
     253,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMFlockButton[] = {
    "IMFlockButton\0\0leaveFlockSignal(QString)\0"
    "onDoubleClickFlockButton()\0"
    "onClickRightButton()\0onClickSendMessage()\0"
    "onClickShowRecord()\0onClickShowInformation()\0"
    "onClickDropFlock()\0onClickLeaveFlock()\0"
    "onClickAddMemberFlock()\0onClickEnterSpace()\0"
    "chatRoomQuit()\0setFlockMemberList(QVector<FlockMember>)\0"
};

void IMFlockButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMFlockButton *_t = static_cast<IMFlockButton *>(_o);
        switch (_id) {
        case 0: _t->leaveFlockSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onDoubleClickFlockButton(); break;
        case 2: _t->onClickRightButton(); break;
        case 3: _t->onClickSendMessage(); break;
        case 4: _t->onClickShowRecord(); break;
        case 5: _t->onClickShowInformation(); break;
        case 6: _t->onClickDropFlock(); break;
        case 7: _t->onClickLeaveFlock(); break;
        case 8: _t->onClickAddMemberFlock(); break;
        case 9: _t->onClickEnterSpace(); break;
        case 10: _t->chatRoomQuit(); break;
        case 11: _t->setFlockMemberList((*reinterpret_cast< const QVector<FlockMember>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IMFlockButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMFlockButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_IMFlockButton,
      qt_meta_data_IMFlockButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMFlockButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMFlockButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMFlockButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMFlockButton))
        return static_cast<void*>(const_cast< IMFlockButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int IMFlockButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void IMFlockButton::leaveFlockSignal(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
