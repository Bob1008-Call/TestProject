/****************************************************************************
** Meta object code from reading C++ file 'IMMainWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/IMMainWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMMainWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMMainWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   14,   13,   13, 0x05,
      81,   79,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     129,   13,   13,   13, 0x0a,
     153,   13,   13,   13, 0x0a,
     176,   13,   13,   13, 0x0a,
     204,   13,   13,   13, 0x0a,
     244,  223,   13,   13, 0x0a,
     304,   13,   13,   13, 0x0a,
     352,   13,   13,   13, 0x0a,
     398,   13,   13,   13, 0x0a,
     459,   13,  454,   13, 0x0a,
     504,  494,  454,   13, 0x0a,
     545,  537,  454,   13, 0x0a,
     588,   13,   13,   13, 0x0a,
     626,   79,   13,   13, 0x0a,
     655,   13,   13,   13, 0x0a,
     695,   13,   13,   13, 0x0a,
     734,   13,   13,   13, 0x0a,
     769,   13,   13,   13, 0x0a,
     803,   13,   13,   13, 0x0a,
     842,   13,   13,   13, 0x0a,
     891,   13,   13,   13, 0x0a,
     929,   13,   13,   13, 0x0a,
     977,   13,   13,   13, 0x0a,
    1011,   13,   13,   13, 0x0a,
    1040,   14,   13,   13, 0x0a,
    1079,   13,   13,   13, 0x0a,
    1113, 1100,   13,   13, 0x0a,
    1139,   14,   13,   13, 0x0a,
    1176,   79,   13,   13, 0x0a,
    1210,   13,   13,   13, 0x0a,
    1247,   13,   13,   13, 0x0a,
    1299, 1294,   13,   13, 0x0a,
    1321,   13,   13,   13, 0x0a,
    1343,   13,   13,   13, 0x0a,
    1362,   13,   13,   13, 0x0a,
    1380,   13,   13,   13, 0x0a,
    1399,   13,   13,   13, 0x0a,
    1413,   13,   13,   13, 0x0a,
    1432,   13,   13,   13, 0x0a,
    1452,   13,   13,   13, 0x0a,
    1477, 1469,   13,   13, 0x0a,
    1506,   13,   13,   13, 0x0a,
    1539, 1532,   13,   13, 0x0a,
    1575, 1560,   13,   13, 0x0a,
    1609,   14,   13,   13, 0x0a,
    1657,   13,   13,   13, 0x0a,
    1678,   13,   13,   13, 0x0a,
    1693, 1690,   13,   13, 0x0a,
    1719,   13,   13,   13, 0x0a,
    1741,   13,   13,   13, 0x0a,
    1759,   13,   13,   13, 0x08,
    1773,   13,   13,   13, 0x08,
    1791,   13,   13,   13, 0x08,
    1810,   13,   13,   13, 0x08,
    1854, 1848,   13,   13, 0x08,
    1874,   79,   13,   13, 0x08,
    1924,   14,   13,   13, 0x08,
    2008, 1986,   13,   13, 0x08,
    2085,   13,   13,   13, 0x08,
    2104,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMMainWidget[] = {
    "IMMainWidget\0\0,,\0"
    "exportHistoryMessageOneFriendSuccess(QString,QString,QString)\0"
    ",\0exportHistoryMessageAllSuccess(QString,QString)\0"
    "getFriendsInformation()\0getFlocksInformation()\0"
    "getDiscussionsInformation()\0"
    "getLatestMessage()\0friendID,date,mesVec\0"
    "setNetworkMessageWidget(QString,QDate,QVector<TalkMessage>)\0"
    "setFriendListWidget(QVector<FriendInformation>)\0"
    "setFlockListWidget(QVector<FlockInformation>)\0"
    "setDiscussionListWidget(QVector<DiscussionInformation>)\0"
    "bool\0addFriendButton(FriendInformation)\0"
    "flcokInfo\0addFlockButton(FlockInformation)\0"
    "disInfo\0addDiscussionButton(DiscussionInformation)\0"
    "receiveFriendTalkMessage(TalkMessage)\0"
    "setFriendStatus(QString,int)\0"
    "setFriendInformation(FriendInformation)\0"
    "showFriendInformation(UserInformation)\0"
    "showMyInformation(UserInformation)\0"
    "setMyInformation(UserInformation)\0"
    "showFlockInformation(FlockInformation)\0"
    "showDiscussionInformation(DiscussionInformation)\0"
    "setFlockInformation(FlockInformation)\0"
    "setDiscussionInformation(DiscussionInformation)\0"
    "setFlockMemberRemark(TempStrings)\0"
    "setFriendRemark(TempStrings)\0"
    "deletedFriend(QString,QString,QString)\0"
    "dropedFlock(QString)\0discussionID\0"
    "dropedDiscussion(QString)\0"
    "leavedFlock(QString,QString,QString)\0"
    "leavedDiscussion(QString,QString)\0"
    "createFlockSuccess(FlockInformation)\0"
    "createDiscussionSuccess(DiscussionInformation)\0"
    "text\0searchFriend(QString)\0"
    "onClickSearchFriend()\0onClickAddFriend()\0"
    "onClickAddFlock()\0onClickChangePwd()\0"
    "createFlock()\0createDiscussion()\0"
    "showMessageWidget()\0showMailWidget()\0"
    "address\0showMailWriteWidget(QString)\0"
    "showLatestMessageWidget()\0isOpen\0"
    "setTimerStatus(bool)\0title,newTitle\0"
    "renameBoxSuccess(QString,QString)\0"
    "moveFriendToBoxSuccess(QString,QString,QString)\0"
    "onClickRightButton()\0createBox()\0id\0"
    "removeLinkButton(QString)\0"
    "removeAllLinkButton()\0showAllChatRoom()\0"
    "closeWindow()\0closeAllWindows()\0"
    "getMyInformation()\0"
    "receiveMessagesFromChat(TalkMessage&)\0"
    "index\0changeMyStatus(int)\0"
    "receiveFriendRequest(TalkMessage,UserInformation)\0"
    "receiveFlockRequest(TalkMessage,FlockMember,FlockInformation)\0"
    "mes,member,discussion\0"
    "receiveDiscussionRequest(TalkMessage,DiscussionMember,DiscussionInform"
    "ation)\0"
    "removeBox(QString)\0renameBox(QString)\0"
};

void IMMainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMMainWidget *_t = static_cast<IMMainWidget *>(_o);
        switch (_id) {
        case 0: _t->exportHistoryMessageOneFriendSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->exportHistoryMessageAllSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->getFriendsInformation(); break;
        case 3: _t->getFlocksInformation(); break;
        case 4: _t->getDiscussionsInformation(); break;
        case 5: _t->getLatestMessage(); break;
        case 6: _t->setNetworkMessageWidget((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDate(*)>(_a[2])),(*reinterpret_cast< const QVector<TalkMessage>(*)>(_a[3]))); break;
        case 7: _t->setFriendListWidget((*reinterpret_cast< const QVector<FriendInformation>(*)>(_a[1]))); break;
        case 8: _t->setFlockListWidget((*reinterpret_cast< const QVector<FlockInformation>(*)>(_a[1]))); break;
        case 9: _t->setDiscussionListWidget((*reinterpret_cast< const QVector<DiscussionInformation>(*)>(_a[1]))); break;
        case 10: { bool _r = _t->addFriendButton((*reinterpret_cast< const FriendInformation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->addFlockButton((*reinterpret_cast< const FlockInformation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->addDiscussionButton((*reinterpret_cast< const DiscussionInformation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->receiveFriendTalkMessage((*reinterpret_cast< const TalkMessage(*)>(_a[1]))); break;
        case 14: _t->setFriendStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->setFriendInformation((*reinterpret_cast< const FriendInformation(*)>(_a[1]))); break;
        case 16: _t->showFriendInformation((*reinterpret_cast< const UserInformation(*)>(_a[1]))); break;
        case 17: _t->showMyInformation((*reinterpret_cast< const UserInformation(*)>(_a[1]))); break;
        case 18: _t->setMyInformation((*reinterpret_cast< const UserInformation(*)>(_a[1]))); break;
        case 19: _t->showFlockInformation((*reinterpret_cast< const FlockInformation(*)>(_a[1]))); break;
        case 20: _t->showDiscussionInformation((*reinterpret_cast< const DiscussionInformation(*)>(_a[1]))); break;
        case 21: _t->setFlockInformation((*reinterpret_cast< const FlockInformation(*)>(_a[1]))); break;
        case 22: _t->setDiscussionInformation((*reinterpret_cast< const DiscussionInformation(*)>(_a[1]))); break;
        case 23: _t->setFlockMemberRemark((*reinterpret_cast< const TempStrings(*)>(_a[1]))); break;
        case 24: _t->setFriendRemark((*reinterpret_cast< const TempStrings(*)>(_a[1]))); break;
        case 25: _t->deletedFriend((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 26: _t->dropedFlock((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->dropedDiscussion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->leavedFlock((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 29: _t->leavedDiscussion((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->createFlockSuccess((*reinterpret_cast< const FlockInformation(*)>(_a[1]))); break;
        case 31: _t->createDiscussionSuccess((*reinterpret_cast< const DiscussionInformation(*)>(_a[1]))); break;
        case 32: _t->searchFriend((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->onClickSearchFriend(); break;
        case 34: _t->onClickAddFriend(); break;
        case 35: _t->onClickAddFlock(); break;
        case 36: _t->onClickChangePwd(); break;
        case 37: _t->createFlock(); break;
        case 38: _t->createDiscussion(); break;
        case 39: _t->showMessageWidget(); break;
        case 40: _t->showMailWidget(); break;
        case 41: _t->showMailWriteWidget((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 42: _t->showLatestMessageWidget(); break;
        case 43: _t->setTimerStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->renameBoxSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 45: _t->moveFriendToBoxSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 46: _t->onClickRightButton(); break;
        case 47: _t->createBox(); break;
        case 48: _t->removeLinkButton((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 49: _t->removeAllLinkButton(); break;
        case 50: _t->showAllChatRoom(); break;
        case 51: _t->closeWindow(); break;
        case 52: _t->closeAllWindows(); break;
        case 53: _t->getMyInformation(); break;
        case 54: _t->receiveMessagesFromChat((*reinterpret_cast< TalkMessage(*)>(_a[1]))); break;
        case 55: _t->changeMyStatus((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 56: _t->receiveFriendRequest((*reinterpret_cast< const TalkMessage(*)>(_a[1])),(*reinterpret_cast< const UserInformation(*)>(_a[2]))); break;
        case 57: _t->receiveFlockRequest((*reinterpret_cast< const TalkMessage(*)>(_a[1])),(*reinterpret_cast< const FlockMember(*)>(_a[2])),(*reinterpret_cast< const FlockInformation(*)>(_a[3]))); break;
        case 58: _t->receiveDiscussionRequest((*reinterpret_cast< const TalkMessage(*)>(_a[1])),(*reinterpret_cast< const DiscussionMember(*)>(_a[2])),(*reinterpret_cast< const DiscussionInformation(*)>(_a[3]))); break;
        case 59: _t->removeBox((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 60: _t->renameBox((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IMMainWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMMainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMMainWidget,
      qt_meta_data_IMMainWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMMainWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMMainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMMainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMMainWidget))
        return static_cast<void*>(const_cast< IMMainWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMMainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    }
    return _id;
}

// SIGNAL 0
void IMMainWidget::exportHistoryMessageOneFriendSuccess(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IMMainWidget::exportHistoryMessageAllSuccess(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
