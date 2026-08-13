/****************************************************************************
** Meta object code from reading C++ file 'transactionview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "/home/liam/friotaioch/src/qt/transactionview.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactionview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15TransactionViewE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN15TransactionViewE = QtMocHelpers::stringData(
    "TransactionView",
    "doubleClicked",
    "",
    "QModelIndex",
    "message",
    "title",
    "style",
    "bumpedFee",
    "Txid",
    "txid",
    "contextualMenu",
    "dateRangeChanged",
    "showDetails",
    "copyAddress",
    "editLabel",
    "copyLabel",
    "copyAmount",
    "copyTxID",
    "copyTxHex",
    "copyTxPlainText",
    "openThirdPartyTxUrl",
    "url",
    "abandonTx",
    "bumpFee",
    "checked",
    "chooseDate",
    "idx",
    "chooseType",
    "changedAmount",
    "changedSearch",
    "exportClicked",
    "closeOpenedDialogs",
    "focusTransaction"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN15TransactionViewE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  158,    2, 0x06,    1 /* Public */,
       4,    3,  161,    2, 0x06,    3 /* Public */,
       7,    1,  168,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,  171,    2, 0x08,    9 /* Private */,
      11,    0,  174,    2, 0x08,   11 /* Private */,
      12,    0,  175,    2, 0x08,   12 /* Private */,
      13,    0,  176,    2, 0x08,   13 /* Private */,
      14,    0,  177,    2, 0x08,   14 /* Private */,
      15,    0,  178,    2, 0x08,   15 /* Private */,
      16,    0,  179,    2, 0x08,   16 /* Private */,
      17,    0,  180,    2, 0x08,   17 /* Private */,
      18,    0,  181,    2, 0x08,   18 /* Private */,
      19,    0,  182,    2, 0x08,   19 /* Private */,
      20,    1,  183,    2, 0x08,   20 /* Private */,
      22,    0,  186,    2, 0x08,   22 /* Private */,
      23,    1,  187,    2, 0x08,   23 /* Private */,
      25,    1,  190,    2, 0x0a,   25 /* Public */,
      27,    1,  193,    2, 0x0a,   27 /* Public */,
      28,    0,  196,    2, 0x0a,   29 /* Public */,
      29,    0,  197,    2, 0x0a,   30 /* Public */,
      30,    0,  198,    2, 0x0a,   31 /* Public */,
      31,    0,  199,    2, 0x0a,   32 /* Public */,
      32,    1,  200,    2, 0x0a,   33 /* Public */,
      32,    1,  203,    2, 0x0a,   35 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    5,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject TransactionView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN15TransactionViewE.offsetsAndSizes,
    qt_meta_data_ZN15TransactionViewE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN15TransactionViewE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TransactionView, std::true_type>,
        // method 'doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        // method 'bumpedFee'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Txid &, std::false_type>,
        // method 'contextualMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'dateRangeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showDetails'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copyAddress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copyLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copyAmount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copyTxID'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copyTxHex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copyTxPlainText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openThirdPartyTxUrl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'abandonTx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'bumpFee'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'chooseDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'chooseType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changedAmount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changedSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exportClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeOpenedDialogs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'focusTransaction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'focusTransaction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Txid &, std::false_type>
    >,
    nullptr
} };

void TransactionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TransactionView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[3]))); break;
        case 2: _t->bumpedFee((*reinterpret_cast< std::add_pointer_t<Txid>>(_a[1]))); break;
        case 3: _t->contextualMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 4: _t->dateRangeChanged(); break;
        case 5: _t->showDetails(); break;
        case 6: _t->copyAddress(); break;
        case 7: _t->editLabel(); break;
        case 8: _t->copyLabel(); break;
        case 9: _t->copyAmount(); break;
        case 10: _t->copyTxID(); break;
        case 11: _t->copyTxHex(); break;
        case 12: _t->copyTxPlainText(); break;
        case 13: _t->openThirdPartyTxUrl((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->abandonTx(); break;
        case 15: _t->bumpFee((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->chooseDate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->chooseType((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->changedAmount(); break;
        case 19: _t->changedSearch(); break;
        case 20: _t->exportClicked(); break;
        case 21: _t->closeOpenedDialogs(); break;
        case 22: _t->focusTransaction((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 23: _t->focusTransaction((*reinterpret_cast< std::add_pointer_t<Txid>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (TransactionView::*)(const QModelIndex & );
            if (_q_method_type _q_method = &TransactionView::doubleClicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (TransactionView::*)(const QString & , const QString & , unsigned int );
            if (_q_method_type _q_method = &TransactionView::message; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (TransactionView::*)(const Txid & );
            if (_q_method_type _q_method = &TransactionView::bumpedFee; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *TransactionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN15TransactionViewE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TransactionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void TransactionView::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TransactionView::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TransactionView::bumpedFee(const Txid & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
