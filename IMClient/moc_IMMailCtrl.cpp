/****************************************************************************
** Meta object code from reading C++ file 'IMMailCtrl.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "control/IMMailCtrl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMMailCtrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMMailCtrl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      56,   11,   11,   11, 0x05,
     101,   11,   11,   11, 0x05,
     124,   11,   11,   11, 0x05,
     152,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     179,   11,   11,   11, 0x0a,
     212,   11,   11,   11, 0x0a,
     232,   11,   11,   11, 0x0a,
     258,  253,   11,   11, 0x0a,
     293,  253,   11,   11, 0x0a,
     329,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMMailCtrl[] = {
    "IMMailCtrl\0\0getInMailsSuccess(QVector<MailInformation>)\0"
    "getOutMailsSuccess(QVector<MailInformation>)\0"
    "deleteMailSuccess(int)\0"
    "getOutMail(MailInformation)\0"
    "getInMail(MailInformation)\0"
    "requestSendMail(MailInformation)\0"
    "requestGetInMails()\0requestGetOutMails()\0"
    "mail\0requestDeleteMail(MailInformation)\0"
    "requestSetMailRead(MailInformation)\0"
    "readMessage()\0"
};

void IMMailCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMMailCtrl *_t = static_cast<IMMailCtrl *>(_o);
        switch (_id) {
        case 0: _t->getInMailsSuccess((*reinterpret_cast< const QVector<MailInformation>(*)>(_a[1]))); break;
        case 1: _t->getOutMailsSuccess((*reinterpret_cast< const QVector<MailInformation>(*)>(_a[1]))); break;
        case 2: _t->deleteMailSuccess((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->getOutMail((*reinterpret_cast< const MailInformation(*)>(_a[1]))); break;
        case 4: _t->getInMail((*reinterpret_cast< const MailInformation(*)>(_a[1]))); break;
        case 5: _t->requestSendMail((*reinterpret_cast< const MailInformation(*)>(_a[1]))); break;
        case 6: _t->requestGetInMails(); break;
        case 7: _t->requestGetOutMails(); break;
        case 8: _t->requestDeleteMail((*reinterpret_cast< const MailInformation(*)>(_a[1]))); break;
        case 9: _t->requestSetMailRead((*reinterpret_cast< const MailInformation(*)>(_a[1]))); break;
        case 10: _t->readMessage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IMMailCtrl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMMailCtrl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IMMailCtrl,
      qt_meta_data_IMMailCtrl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMMailCtrl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMMailCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMMailCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMMailCtrl))
        return static_cast<void*>(const_cast< IMMailCtrl*>(this));
    return QObject::qt_metacast(_clname);
}

int IMMailCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void IMMailCtrl::getInMailsSuccess(const QVector<MailInformation> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IMMailCtrl::getOutMailsSuccess(const QVector<MailInformation> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IMMailCtrl::deleteMailSuccess(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void IMMailCtrl::getOutMail(const MailInformation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void IMMailCtrl::getInMail(const MailInformation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
