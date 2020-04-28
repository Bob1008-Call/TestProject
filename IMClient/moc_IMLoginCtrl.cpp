/****************************************************************************
** Meta object code from reading C++ file 'IMLoginCtrl.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "control/IMLoginCtrl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMLoginCtrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMLoginCtrl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   13,   12,   12, 0x05,
      87,   78,   12,   12, 0x25,
     117,   12,   12,   12, 0x25,
     149,  142,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     202,  190,   12,   12, 0x0a,
     235,   12,   12,   12, 0x08,
     265,   12,   12,   12, 0x08,
     280,   12,   12,   12, 0x08,
     294,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMLoginCtrl[] = {
    "IMLoginCtrl\0\0,isLogin,me\0"
    "getLoginMessgae(QString,bool,const UserInformation*)\0"
    ",isLogin\0getLoginMessgae(QString,bool)\0"
    "getLoginMessgae(QString)\0tmpStr\0"
    "getQuestionAndAnswerSuccess(TempStrings)\0"
    "mes,isLogin\0changeLoginMessage(QString,bool)\0"
    "requestGetQuestionAndAnswer()\0"
    "requestLogin()\0sendRequest()\0readMessage()\0"
};

void IMLoginCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMLoginCtrl *_t = static_cast<IMLoginCtrl *>(_o);
        switch (_id) {
        case 0: _t->getLoginMessgae((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const UserInformation*(*)>(_a[3]))); break;
        case 1: _t->getLoginMessgae((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->getLoginMessgae((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->getQuestionAndAnswerSuccess((*reinterpret_cast< const TempStrings(*)>(_a[1]))); break;
        case 4: _t->changeLoginMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->requestGetQuestionAndAnswer(); break;
        case 6: _t->requestLogin(); break;
        case 7: _t->sendRequest(); break;
        case 8: _t->readMessage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IMLoginCtrl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMLoginCtrl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IMLoginCtrl,
      qt_meta_data_IMLoginCtrl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMLoginCtrl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMLoginCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMLoginCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMLoginCtrl))
        return static_cast<void*>(const_cast< IMLoginCtrl*>(this));
    return QObject::qt_metacast(_clname);
}

int IMLoginCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void IMLoginCtrl::getLoginMessgae(const QString & _t1, bool _t2, const UserInformation * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 3
void IMLoginCtrl::getQuestionAndAnswerSuccess(const TempStrings & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
