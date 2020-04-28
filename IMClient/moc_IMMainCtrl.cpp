/****************************************************************************
** Meta object code from reading C++ file 'IMMainCtrl.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "control/IMMainCtrl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMMainCtrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMMainCtrl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      63,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      30,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      58,   11,   11,   11, 0x05,
     102,   11,   11,   11, 0x05,
     156,   11,   11,   11, 0x05,
     201,   11,   11,   11, 0x05,
     256,   11,   11,   11, 0x05,
     292,  290,   11,   11, 0x05,
     328,   11,   11,   11, 0x05,
     375,   11,   11,   11, 0x05,
     420,   11,   11,   11, 0x05,
     461,   11,   11,   11, 0x05,
     505,   11,   11,   11, 0x05,
     547,  544,   11,   11, 0x05,
     592,  290,   11,   11, 0x05,
     638,  544,   11,   11, 0x05,
     696,   11,   11,   11, 0x05,
     722,  544,   11,   11, 0x05,
     765,  544,   11,   11, 0x05,
     812,   11,   11,   11, 0x05,
     849,   11,   11,   11, 0x05,
     887,   11,   11,   11, 0x05,
     924,  544,   11,   11, 0x05,
     997,   11,   11,   11, 0x05,
    1028,  290,   11,   11, 0x05,
    1068,   11,   11,   11, 0x05,
    1115,   11,   11,   11, 0x05,
    1162,  290,   11,   11, 0x05,
    1196,  544,   11,   11, 0x05,
    1259, 1244,   11,   11, 0x05,
    1328,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
    1348,   11,   11,   11, 0x0a,
    1379,   11,   11,   11, 0x0a,
    1416,   11,   11,   11, 0x0a,
    1458,   11,   11,   11, 0x0a,
    1490,   11,   11,   11, 0x0a,
    1527,   11,   11,   11, 0x0a,
    1564,   11,   11,   11, 0x0a,
    1590,   11,   11,   11, 0x0a,
    1644, 1634,   11,   11, 0x0a,
    1700, 1679,   11,   11, 0x0a,
    1765, 1751,   11,   11, 0x0a,
    1806, 1802,   11,   11, 0x0a,
    1836, 1802,   11,   11, 0x0a,
    1865, 1802,   11,   11, 0x0a,
    1899,  290,   11,   11, 0x0a,
    1933,  290,   11,   11, 0x0a,
    1972,  290,   11,   11, 0x0a,
    2007,  290,   11,   11, 0x0a,
    2047,   11,   11,   11, 0x0a,
    2079,   11,   11,   11, 0x0a,
    2116, 1802,   11,   11, 0x0a,
    2162, 1802,   11,   11, 0x0a,
    2207,   11,   11,   11, 0x0a,
    2262, 2255,   11,   11, 0x0a,
    2306,   11,   11,   11, 0x0a,
    2364,   11,   11,   11, 0x0a,
    2389,   11,   11,   11, 0x0a,
    2415,  290,   11,   11, 0x0a,
    2476, 2449,   11,   11, 0x0a,
    2524,  290,   11,   11, 0x0a,
    2601, 2587,   11,   11, 0x0a,
    2635,   11,   11,   11, 0x0a,
    2649,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMMainCtrl[] = {
    "IMMainCtrl\0\0getFriendsSuccess(QVector<FriendInformation>)\0"
    "getFlocksSuccess(QVector<FlockInformation>)\0"
    "getDiscussionsSuccess(QVector<DiscussionInformation>)\0"
    "getFlockMembersSuccess(QVector<FlockMember>)\0"
    "getDiscussionMembersSuccess(QVector<DiscussionMember>)\0"
    "getFriendTalkMessage(TalkMessage)\0,\0"
    "getFriendChangedStatus(QString,int)\0"
    "getFriendChangedInformation(FriendInformation)\0"
    "getFriendInformationSuccess(UserInformation)\0"
    "getMyInformationSuccess(UserInformation)\0"
    "changeMyInformationSuccess(UserInformation)\0"
    "changeFriendRemarkSuccess(TempStrings)\0"
    ",,\0deleteFriendSuccess(QString,QString,QString)\0"
    "getFriendRequest(TalkMessage,UserInformation)\0"
    "getFlockRequest(TalkMessage,FlockMember,FlockInformation)\0"
    "dropFlockSuccess(QString)\0"
    "leaveFlockSuccess(QString,QString,QString)\0"
    "haveMemberleavedFlock(QString,QString,QString)\0"
    "changeFlockSuccess(FlockInformation)\0"
    "changeFlockRemarkSuccess(TempStrings)\0"
    "createFlockSuccess(FlockInformation)\0"
    "getDiscussionRequest(TalkMessage,DiscussionMember,DiscussionInformatio"
    "n)\0"
    "dropDiscussionSuccess(QString)\0"
    "leaveDiscussionSuccess(QString,QString)\0"
    "changeDiscussionSuccess(DiscussionInformation)\0"
    "createDiscussionSuccess(DiscussionInformation)\0"
    "renameBoxSuccess(QString,QString)\0"
    "moveFriendToBoxSuccess(QString,QString,QString)\0"
    "friendID,date,\0"
    "getNetworkHistoryMessagesSuccess(QString,QDate,QVector<TalkMessage>)\0"
    "closeWindowSignal()\0requestGetFriendsInformation()\0"
    "requestGetFlocksInformation(QString)\0"
    "requestGetDiscussionsInformation(QString)\0"
    "requestGetFlockMembers(QString)\0"
    "requestGetDiscussionMembers(QString)\0"
    "requestGetFriendInformation(QString)\0"
    "requestGetMyInformation()\0"
    "requestChangeMyInformation(UserInformation)\0"
    "id,status\0requestChangeMyStatus(QString,int)\0"
    "myID,friendID,remark\0"
    "requestChangeFriendRemark(QString,QString,QString)\0"
    "myID,friendID\0requestDeleteFriend(QString,QString)\0"
    "mes\0requestAddFriend(TalkMessage)\0"
    "requestAddFlock(TalkMessage)\0"
    "requestAddDiscussion(TalkMessage)\0"
    "requestDropFlock(QString,QString)\0"
    "requestDropDiscussion(QString,QString)\0"
    "requestLeaveFlock(QString,QString)\0"
    "requestLeaveDiscussion(QString,QString)\0"
    "requestCreateFlock(TempStrings)\0"
    "requestCreateDiscussion(TempStrings)\0"
    "requestSendResultOfFriendRequest(TalkMessage)\0"
    "requestSendResultOfFlockRequest(TalkMessage)\0"
    "requestChangeFlockInformation(FlockInformation)\0"
    "tmpStr\0requestChangeFlockMemberRemark(TempStrings)\0"
    "requestChangeDiscussionInformation(DiscussionInformation)\0"
    "requestSendTalkMessage()\0"
    "requestRemoveBox(QString)\0"
    "requestRenameBox(QString,QString)\0"
    "friendID,oldTitle,newTitle\0"
    "requestMoveFriendToBox(QString,QString,QString)\0"
    "requestGetNetWorkHistoryMessageOneFriendOneDate(QString,QDate)\0"
    "oldPwd,newPwd\0requestChangePwd(QString,QString)\0"
    "readMessage()\0closeWindow()\0"
};

void IMMainCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMMainCtrl *_t = static_cast<IMMainCtrl *>(_o);
        switch (_id) {
        case 0: _t->getFriendsSuccess((*reinterpret_cast< const QVector<FriendInformation>(*)>(_a[1]))); break;
        case 1: _t->getFlocksSuccess((*reinterpret_cast< const QVector<FlockInformation>(*)>(_a[1]))); break;
        case 2: _t->getDiscussionsSuccess((*reinterpret_cast< const QVector<DiscussionInformation>(*)>(_a[1]))); break;
        case 3: _t->getFlockMembersSuccess((*reinterpret_cast< const QVector<FlockMember>(*)>(_a[1]))); break;
        case 4: _t->getDiscussionMembersSuccess((*reinterpret_cast< const QVector<DiscussionMember>(*)>(_a[1]))); break;
        case 5: _t->getFriendTalkMessage((*reinterpret_cast< const TalkMessage(*)>(_a[1]))); break;
        case 6: _t->getFriendChangedStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 7: _t->getFriendChangedInformation((*reinterpret_cast< const FriendInformation(*)>(_a[1]))); break;
        case 8: _t->getFriendInformationSuccess((*reinterpret_cast< const UserInformation(*)>(_a[1]))); break;
        case 9: _t->getMyInformationSuccess((*reinterpret_cast< const UserInformation(*)>(_a[1]))); break;
        case 10: _t->changeMyInformationSuccess((*reinterpret_cast< const UserInformation(*)>(_a[1]))); break;
        case 11: _t->changeFriendRemarkSuccess((*reinterpret_cast< const TempStrings(*)>(_a[1]))); break;
        case 12: _t->deleteFriendSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 13: _t->getFriendRequest((*reinterpret_cast< const TalkMessage(*)>(_a[1])),(*reinterpret_cast< const UserInformation(*)>(_a[2]))); break;
        case 14: _t->getFlockRequest((*reinterpret_cast< const TalkMessage(*)>(_a[1])),(*reinterpret_cast< const FlockMember(*)>(_a[2])),(*reinterpret_cast< const FlockInformation(*)>(_a[3]))); break;
        case 15: _t->dropFlockSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->leaveFlockSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 17: _t->haveMemberleavedFlock((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 18: _t->changeFlockSuccess((*reinterpret_cast< const FlockInformation(*)>(_a[1]))); break;
        case 19: _t->changeFlockRemarkSuccess((*reinterpret_cast< const TempStrings(*)>(_a[1]))); break;
        case 20: _t->createFlockSuccess((*reinterpret_cast< const FlockInformation(*)>(_a[1]))); break;
        case 21: _t->getDiscussionRequest((*reinterpret_cast< const TalkMessage(*)>(_a[1])),(*reinterpret_cast< const DiscussionMember(*)>(_a[2])),(*reinterpret_cast< const DiscussionInformation(*)>(_a[3]))); break;
        case 22: _t->dropDiscussionSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->leaveDiscussionSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 24: _t->changeDiscussionSuccess((*reinterpret_cast< const DiscussionInformation(*)>(_a[1]))); break;
        case 25: _t->createDiscussionSuccess((*reinterpret_cast< const DiscussionInformation(*)>(_a[1]))); break;
        case 26: _t->renameBoxSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 27: _t->moveFriendToBoxSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 28: _t->getNetworkHistoryMessagesSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDate(*)>(_a[2])),(*reinterpret_cast< const QVector<TalkMessage>(*)>(_a[3]))); break;
        case 29: _t->closeWindowSignal(); break;
        case 30: _t->requestGetFriendsInformation(); break;
        case 31: _t->requestGetFlocksInformation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->requestGetDiscussionsInformation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->requestGetFlockMembers((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->requestGetDiscussionMembers((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->requestGetFriendInformation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->requestGetMyInformation(); break;
        case 37: _t->requestChangeMyInformation((*reinterpret_cast< const UserInformation(*)>(_a[1]))); break;
        case 38: _t->requestChangeMyStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 39: _t->requestChangeFriendRemark((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 40: _t->requestDeleteFriend((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 41: _t->requestAddFriend((*reinterpret_cast< const TalkMessage(*)>(_a[1]))); break;
        case 42: _t->requestAddFlock((*reinterpret_cast< const TalkMessage(*)>(_a[1]))); break;
        case 43: _t->requestAddDiscussion((*reinterpret_cast< const TalkMessage(*)>(_a[1]))); break;
        case 44: _t->requestDropFlock((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 45: _t->requestDropDiscussion((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 46: _t->requestLeaveFlock((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 47: _t->requestLeaveDiscussion((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 48: _t->requestCreateFlock((*reinterpret_cast< const TempStrings(*)>(_a[1]))); break;
        case 49: _t->requestCreateDiscussion((*reinterpret_cast< const TempStrings(*)>(_a[1]))); break;
        case 50: _t->requestSendResultOfFriendRequest((*reinterpret_cast< const TalkMessage(*)>(_a[1]))); break;
        case 51: _t->requestSendResultOfFlockRequest((*reinterpret_cast< const TalkMessage(*)>(_a[1]))); break;
        case 52: _t->requestChangeFlockInformation((*reinterpret_cast< const FlockInformation(*)>(_a[1]))); break;
        case 53: _t->requestChangeFlockMemberRemark((*reinterpret_cast< const TempStrings(*)>(_a[1]))); break;
        case 54: _t->requestChangeDiscussionInformation((*reinterpret_cast< const DiscussionInformation(*)>(_a[1]))); break;
        case 55: _t->requestSendTalkMessage(); break;
        case 56: _t->requestRemoveBox((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 57: _t->requestRenameBox((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 58: _t->requestMoveFriendToBox((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 59: _t->requestGetNetWorkHistoryMessageOneFriendOneDate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDate(*)>(_a[2]))); break;
        case 60: _t->requestChangePwd((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 61: _t->readMessage(); break;
        case 62: _t->closeWindow(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IMMainCtrl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMMainCtrl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IMMainCtrl,
      qt_meta_data_IMMainCtrl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMMainCtrl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMMainCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMMainCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMMainCtrl))
        return static_cast<void*>(const_cast< IMMainCtrl*>(this));
    return QObject::qt_metacast(_clname);
}

int IMMainCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    }
    return _id;
}

// SIGNAL 0
void IMMainCtrl::getFriendsSuccess(const QVector<FriendInformation> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IMMainCtrl::getFlocksSuccess(const QVector<FlockInformation> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IMMainCtrl::getDiscussionsSuccess(const QVector<DiscussionInformation> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void IMMainCtrl::getFlockMembersSuccess(const QVector<FlockMember> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void IMMainCtrl::getDiscussionMembersSuccess(const QVector<DiscussionMember> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void IMMainCtrl::getFriendTalkMessage(const TalkMessage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void IMMainCtrl::getFriendChangedStatus(const QString & _t1, const int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void IMMainCtrl::getFriendChangedInformation(const FriendInformation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void IMMainCtrl::getFriendInformationSuccess(const UserInformation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void IMMainCtrl::getMyInformationSuccess(const UserInformation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void IMMainCtrl::changeMyInformationSuccess(const UserInformation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void IMMainCtrl::changeFriendRemarkSuccess(const TempStrings & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void IMMainCtrl::deleteFriendSuccess(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void IMMainCtrl::getFriendRequest(const TalkMessage & _t1, const UserInformation & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void IMMainCtrl::getFlockRequest(const TalkMessage & _t1, const FlockMember & _t2, const FlockInformation & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void IMMainCtrl::dropFlockSuccess(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void IMMainCtrl::leaveFlockSuccess(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void IMMainCtrl::haveMemberleavedFlock(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void IMMainCtrl::changeFlockSuccess(const FlockInformation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void IMMainCtrl::changeFlockRemarkSuccess(const TempStrings & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void IMMainCtrl::createFlockSuccess(const FlockInformation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void IMMainCtrl::getDiscussionRequest(const TalkMessage & _t1, const DiscussionMember & _t2, const DiscussionInformation & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void IMMainCtrl::dropDiscussionSuccess(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void IMMainCtrl::leaveDiscussionSuccess(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void IMMainCtrl::changeDiscussionSuccess(const DiscussionInformation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void IMMainCtrl::createDiscussionSuccess(const DiscussionInformation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void IMMainCtrl::renameBoxSuccess(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void IMMainCtrl::moveFriendToBoxSuccess(const QString & _t1, const QString & _t2, const QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void IMMainCtrl::getNetworkHistoryMessagesSuccess(const QString & _t1, const QDate & _t2, const QVector<TalkMessage> & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void IMMainCtrl::closeWindowSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 29, 0);
}
QT_END_MOC_NAMESPACE
