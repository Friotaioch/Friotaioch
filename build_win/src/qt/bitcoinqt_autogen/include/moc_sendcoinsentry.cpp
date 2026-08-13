/****************************************************************************
** Meta object code from reading C++ file 'sendcoinsentry.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "/home/liam/friotaioch/src/qt/sendcoinsentry.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendcoinsentry.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14SendCoinsEntryE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN14SendCoinsEntryE = QtMocHelpers::stringData(
    "SendCoinsEntry",
    "removeEntry",
    "",
    "SendCoinsEntry*",
    "entry",
    "useAvailableBalance",
    "payAmountChanged",
    "subtractFeeFromAmountChanged",
    "clear",
    "checkSubtractFeeFromAmount",
    "deleteClicked",
    "useAvailableBalanceClicked",
    "on_payTo_textChanged",
    "address",
    "on_addressBookButton_clicked",
    "on_pasteButton_clicked",
    "updateDisplayUnit"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN14SendCoinsEntryE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    1 /* Public */,
       5,    1,   89,    2, 0x06,    3 /* Public */,
       6,    0,   92,    2, 0x06,    5 /* Public */,
       7,    0,   93,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   94,    2, 0x0a,    7 /* Public */,
       9,    0,   95,    2, 0x0a,    8 /* Public */,
      10,    0,   96,    2, 0x08,    9 /* Private */,
      11,    0,   97,    2, 0x08,   10 /* Private */,
      12,    1,   98,    2, 0x08,   11 /* Private */,
      14,    0,  101,    2, 0x08,   13 /* Private */,
      15,    0,  102,    2, 0x08,   14 /* Private */,
      16,    0,  103,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SendCoinsEntry::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN14SendCoinsEntryE.offsetsAndSizes,
    qt_meta_data_ZN14SendCoinsEntryE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN14SendCoinsEntryE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SendCoinsEntry, std::true_type>,
        // method 'removeEntry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SendCoinsEntry *, std::false_type>,
        // method 'useAvailableBalance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SendCoinsEntry *, std::false_type>,
        // method 'payAmountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'subtractFeeFromAmountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkSubtractFeeFromAmount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'useAvailableBalanceClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_payTo_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_addressBookButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pasteButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateDisplayUnit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SendCoinsEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SendCoinsEntry *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->removeEntry((*reinterpret_cast< std::add_pointer_t<SendCoinsEntry*>>(_a[1]))); break;
        case 1: _t->useAvailableBalance((*reinterpret_cast< std::add_pointer_t<SendCoinsEntry*>>(_a[1]))); break;
        case 2: _t->payAmountChanged(); break;
        case 3: _t->subtractFeeFromAmountChanged(); break;
        case 4: _t->clear(); break;
        case 5: _t->checkSubtractFeeFromAmount(); break;
        case 6: _t->deleteClicked(); break;
        case 7: _t->useAvailableBalanceClicked(); break;
        case 8: _t->on_payTo_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_addressBookButton_clicked(); break;
        case 10: _t->on_pasteButton_clicked(); break;
        case 11: _t->updateDisplayUnit(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SendCoinsEntry* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SendCoinsEntry* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (SendCoinsEntry::*)(SendCoinsEntry * );
            if (_q_method_type _q_method = &SendCoinsEntry::removeEntry; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (SendCoinsEntry::*)(SendCoinsEntry * );
            if (_q_method_type _q_method = &SendCoinsEntry::useAvailableBalance; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (SendCoinsEntry::*)();
            if (_q_method_type _q_method = &SendCoinsEntry::payAmountChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (SendCoinsEntry::*)();
            if (_q_method_type _q_method = &SendCoinsEntry::subtractFeeFromAmountChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *SendCoinsEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendCoinsEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN14SendCoinsEntryE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SendCoinsEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SendCoinsEntry::removeEntry(SendCoinsEntry * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SendCoinsEntry::useAvailableBalance(SendCoinsEntry * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SendCoinsEntry::payAmountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SendCoinsEntry::subtractFeeFromAmountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
