/****************************************************************************
** Meta object code from reading C++ file 'rpcconsole.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "/home/liam/friotaioch/src/qt/rpcconsole.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpcconsole.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10RPCConsoleE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10RPCConsoleE = QtMocHelpers::stringData(
    "RPCConsole",
    "on_lineEdit_returnPressed",
    "",
    "on_tabWidget_currentChanged",
    "index",
    "on_openDebugLogfileButton_clicked",
    "on_sldGraphRange_valueChanged",
    "value",
    "updateTrafficStats",
    "totalBytesIn",
    "totalBytesOut",
    "resizeEvent",
    "QResizeEvent*",
    "event",
    "showEvent",
    "QShowEvent*",
    "hideEvent",
    "QHideEvent*",
    "showPeersTableContextMenu",
    "point",
    "showBanTableContextMenu",
    "showOrHideBanTableIfRequired",
    "clearSelectedNode",
    "updateDetailWidget",
    "clear",
    "keep_prompt",
    "fontBigger",
    "fontSmaller",
    "setFontSize",
    "newSize",
    "message",
    "category",
    "msg",
    "html",
    "setNumConnections",
    "count",
    "setNetworkActive",
    "networkActive",
    "setNumBlocks",
    "blockDate",
    "nVerificationProgress",
    "SyncType",
    "synctype",
    "setMempoolSize",
    "numberOfTxs",
    "size_t",
    "dynUsage",
    "maxUsage",
    "browseHistory",
    "offset",
    "scrollToEnd",
    "disconnectSelectedNode",
    "banSelectedNode",
    "bantime",
    "unbanSelectedNode",
    "setTabFocus",
    "TabTypes",
    "tabType",
    "setCurrentWallet",
    "WalletModel*",
    "wallet_model",
    "updateAlerts",
    "warnings"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10RPCConsoleE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  206,    2, 0x08,    1 /* Private */,
       3,    1,  207,    2, 0x08,    2 /* Private */,
       5,    0,  210,    2, 0x08,    4 /* Private */,
       6,    1,  211,    2, 0x08,    5 /* Private */,
       8,    2,  214,    2, 0x08,    7 /* Private */,
      11,    1,  219,    2, 0x08,   10 /* Private */,
      14,    1,  222,    2, 0x08,   12 /* Private */,
      16,    1,  225,    2, 0x08,   14 /* Private */,
      18,    1,  228,    2, 0x08,   16 /* Private */,
      20,    1,  231,    2, 0x08,   18 /* Private */,
      21,    0,  234,    2, 0x08,   20 /* Private */,
      22,    0,  235,    2, 0x08,   21 /* Private */,
      23,    0,  236,    2, 0x08,   22 /* Private */,
      24,    1,  237,    2, 0x0a,   23 /* Public */,
      24,    0,  240,    2, 0x2a,   25 /* Public | MethodCloned */,
      26,    0,  241,    2, 0x0a,   26 /* Public */,
      27,    0,  242,    2, 0x0a,   27 /* Public */,
      28,    1,  243,    2, 0x0a,   28 /* Public */,
      30,    2,  246,    2, 0x0a,   30 /* Public */,
      30,    3,  251,    2, 0x0a,   33 /* Public */,
      34,    1,  258,    2, 0x0a,   37 /* Public */,
      36,    1,  261,    2, 0x0a,   39 /* Public */,
      38,    4,  264,    2, 0x0a,   41 /* Public */,
      43,    3,  273,    2, 0x0a,   46 /* Public */,
      48,    1,  280,    2, 0x0a,   50 /* Public */,
      50,    0,  283,    2, 0x0a,   52 /* Public */,
      51,    0,  284,    2, 0x0a,   53 /* Public */,
      52,    1,  285,    2, 0x0a,   54 /* Public */,
      54,    0,  288,    2, 0x0a,   56 /* Public */,
      55,    1,  289,    2, 0x0a,   57 /* Public */,
      58,    1,  292,    2, 0x0a,   59 /* Public */,
      61,    1,  295,    2, 0x08,   61 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   13,
    QMetaType::Void, 0x80000000 | 17,   13,
    QMetaType::Void, QMetaType::QPoint,   19,
    QMetaType::Void, QMetaType::QPoint,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   31,   30,   33,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::Double, 0x80000000 | 41,   35,   39,   40,   42,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 45, 0x80000000 | 45,   44,   46,   47,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 56,   57,
    QMetaType::Void, 0x80000000 | 59,   60,
    QMetaType::Void, QMetaType::QString,   62,

       0        // eod
};

