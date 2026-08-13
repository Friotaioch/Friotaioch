/********************************************************************************
** Form generated from reading UI file 'createwalletdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEWALLETDIALOG_H
#define UI_CREATEWALLETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateWalletDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_description;
    QLabel *label_subdescription;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *wallet_name_label;
    QLineEdit *wallet_name_line_edit;
    QCheckBox *encrypt_wallet_checkbox;
    QSpacerItem *verticalSpacer_1;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_groupbox;
    QCheckBox *disable_privkeys_checkbox;
    QCheckBox *blank_wallet_checkbox;
    QCheckBox *external_signer_checkbox;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateWalletDialog)
    {
        if (CreateWalletDialog->objectName().isEmpty())
            CreateWalletDialog->setObjectName("CreateWalletDialog");
        CreateWalletDialog->resize(371, 298);
        CreateWalletDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(CreateWalletDialog);
        verticalLayout->setObjectName("verticalLayout");
        label_description = new QLabel(CreateWalletDialog);
        label_description->setObjectName("label_description");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_description->sizePolicy().hasHeightForWidth());
        label_description->setSizePolicy(sizePolicy);
        label_description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_description->setWordWrap(false);

        verticalLayout->addWidget(label_description);

        label_subdescription = new QLabel(CreateWalletDialog);
        label_subdescription->setObjectName("label_subdescription");

        verticalLayout->addWidget(label_subdescription);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        wallet_name_label = new QLabel(CreateWalletDialog);
        wallet_name_label->setObjectName("wallet_name_label");

        horizontalLayout->addWidget(wallet_name_label);

        wallet_name_line_edit = new QLineEdit(CreateWalletDialog);
        wallet_name_line_edit->setObjectName("wallet_name_line_edit");
        wallet_name_line_edit->setMinimumSize(QSize(262, 0));

        horizontalLayout->addWidget(wallet_name_line_edit);


        verticalLayout->addLayout(horizontalLayout);

        encrypt_wallet_checkbox = new QCheckBox(CreateWalletDialog);
        encrypt_wallet_checkbox->setObjectName("encrypt_wallet_checkbox");
        encrypt_wallet_checkbox->setChecked(false);

        verticalLayout->addWidget(encrypt_wallet_checkbox);

        verticalSpacer_1 = new QSpacerItem(20, 8, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_1);

        groupBox = new QGroupBox(CreateWalletDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout_groupbox = new QVBoxLayout(groupBox);
        verticalLayout_groupbox->setSpacing(9);
        verticalLayout_groupbox->setObjectName("verticalLayout_groupbox");
        disable_privkeys_checkbox = new QCheckBox(groupBox);
        disable_privkeys_checkbox->setObjectName("disable_privkeys_checkbox");
        disable_privkeys_checkbox->setEnabled(true);

        verticalLayout_groupbox->addWidget(disable_privkeys_checkbox);

        blank_wallet_checkbox = new QCheckBox(groupBox);
        blank_wallet_checkbox->setObjectName("blank_wallet_checkbox");

        verticalLayout_groupbox->addWidget(blank_wallet_checkbox);

        external_signer_checkbox = new QCheckBox(groupBox);
        external_signer_checkbox->setObjectName("external_signer_checkbox");

        verticalLayout_groupbox->addWidget(external_signer_checkbox);


        verticalLayout->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(CreateWalletDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(wallet_name_line_edit, encrypt_wallet_checkbox);
        QWidget::setTabOrder(encrypt_wallet_checkbox, disable_privkeys_checkbox);
        QWidget::setTabOrder(disable_privkeys_checkbox, blank_wallet_checkbox);
        QWidget::setTabOrder(blank_wallet_checkbox, external_signer_checkbox);

        retranslateUi(CreateWalletDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CreateWalletDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CreateWalletDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CreateWalletDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateWalletDialog)
    {
        CreateWalletDialog->setWindowTitle(QCoreApplication::translate("CreateWalletDialog", "Create Wallet", nullptr));
        label_description->setText(QCoreApplication::translate("CreateWalletDialog", "You are one step away from creating your new wallet!", nullptr));
        label_subdescription->setText(QCoreApplication::translate("CreateWalletDialog", "Please provide a name and, if desired, enable any advanced options", nullptr));
        wallet_name_label->setText(QCoreApplication::translate("CreateWalletDialog", "Wallet Name", nullptr));
        wallet_name_line_edit->setPlaceholderText(QCoreApplication::translate("CreateWalletDialog", "Wallet", nullptr));
#if QT_CONFIG(tooltip)
        encrypt_wallet_checkbox->setToolTip(QCoreApplication::translate("CreateWalletDialog", "Encrypt the wallet. The wallet will be encrypted with a passphrase of your choice.", nullptr));
#endif // QT_CONFIG(tooltip)
        encrypt_wallet_checkbox->setText(QCoreApplication::translate("CreateWalletDialog", "Encrypt Wallet", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateWalletDialog", "Advanced Options", nullptr));
#if QT_CONFIG(tooltip)
        disable_privkeys_checkbox->setToolTip(QCoreApplication::translate("CreateWalletDialog", "Disable private keys for this wallet. Wallets with private keys disabled will have no private keys and cannot have an HD seed or imported private keys. This is ideal for watch-only wallets.", nullptr));
#endif // QT_CONFIG(tooltip)
        disable_privkeys_checkbox->setText(QCoreApplication::translate("CreateWalletDialog", "Disable Private Keys", nullptr));
#if QT_CONFIG(tooltip)
        blank_wallet_checkbox->setToolTip(QCoreApplication::translate("CreateWalletDialog", "Make a blank wallet. Blank wallets do not initially have private keys or scripts. Private keys and addresses can be imported using descriptors at a later time.", nullptr));
#endif // QT_CONFIG(tooltip)
        blank_wallet_checkbox->setText(QCoreApplication::translate("CreateWalletDialog", "Make Blank Wallet", nullptr));
#if QT_CONFIG(tooltip)
        external_signer_checkbox->setToolTip(QCoreApplication::translate("CreateWalletDialog", "Use an external signing device such as a hardware wallet. Configure the external signer script in wallet preferences first.", nullptr));
#endif // QT_CONFIG(tooltip)
        external_signer_checkbox->setText(QCoreApplication::translate("CreateWalletDialog", "External signer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateWalletDialog: public Ui_CreateWalletDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEWALLETDIALOG_H
