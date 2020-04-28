/****************************************************************************
** Meta object code from reading C++ file 'IMFlockChatWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/IMFlockChatWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMFlockChatWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMFlockChatWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      54,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,   18,   18,   18, 0x0a,
     117,  112,   18,   18, 0x08,
     146,  141,   18,   18, 0x08,
     180,  172,   18,   18, 0x08,
     201,  172,   18,   18, 0x08,
     224,  172,   18,   18, 0x08,
     250,   18,   18,   18, 0x08,
     268,   18,   18,   18, 0x08,
     286,  172,   18,   18, 0x08,
     317,  310,   18,   18, 0x08,
     355,   18,   18,   18, 0x08,
     373,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMFlockChatWidget[] = {
    "IMFlockChatWidget\0\0"
    "sendMessagesFromChat(TalkMessage&)\0"
    "roomQuitSignal()\0"
    "setFlockMemberList(QVector<FlockMember>)\0"
    "font\0setInputTextFont(QFont)\0size\0"
    "setInputTextSize(QString)\0checked\0"
    "onClickBtnBold(bool)\0onClickBtnItalic(bool)\0"
    "onClickBtnUnderline(bool)\0onClickBtnColor()\0"
    "onClickBtnClear()\0onClickBtnHistory(bool)\0"
    "format\0currentFormatChanged(QTextCharFormat)\0"
    "onClickBtnClose()\0onClickBtnSend()\0"
};

void IMFlockChatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMFlockChatWidget *_t = static_cast<IMFlockChatWidget *>(_o);
        switch (_id) {
        case 0: _t->sendMessagesFromChat((*reinterpret_cast< TalkMessage(*)>(_a[1]))); break;
        case 1: _t->roomQuitSignal(); break;
        case 2: _t->setFlockMemberList((*reinterpret_cast< const QVector<FlockMember>(*)>(_a[1]))); break;
        case 3: _t->setInputTextFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 4: _t->setInputTextSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onClickBtnBold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onClickBtnItalic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onClickBtnUnderline((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onClickBtnColor(); break;
        case 9: _t->onClickBtnClear(); break;
        case 10: _t->onClickBtnHistory((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->currentFormatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        case 12: _t->onClickBtnClose(); break;
        case 13: _t->onClickBtnSend(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IMFlockChatWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMFlockChatWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMFlockChatWidget,
      qt_meta_data_IMFlockChatWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMFlockChatWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMFlockChatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMFlockChatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMFlockChatWidget))
        return static_cast<void*>(const_cast< IMFlockChatWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMFlockChatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void IMFlockChatWidget::sendMessagesFromChat(TalkMessage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IMFlockChatWidget::roomQuitSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