Q_CONSTINIT const QMetaObject RPCConsole::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN10RPCConsoleE.offsetsAndSizes,
    qt_meta_data_ZN10RPCConsoleE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10RPCConsoleE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RPCConsole, std::true_type>,
        // method 'on_lineEdit_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tabWidget_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_openDebugLogfileButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sldGraphRange_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateTrafficStats'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'resizeEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QResizeEvent *, std::false_type>,
        // method 'showEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QShowEvent *, std::false_type>,
        // method 'hideEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHideEvent *, std::false_type>,
        // method 'showPeersTableContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'showBanTableContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'showOrHideBanTableIfRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearSelectedNode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateDetailWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fontBigger'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fontSmaller'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFontSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
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
        // method 'setMempoolSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<long, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'browseHistory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'scrollToEnd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnectSelectedNode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'banSelectedNode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'unbanSelectedNode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTabFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TabTypes, std::false_type>,
        // method 'setCurrentWallet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<WalletModel *, std::false_type>,
        // method 'updateAlerts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void RPCConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RPCConsole *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_lineEdit_returnPressed(); break;
        case 1: _t->on_tabWidget_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_openDebugLogfileButton_clicked(); break;
        case 3: _t->on_sldGraphRange_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->updateTrafficStats((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[2]))); break;
        case 5: _t->resizeEvent((*reinterpret_cast< std::add_pointer_t<QResizeEvent*>>(_a[1]))); break;
        case 6: _t->showEvent((*reinterpret_cast< std::add_pointer_t<QShowEvent*>>(_a[1]))); break;
        case 7: _t->hideEvent((*reinterpret_cast< std::add_pointer_t<QHideEvent*>>(_a[1]))); break;
        case 8: _t->showPeersTableContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 9: _t->showBanTableContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 10: _t->showOrHideBanTableIfRequired(); break;
        case 11: _t->clearSelectedNode(); break;
        case 12: _t->updateDetailWidget(); break;
        case 13: _t->clear((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->clear(); break;
        case 15: _t->fontBigger(); break;
        case 16: _t->fontSmaller(); break;
        case 17: _t->setFontSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->message((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 19: _t->message((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 20: _t->setNumConnections((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->setNetworkActive((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->setNumBlocks((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<SyncType>>(_a[4]))); break;
        case 23: _t->setMempoolSize((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<size_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<size_t>>(_a[3]))); break;
        case 24: _t->browseHistory((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->scrollToEnd(); break;
        case 26: _t->disconnectSelectedNode(); break;
        case 27: _t->banSelectedNode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->unbanSelectedNode(); break;
        case 29: _t->setTabFocus((*reinterpret_cast< std::add_pointer_t<TabTypes>>(_a[1]))); break;
        case 30: _t->setCurrentWallet((*reinterpret_cast< std::add_pointer_t<WalletModel*>>(_a[1]))); break;
        case 31: _t->updateAlerts((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *RPCConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RPCConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10RPCConsoleE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RPCConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 32;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN17PlainCopyTextEditE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN17PlainCopyTextEditE = QtMocHelpers::stringData(
    "PlainCopyTextEdit"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN17PlainCopyTextEditE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject PlainCopyTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextEdit::staticMetaObject>(),
    qt_meta_stringdata_ZN17PlainCopyTextEditE.offsetsAndSizes,
    qt_meta_data_ZN17PlainCopyTextEditE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN17PlainCopyTextEditE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlainCopyTextEdit, std::true_type>
    >,
    nullptr
} };

void PlainCopyTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlainCopyTextEdit *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *PlainCopyTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlainCopyTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN17PlainCopyTextEditE.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int PlainCopyTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
