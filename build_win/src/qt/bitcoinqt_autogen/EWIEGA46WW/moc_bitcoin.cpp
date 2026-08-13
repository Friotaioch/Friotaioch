/****************************************************************************
** Meta object code from reading C++ file 'bitcoin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "/home/liam/friotaioch/src/qt/bitcoin.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoin.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18BitcoinApplicationE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN18BitcoinApplicationE = QtMocHelpers::stringData(
    "BitcoinApplication",
    "requestedInitialize",
    "",
    "requestedShutdown",
    "windowShown",
    "BitcoinGUI*",
    "window",
    "initializeResult",
    "success",
    "interfaces::BlockAndHeaderTipInfo",
    "tip_info",
    "requestShutdown",
    "handleRunawayException",
    "message",
    "handleNonFatalException"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN18BitcoinApplicationE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,
       4,    1,   58,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,   61,    2, 0x0a,    5 /* Public */,
      11,    0,   66,    2, 0x0a,    8 /* Public */,
      12,    1,   67,    2, 0x0a,    9 /* Public */,
      14,    1,   70,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 9,    8,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject BitcoinApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<QApplication::staticMetaObject>(),
    qt_meta_stringdata_ZN18BitcoinApplicationE.offsetsAndSizes,
    qt_meta_data_ZN18BitcoinApplicationE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN18BitcoinApplicationE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BitcoinApplication, std::true_type>,
        // method 'requestedInitialize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestedShutdown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowShown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BitcoinGUI *, std::false_type>,
        // method 'initializeResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<interfaces::BlockAndHeaderTipInfo, std::false_type>,
        // method 'requestShutdown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleRunawayException'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'handleNonFatalException'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void BitcoinApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BitcoinApplication *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestedInitialize(); break;
        case 1: _t->requestedShutdown(); break;
        case 2: _t->windowShown((*reinterpret_cast< std::add_pointer_t<BitcoinGUI*>>(_a[1]))); break;
        case 3: _t->initializeResult((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<interfaces::BlockAndHeaderTipInfo>>(_a[2]))); break;
        case 4: _t->requestShutdown(); break;
        case 5: _t->handleRunawayException((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->handleNonFatalException((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (BitcoinApplication::*)();
            if (_q_method_type _q_method = &BitcoinApplication::requestedInitialize; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (BitcoinApplication::*)();
            if (_q_method_type _q_method = &BitcoinApplication::requestedShutdown; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (BitcoinApplication::*)(BitcoinGUI * );
            if (_q_method_type _q_method = &BitcoinApplication::windowShown; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *BitcoinApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN18BitcoinApplicationE.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int BitcoinApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void BitcoinApplication::requestedInitialize()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BitcoinApplication::requestedShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BitcoinApplication::windowShown(BitcoinGUI * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
