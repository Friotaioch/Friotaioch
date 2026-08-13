/****************************************************************************
** Meta object code from reading C++ file 'walletframe.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "/home/liam/friotaioch/src/qt/walletframe.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN11WalletFrameE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11WalletFrameE = QtMocHelpers::stringData(
    "WalletFrame",
    "createWalletButtonClicked",
    "",
    "message",
    "title",
    "style",
    "currentWalletSet",
    "gotoOverviewPage",
    "gotoHistoryPage",
    "gotoReceiveCoinsPage",
    "gotoSendCoinsPage",
    "addr",
    "gotoSignMessageTab",
    "gotoVerifyMessageTab",
    "gotoLoadPSBT",
    "from_clipboard",
    "encryptWallet",
    "backupWallet",
    "changePassphrase",
    "unlockWallet",
    "usedSendingAddresses",
    "usedReceivingAddresses"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11WalletFrameE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  134,    2, 0x06,    1 /* Public */,
       3,    3,  135,    2, 0x06,    2 /* Public */,
       6,    0,  142,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,  143,    2, 0x0a,    7 /* Public */,
       8,    0,  144,    2, 0x0a,    8 /* Public */,
       9,    0,  145,    2, 0x0a,    9 /* Public */,
      10,    1,  146,    2, 0x0a,   10 /* Public */,
      10,    0,  149,    2, 0x2a,   12 /* Public | MethodCloned */,
      12,    1,  150,    2, 0x0a,   13 /* Public */,
      12,    0,  153,    2, 0x2a,   15 /* Public | MethodCloned */,
      13,    1,  154,    2, 0x0a,   16 /* Public */,
      13,    0,  157,    2, 0x2a,   18 /* Public | MethodCloned */,
      14,    1,  158,    2, 0x0a,   19 /* Public */,
      14,    0,  161,    2, 0x2a,   21 /* Public | MethodCloned */,
      16,    0,  162,    2, 0x0a,   22 /* Public */,
      17,    0,  163,    2, 0x0a,   23 /* Public */,
      18,    0,  164,    2, 0x0a,   24 /* Public */,
      19,    0,  165,    2, 0x0a,   25 /* Public */,
      20,    0,  166,    2, 0x0a,   26 /* Public */,
      21,    0,  167,    2, 0x0a,   27 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    4,    3,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject WalletFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_ZN11WalletFrameE.offsetsAndSizes,
    qt_meta_data_ZN11WalletFrameE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11WalletFrameE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WalletFrame, std::true_type>,
        // method 'createWalletButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        // method 'currentWalletSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gotoOverviewPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gotoHistoryPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gotoReceiveCoinsPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gotoSendCoinsPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'gotoSendCoinsPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gotoSignMessageTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'gotoSignMessageTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gotoVerifyMessageTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'gotoVerifyMessageTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gotoLoadPSBT'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'gotoLoadPSBT'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'encryptWallet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backupWallet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changePassphrase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'unlockWallet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'usedSendingAddresses'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'usedReceivingAddresses'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void WalletFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WalletFrame *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->createWalletButtonClicked(); break;
        case 1: _t->message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[3]))); break;
        case 2: _t->currentWalletSet(); break;
        case 3: _t->gotoOverviewPage(); break;
        case 4: _t->gotoHistoryPage(); break;
        case 5: _t->gotoReceiveCoinsPage(); break;
        case 6: _t->gotoSendCoinsPage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->gotoSendCoinsPage(); break;
        case 8: _t->gotoSignMessageTab((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->gotoSignMessageTab(); break;
        case 10: _t->gotoVerifyMessageTab((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->gotoVerifyMessageTab(); break;
        case 12: _t->gotoLoadPSBT((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->gotoLoadPSBT(); break;
        case 14: _t->encryptWallet(); break;
        case 15: _t->backupWallet(); break;
        case 16: _t->changePassphrase(); break;
        case 17: _t->unlockWallet(); break;
        case 18: _t->usedSendingAddresses(); break;
        case 19: _t->usedReceivingAddresses(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (WalletFrame::*)();
            if (_q_method_type _q_method = &WalletFrame::createWalletButtonClicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (WalletFrame::*)(const QString & , const QString & , unsigned int );
            if (_q_method_type _q_method = &WalletFrame::message; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (WalletFrame::*)();
            if (_q_method_type _q_method = &WalletFrame::currentWalletSet; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *WalletFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11WalletFrameE.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int WalletFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void WalletFrame::createWalletButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WalletFrame::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletFrame::currentWalletSet()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
