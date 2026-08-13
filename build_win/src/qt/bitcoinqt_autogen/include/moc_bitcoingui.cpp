/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "/home/liam/friotaioch/src/qt/bitcoingui.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10BitcoinGUIE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10BitcoinGUIE = QtMocHelpers::stringData(
    "BitcoinGUI",
    "quitRequested",
    "",
    "receivedURI",
    "uri",
    "consoleShown",
    "RPCConsole*",
    "console",
    "setPrivacy",
    "privacy",
    "setNumConnections",
    "count",
    "setNetworkActive",
    "network_active",
    "setNumBlocks",
    "blockDate",
    "nVerificationProgress",
    "SyncType",
    "synctype",
    "SynchronizationState",
    "sync_state",
    "createWallet",
    "message",
    "title",
    "style",
    "bool*",
    "ret",
    "detailed_message",
    "setCurrentWallet",
    "WalletModel*",
    "wallet_model",
    "setCurrentWalletBySelectorIndex",
    "index",
    "updateWalletStatus",
    "handlePaymentRequest",
    "SendCoinsRecipient",
    "recipient",
    "incomingTransaction",
    "date",
    "BitcoinUnit",
    "unit",
    "CAmount",
    "amount",
    "type",
    "address",
    "label",
    "walletName",
    "gotoOverviewPage",
    "gotoHistoryPage",
    "gotoReceiveCoinsPage",
    "gotoSendCoinsPage",
    "addr",
    "gotoSignMessageTab",
    "gotoVerifyMessageTab",
    "gotoLoadPSBT",
    "from_clipboard",
    "enableHistoryAction",
    "openClicked",
    "optionsClicked",
    "aboutClicked",
    "showDebugWindow",
    "showDebugWindowActivateConsole",
    "showHelpMessageClicked",
    "showNormalIfMinimized",
    "fToggleHidden",
    "toggleHidden",
    "detectShutdown",
    "showProgress",
    "nProgress",
    "showModalOverlay"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10BitcoinGUIE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  254,    2, 0x06,    1 /* Public */,
       3,    1,  255,    2, 0x06,    2 /* Public */,
       5,    1,  258,    2, 0x06,    4 /* Public */,
       8,    1,  261,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,  264,    2, 0x0a,    8 /* Public */,
      12,    1,  267,    2, 0x0a,   10 /* Public */,
      14,    5,  270,    2, 0x0a,   12 /* Public */,
      21,    0,  281,    2, 0x0a,   18 /* Public */,
      22,    5,  282,    2, 0x0a,   19 /* Public */,
      22,    4,  293,    2, 0x2a,   25 /* Public | MethodCloned */,
      22,    3,  302,    2, 0x2a,   30 /* Public | MethodCloned */,
      28,    1,  309,    2, 0x0a,   34 /* Public */,
      31,    1,  312,    2, 0x0a,   36 /* Public */,
      33,    0,  315,    2, 0x0a,   38 /* Public */,
      34,    1,  316,    2, 0x0a,   39 /* Public */,
      37,    7,  319,    2, 0x0a,   41 /* Public */,
      47,    0,  334,    2, 0x0a,   49 /* Public */,
      48,    0,  335,    2, 0x0a,   50 /* Public */,
      49,    0,  336,    2, 0x0a,   51 /* Public */,
      50,    1,  337,    2, 0x0a,   52 /* Public */,
      50,    0,  340,    2, 0x2a,   54 /* Public | MethodCloned */,
      52,    1,  341,    2, 0x0a,   55 /* Public */,
      52,    0,  344,    2, 0x2a,   57 /* Public | MethodCloned */,
      53,    1,  345,    2, 0x0a,   58 /* Public */,
      53,    0,  348,    2, 0x2a,   60 /* Public | MethodCloned */,
      54,    1,  349,    2, 0x0a,   61 /* Public */,
      54,    0,  352,    2, 0x2a,   63 /* Public | MethodCloned */,
      56,    1,  353,    2, 0x0a,   64 /* Public */,
      57,    0,  356,    2, 0x0a,   66 /* Public */,
      58,    0,  357,    2, 0x0a,   67 /* Public */,
      59,    0,  358,    2, 0x0a,   68 /* Public */,
      60,    0,  359,    2, 0x0a,   69 /* Public */,
      61,    0,  360,    2, 0x0a,   70 /* Public */,
      62,    0,  361,    2, 0x0a,   71 /* Public */,
      63,    0,  362,    2, 0x0a,   72 /* Public */,
      63,    1,  363,    2, 0x0a,   73 /* Public */,
      65,    0,  366,    2, 0x0a,   75 /* Public */,
      66,    0,  367,    2, 0x0a,   76 /* Public */,
      67,    2,  368,    2, 0x0a,   77 /* Public */,
      69,    0,  373,    2, 0x0a,   80 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::Double, 0x80000000 | 17, 0x80000000 | 19,   11,   15,   16,   18,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 25, QMetaType::QString,   23,   22,   24,   26,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 25,   23,   22,   24,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   23,   22,   24,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 35,   36,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 39, 0x80000000 | 41, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   38,   40,   42,   43,   44,   45,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   23,   68,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject BitcoinGUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10BitcoinGUIE.offsetsAndSizes,
    qt_meta_data_ZN10BitcoinGUIE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10BitcoinGUIE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BitcoinGUI, std::true_type>,
        // method 'quitRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receivedURI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'consoleShown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<RPCConsole *, std::false_type>,
        // method 'setPrivacy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setNumConnections'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setNetworkActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setNumBlocks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<SyncType, std::false_type>,
        QtPrivate::TypeAndForceComplete<SynchronizationState, std::false_type>,
        // method 'createWallet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool *, std::false_type>,
        // method 'message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        // method 'setCurrentWallet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<WalletModel *, std::false_type>,
        // method 'setCurrentWalletBySelectorIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateWalletStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handlePaymentRequest'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SendCoinsRecipient &, std::false_type>,
        // method 'incomingTransaction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<BitcoinUnit, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CAmount &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
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
        // method 'enableHistoryAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'openClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'optionsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aboutClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showDebugWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showDebugWindowActivateConsole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showHelpMessageClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showNormalIfMinimized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showNormalIfMinimized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'toggleHidden'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'detectShutdown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showModalOverlay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BitcoinGUI *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->quitRequested(); break;
        case 1: _t->receivedURI((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->consoleShown((*reinterpret_cast< std::add_pointer_t<RPCConsole*>>(_a[1]))); break;
        case 3: _t->setPrivacy((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setNumConnections((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setNetworkActive((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setNumBlocks((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<SyncType>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<SynchronizationState>>(_a[5]))); break;
        case 7: _t->createWallet(); break;
        case 8: _t->message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 9: _t->message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool*>>(_a[4]))); break;
        case 10: _t->message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[3]))); break;
        case 11: _t->setCurrentWallet((*reinterpret_cast< std::add_pointer_t<WalletModel*>>(_a[1]))); break;
        case 12: _t->setCurrentWalletBySelectorIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->updateWalletStatus(); break;
        case 14: { bool _r = _t->handlePaymentRequest((*reinterpret_cast< std::add_pointer_t<SendCoinsRecipient>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->incomingTransaction((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<BitcoinUnit>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<CAmount>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7]))); break;
        case 16: _t->gotoOverviewPage(); break;
        case 17: _t->gotoHistoryPage(); break;
        case 18: _t->gotoReceiveCoinsPage(); break;
        case 19: _t->gotoSendCoinsPage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->gotoSendCoinsPage(); break;
        case 21: _t->gotoSignMessageTab((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->gotoSignMessageTab(); break;
        case 23: _t->gotoVerifyMessageTab((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->gotoVerifyMessageTab(); break;
        case 25: _t->gotoLoadPSBT((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->gotoLoadPSBT(); break;
        case 27: _t->enableHistoryAction((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->openClicked(); break;
        case 29: _t->optionsClicked(); break;
        case 30: _t->aboutClicked(); break;
        case 31: _t->showDebugWindow(); break;
        case 32: _t->showDebugWindowActivateConsole(); break;
        case 33: _t->showHelpMessageClicked(); break;
        case 34: _t->showNormalIfMinimized(); break;
        case 35: _t->showNormalIfMinimized((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 36: _t->toggleHidden(); break;
        case 37: _t->detectShutdown(); break;
        case 38: _t->showProgress((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 39: _t->showModalOverlay(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (BitcoinGUI::*)();
            if (_q_method_type _q_method = &BitcoinGUI::quitRequested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (BitcoinGUI::*)(const QString & );
            if (_q_method_type _q_method = &BitcoinGUI::receivedURI; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (BitcoinGUI::*)(RPCConsole * );
            if (_q_method_type _q_method = &BitcoinGUI::consoleShown; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (BitcoinGUI::*)(bool );
            if (_q_method_type _q_method = &BitcoinGUI::setPrivacy; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10BitcoinGUIE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void BitcoinGUI::quitRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BitcoinGUI::receivedURI(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BitcoinGUI::consoleShown(RPCConsole * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BitcoinGUI::setPrivacy(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
namespace {
struct qt_meta_tag_ZN27UnitDisplayStatusBarControlE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN27UnitDisplayStatusBarControlE = QtMocHelpers::stringData(
    "UnitDisplayStatusBarControl",
    "updateDisplayUnit",
    "",
    "BitcoinUnit",
    "newUnits",
    "onMenuSelection",
    "QAction*",
    "action"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN27UnitDisplayStatusBarControlE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x08,    1 /* Private */,
       5,    1,   29,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject UnitDisplayStatusBarControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_ZN27UnitDisplayStatusBarControlE.offsetsAndSizes,
    qt_meta_data_ZN27UnitDisplayStatusBarControlE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN27UnitDisplayStatusBarControlE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UnitDisplayStatusBarControl, std::true_type>,
        // method 'updateDisplayUnit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BitcoinUnit, std::false_type>,
        // method 'onMenuSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>
    >,
    nullptr
} };

void UnitDisplayStatusBarControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UnitDisplayStatusBarControl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateDisplayUnit((*reinterpret_cast< std::add_pointer_t<BitcoinUnit>>(_a[1]))); break;
        case 1: _t->onMenuSelection((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *UnitDisplayStatusBarControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnitDisplayStatusBarControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN27UnitDisplayStatusBarControlE.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int UnitDisplayStatusBarControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
