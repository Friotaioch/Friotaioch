/****************************************************************************
** Meta object code from reading C++ file 'optionsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "/home/liam/friotaioch/src/qt/optionsdialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21ProxyAddressValidatorE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN21ProxyAddressValidatorE = QtMocHelpers::stringData(
    "ProxyAddressValidator"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN21ProxyAddressValidatorE[] = {

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

Q_CONSTINIT const QMetaObject ProxyAddressValidator::staticMetaObject = { {
    QMetaObject::SuperData::link<QValidator::staticMetaObject>(),
    qt_meta_stringdata_ZN21ProxyAddressValidatorE.offsetsAndSizes,
    qt_meta_data_ZN21ProxyAddressValidatorE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN21ProxyAddressValidatorE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProxyAddressValidator, std::true_type>
    >,
    nullptr
} };

void ProxyAddressValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ProxyAddressValidator *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *ProxyAddressValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProxyAddressValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN21ProxyAddressValidatorE.stringdata0))
        return static_cast<void*>(this);
    return QValidator::qt_metacast(_clname);
}

int ProxyAddressValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN13OptionsDialogE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13OptionsDialogE = QtMocHelpers::stringData(
    "OptionsDialog",
    "proxyIpChecks",
    "",
    "QValidatedLineEdit*",
    "pUiProxyIp",
    "uint16_t",
    "nProxyPort",
    "quitOnReset",
    "setOkButtonState",
    "fState",
    "on_resetButton_clicked",
    "on_openBitcoinConfButton_clicked",
    "on_okButton_clicked",
    "on_cancelButton_clicked",
    "on_showTrayIcon_stateChanged",
    "state",
    "togglePruneWarning",
    "enabled",
    "showRestartWarning",
    "fPersistent",
    "clearStatusLabel",
    "updateProxyValidationState",
    "updateDefaultProxyNets"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13OptionsDialogE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   98,    2, 0x06,    1 /* Public */,
       7,    0,  103,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,  104,    2, 0x08,    5 /* Private */,
      10,    0,  107,    2, 0x08,    7 /* Private */,
      11,    0,  108,    2, 0x08,    8 /* Private */,
      12,    0,  109,    2, 0x08,    9 /* Private */,
      13,    0,  110,    2, 0x08,   10 /* Private */,
      14,    1,  111,    2, 0x08,   11 /* Private */,
      16,    1,  114,    2, 0x08,   13 /* Private */,
      18,    1,  117,    2, 0x08,   15 /* Private */,
      18,    0,  120,    2, 0x28,   17 /* Private | MethodCloned */,
      20,    0,  121,    2, 0x08,   18 /* Private */,
      21,    0,  122,    2, 0x08,   19 /* Private */,
      22,    0,  123,    2, 0x08,   20 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OptionsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN13OptionsDialogE.offsetsAndSizes,
    qt_meta_data_ZN13OptionsDialogE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13OptionsDialogE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OptionsDialog, std::true_type>,
        // method 'proxyIpChecks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QValidatedLineEdit *, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'quitOnReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setOkButtonState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_resetButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_openBitcoinConfButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_okButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cancelButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_showTrayIcon_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'togglePruneWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showRestartWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showRestartWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearStatusLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateProxyValidationState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateDefaultProxyNets'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OptionsDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->proxyIpChecks((*reinterpret_cast< std::add_pointer_t<QValidatedLineEdit*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[2]))); break;
        case 1: _t->quitOnReset(); break;
        case 2: _t->setOkButtonState((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_resetButton_clicked(); break;
        case 4: _t->on_openBitcoinConfButton_clicked(); break;
        case 5: _t->on_okButton_clicked(); break;
        case 6: _t->on_cancelButton_clicked(); break;
        case 7: _t->on_showTrayIcon_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->togglePruneWarning((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->showRestartWarning((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->showRestartWarning(); break;
        case 11: _t->clearStatusLabel(); break;
        case 12: _t->updateProxyValidationState(); break;
        case 13: _t->updateDefaultProxyNets(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (OptionsDialog::*)(QValidatedLineEdit * , uint16_t );
            if (_q_method_type _q_method = &OptionsDialog::proxyIpChecks; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (OptionsDialog::*)();
            if (_q_method_type _q_method = &OptionsDialog::quitOnReset; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *OptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13OptionsDialogE.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void OptionsDialog::proxyIpChecks(QValidatedLineEdit * _t1, uint16_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OptionsDialog::quitOnReset()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
