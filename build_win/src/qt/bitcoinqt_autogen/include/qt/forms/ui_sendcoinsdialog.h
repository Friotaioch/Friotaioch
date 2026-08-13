/********************************************************************************
** Form generated from reading UI file 'sendcoinsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSDIALOG_H
#define UI_SENDCOINSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/bitcoinamountfield.h"
#include "qt/qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendCoinsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameCoinControl;
    QVBoxLayout *verticalLayoutCoinControl2;
    QVBoxLayout *verticalLayoutCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl1;
    QLabel *labelCoinControlFeatures;
    QHBoxLayout *horizontalLayoutCoinControl2;
    QPushButton *pushButtonCoinControl;
    QLabel *labelCoinControlAutomaticallySelected;
    QLabel *labelCoinControlInsuffFunds;
    QSpacerItem *horizontalSpacerCoinControl;
    QWidget *widgetCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl5;
    QHBoxLayout *horizontalLayoutCoinControl3;
    QFormLayout *formLayoutCoinControl1;
    QLabel *labelCoinControlQuantityText;
    QLabel *labelCoinControlQuantity;
    QLabel *labelCoinControlBytesText;
    QLabel *labelCoinControlBytes;
    QFormLayout *formLayoutCoinControl2;
    QLabel *labelCoinControlAmountText;
    QLabel *labelCoinControlAmount;
    QFormLayout *formLayoutCoinControl3;
    QLabel *labelCoinControlFeeText;
    QLabel *labelCoinControlFee;
    QFormLayout *formLayoutCoinControl4;
    QLabel *labelCoinControlAfterFeeText;
    QLabel *labelCoinControlAfterFee;
    QLabel *labelCoinControlChangeText;
    QLabel *labelCoinControlChange;
    QHBoxLayout *horizontalLayoutCoinControl4;
    QCheckBox *checkBoxCoinControlChange;
    QValidatedLineEdit *lineEditCoinControlChange;
    QLabel *labelCoinControlChangeLabel;
    QSpacerItem *verticalSpacerCoinControl;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *entries;
    QSpacerItem *verticalSpacer;
    QFrame *frameFee;
    QVBoxLayout *verticalLayoutFee1;
    QVBoxLayout *verticalLayoutFee2;
    QHBoxLayout *horizontalLayoutFee1;
    QVBoxLayout *verticalLayoutFee7;
    QSpacerItem *verticalSpacerSmartFee;
    QHBoxLayout *horizontalLayoutSmartFee;
    QLabel *labelFeeHeadline;
    QLabel *labelFeeMinimized;
    QPushButton *buttonChooseFee;
    QSpacerItem *verticalSpacer_5;
    QLabel *fallbackFeeWarningLabel;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *buttonMinimizeFee;
    QFrame *frameFeeSelection;
    QVBoxLayout *verticalLayoutFee12;
    QGridLayout *gridLayoutFee;
    QVBoxLayout *verticalLayoutFee8;
    QHBoxLayout *horizontalLayoutFee13;
    QLabel *labelCustomPerKilobyte;
    BitcoinAmountField *customFee;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayoutFee8;
    QLabel *labelCustomFeeWarning;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayoutFee4;
    QRadioButton *radioSmartFee;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayoutFee9;
    QRadioButton *radioCustomFee;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayoutFee3;
    QHBoxLayout *horizontalLayoutFee12;
    QLabel *labelSmartFee;
    QLabel *labelFeeEstimation;
    QLabel *labelSmartFee2;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayoutFee9;
    QVBoxLayout *verticalLayoutFee6;
    QLabel *labelSmartFee3;
    QVBoxLayout *verticalLayoutFee5;
    QHBoxLayout *horizontalLayoutConfTarget;
    QComboBox *confTargetSelector;
    QSpacerItem *horizontalSpacerConfTarget;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacerFee;
    QHBoxLayout *horizontalLayout;
    QPushButton *sendButton;
    QPushButton *clearButton;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelBalanceName;
    QLabel *labelBalance;
    QButtonGroup *groupFee;

    void setupUi(QDialog *SendCoinsDialog)
    {
        if (SendCoinsDialog->objectName().isEmpty())
            SendCoinsDialog->setObjectName("SendCoinsDialog");
        SendCoinsDialog->resize(850, 526);
        verticalLayout = new QVBoxLayout(SendCoinsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, -1, 8);
        frameCoinControl = new QFrame(SendCoinsDialog);
        frameCoinControl->setObjectName("frameCoinControl");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameCoinControl->sizePolicy().hasHeightForWidth());
        frameCoinControl->setSizePolicy(sizePolicy);
        frameCoinControl->setMaximumSize(QSize(16777215, 16777215));
        frameCoinControl->setFrameShape(QFrame::StyledPanel);
        frameCoinControl->setFrameShadow(QFrame::Sunken);
        verticalLayoutCoinControl2 = new QVBoxLayout(frameCoinControl);
        verticalLayoutCoinControl2->setSpacing(0);
        verticalLayoutCoinControl2->setObjectName("verticalLayoutCoinControl2");
        verticalLayoutCoinControl2->setContentsMargins(0, 0, 0, 6);
        verticalLayoutCoinControl = new QVBoxLayout();
        verticalLayoutCoinControl->setSpacing(0);
        verticalLayoutCoinControl->setObjectName("verticalLayoutCoinControl");
        verticalLayoutCoinControl->setContentsMargins(10, 10, -1, -1);
        horizontalLayoutCoinControl1 = new QHBoxLayout();
        horizontalLayoutCoinControl1->setObjectName("horizontalLayoutCoinControl1");
        horizontalLayoutCoinControl1->setContentsMargins(-1, -1, -1, 15);
        labelCoinControlFeatures = new QLabel(frameCoinControl);
        labelCoinControlFeatures->setObjectName("labelCoinControlFeatures");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelCoinControlFeatures->sizePolicy().hasHeightForWidth());
        labelCoinControlFeatures->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        labelCoinControlFeatures->setFont(font);
        labelCoinControlFeatures->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        horizontalLayoutCoinControl1->addWidget(labelCoinControlFeatures);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl1);

        horizontalLayoutCoinControl2 = new QHBoxLayout();
        horizontalLayoutCoinControl2->setSpacing(8);
        horizontalLayoutCoinControl2->setObjectName("horizontalLayoutCoinControl2");
        horizontalLayoutCoinControl2->setContentsMargins(-1, -1, -1, 10);
        pushButtonCoinControl = new QPushButton(frameCoinControl);
        pushButtonCoinControl->setObjectName("pushButtonCoinControl");
        pushButtonCoinControl->setStyleSheet(QString::fromUtf8(""));
        pushButtonCoinControl->setAutoDefault(false);

        horizontalLayoutCoinControl2->addWidget(pushButtonCoinControl);

        labelCoinControlAutomaticallySelected = new QLabel(frameCoinControl);
        labelCoinControlAutomaticallySelected->setObjectName("labelCoinControlAutomaticallySelected");
        labelCoinControlAutomaticallySelected->setMargin(5);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlAutomaticallySelected);

        labelCoinControlInsuffFunds = new QLabel(frameCoinControl);
        labelCoinControlInsuffFunds->setObjectName("labelCoinControlInsuffFunds");
        labelCoinControlInsuffFunds->setFont(font);
        labelCoinControlInsuffFunds->setStyleSheet(QString::fromUtf8("color:red;font-weight:bold;"));
        labelCoinControlInsuffFunds->setMargin(5);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlInsuffFunds);

        horizontalSpacerCoinControl = new QSpacerItem(40, 1, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutCoinControl2->addItem(horizontalSpacerCoinControl);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl2);

        widgetCoinControl = new QWidget(frameCoinControl);
        widgetCoinControl->setObjectName("widgetCoinControl");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetCoinControl->sizePolicy().hasHeightForWidth());
        widgetCoinControl->setSizePolicy(sizePolicy2);
        widgetCoinControl->setMinimumSize(QSize(0, 0));
        widgetCoinControl->setStyleSheet(QString::fromUtf8(""));
        horizontalLayoutCoinControl5 = new QHBoxLayout(widgetCoinControl);
        horizontalLayoutCoinControl5->setObjectName("horizontalLayoutCoinControl5");
        horizontalLayoutCoinControl5->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutCoinControl3 = new QHBoxLayout();
        horizontalLayoutCoinControl3->setSpacing(20);
        horizontalLayoutCoinControl3->setObjectName("horizontalLayoutCoinControl3");
        horizontalLayoutCoinControl3->setContentsMargins(-1, 0, -1, 10);
        formLayoutCoinControl1 = new QFormLayout();
        formLayoutCoinControl1->setObjectName("formLayoutCoinControl1");
        formLayoutCoinControl1->setLabelAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        formLayoutCoinControl1->setHorizontalSpacing(10);
        formLayoutCoinControl1->setVerticalSpacing(14);
        formLayoutCoinControl1->setContentsMargins(10, 4, 6, -1);
        labelCoinControlQuantityText = new QLabel(widgetCoinControl);
        labelCoinControlQuantityText->setObjectName("labelCoinControlQuantityText");
        labelCoinControlQuantityText->setFont(font);
        labelCoinControlQuantityText->setMargin(0);

        formLayoutCoinControl1->setWidget(0, QFormLayout::LabelRole, labelCoinControlQuantityText);

        labelCoinControlQuantity = new QLabel(widgetCoinControl);
        labelCoinControlQuantity->setObjectName("labelCoinControlQuantity");
        labelCoinControlQuantity->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        labelCoinControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlQuantity->setText(QString::fromUtf8("0"));
        labelCoinControlQuantity->setMargin(0);
        labelCoinControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(0, QFormLayout::FieldRole, labelCoinControlQuantity);

        labelCoinControlBytesText = new QLabel(widgetCoinControl);
        labelCoinControlBytesText->setObjectName("labelCoinControlBytesText");
        labelCoinControlBytesText->setFont(font);

        formLayoutCoinControl1->setWidget(1, QFormLayout::LabelRole, labelCoinControlBytesText);

        labelCoinControlBytes = new QLabel(widgetCoinControl);
        labelCoinControlBytes->setObjectName("labelCoinControlBytes");
        labelCoinControlBytes->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        labelCoinControlBytes->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlBytes->setText(QString::fromUtf8("0"));
        labelCoinControlBytes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(1, QFormLayout::FieldRole, labelCoinControlBytes);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl1);

        formLayoutCoinControl2 = new QFormLayout();
        formLayoutCoinControl2->setObjectName("formLayoutCoinControl2");
        formLayoutCoinControl2->setHorizontalSpacing(10);
        formLayoutCoinControl2->setVerticalSpacing(14);
        formLayoutCoinControl2->setContentsMargins(6, 4, 6, -1);
        labelCoinControlAmountText = new QLabel(widgetCoinControl);
        labelCoinControlAmountText->setObjectName("labelCoinControlAmountText");
        labelCoinControlAmountText->setFont(font);
        labelCoinControlAmountText->setMargin(0);

        formLayoutCoinControl2->setWidget(0, QFormLayout::LabelRole, labelCoinControlAmountText);

        labelCoinControlAmount = new QLabel(widgetCoinControl);
        labelCoinControlAmount->setObjectName("labelCoinControlAmount");
        labelCoinControlAmount->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        labelCoinControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAmount->setText(QString::fromUtf8("0.00 BTC"));
        labelCoinControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(0, QFormLayout::FieldRole, labelCoinControlAmount);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl2);

        formLayoutCoinControl3 = new QFormLayout();
        formLayoutCoinControl3->setObjectName("formLayoutCoinControl3");
        formLayoutCoinControl3->setHorizontalSpacing(10);
        formLayoutCoinControl3->setVerticalSpacing(14);
        formLayoutCoinControl3->setContentsMargins(6, 4, 6, -1);
        labelCoinControlFeeText = new QLabel(widgetCoinControl);
        labelCoinControlFeeText->setObjectName("labelCoinControlFeeText");
        labelCoinControlFeeText->setFont(font);
        labelCoinControlFeeText->setMargin(0);

        formLayoutCoinControl3->setWidget(0, QFormLayout::LabelRole, labelCoinControlFeeText);

        labelCoinControlFee = new QLabel(widgetCoinControl);
        labelCoinControlFee->setObjectName("labelCoinControlFee");
        labelCoinControlFee->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        labelCoinControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlFee->setText(QString::fromUtf8("0.00 BTC"));
        labelCoinControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(0, QFormLayout::FieldRole, labelCoinControlFee);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl3);

        formLayoutCoinControl4 = new QFormLayout();
        formLayoutCoinControl4->setObjectName("formLayoutCoinControl4");
        formLayoutCoinControl4->setLabelAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        formLayoutCoinControl4->setHorizontalSpacing(10);
        formLayoutCoinControl4->setVerticalSpacing(14);
        formLayoutCoinControl4->setContentsMargins(6, 4, 6, -1);
        labelCoinControlAfterFeeText = new QLabel(widgetCoinControl);
        labelCoinControlAfterFeeText->setObjectName("labelCoinControlAfterFeeText");
        labelCoinControlAfterFeeText->setFont(font);
        labelCoinControlAfterFeeText->setMargin(0);

        formLayoutCoinControl4->setWidget(0, QFormLayout::LabelRole, labelCoinControlAfterFeeText);

        labelCoinControlAfterFee = new QLabel(widgetCoinControl);
        labelCoinControlAfterFee->setObjectName("labelCoinControlAfterFee");
        labelCoinControlAfterFee->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        labelCoinControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAfterFee->setText(QString::fromUtf8("0.00 BTC"));
        labelCoinControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(0, QFormLayout::FieldRole, labelCoinControlAfterFee);

        labelCoinControlChangeText = new QLabel(widgetCoinControl);
        labelCoinControlChangeText->setObjectName("labelCoinControlChangeText");
        labelCoinControlChangeText->setFont(font);

        formLayoutCoinControl4->setWidget(1, QFormLayout::LabelRole, labelCoinControlChangeText);

        labelCoinControlChange = new QLabel(widgetCoinControl);
        labelCoinControlChange->setObjectName("labelCoinControlChange");
        labelCoinControlChange->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        labelCoinControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlChange->setText(QString::fromUtf8("0.00 BTC"));
        labelCoinControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(1, QFormLayout::FieldRole, labelCoinControlChange);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl4);

        horizontalLayoutCoinControl3->setStretch(3, 1);

        horizontalLayoutCoinControl5->addLayout(horizontalLayoutCoinControl3);


        verticalLayoutCoinControl->addWidget(widgetCoinControl);

        horizontalLayoutCoinControl4 = new QHBoxLayout();
        horizontalLayoutCoinControl4->setSpacing(12);
        horizontalLayoutCoinControl4->setObjectName("horizontalLayoutCoinControl4");
        horizontalLayoutCoinControl4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayoutCoinControl4->setContentsMargins(-1, 5, 5, -1);
        checkBoxCoinControlChange = new QCheckBox(frameCoinControl);
        checkBoxCoinControlChange->setObjectName("checkBoxCoinControlChange");

        horizontalLayoutCoinControl4->addWidget(checkBoxCoinControlChange);

        lineEditCoinControlChange = new QValidatedLineEdit(frameCoinControl);
        lineEditCoinControlChange->setObjectName("lineEditCoinControlChange");
        lineEditCoinControlChange->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEditCoinControlChange->sizePolicy().hasHeightForWidth());
        lineEditCoinControlChange->setSizePolicy(sizePolicy3);

        horizontalLayoutCoinControl4->addWidget(lineEditCoinControlChange);

        labelCoinControlChangeLabel = new QLabel(frameCoinControl);
        labelCoinControlChangeLabel->setObjectName("labelCoinControlChangeLabel");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelCoinControlChangeLabel->sizePolicy().hasHeightForWidth());
        labelCoinControlChangeLabel->setSizePolicy(sizePolicy4);
        labelCoinControlChangeLabel->setMinimumSize(QSize(0, 0));
        labelCoinControlChangeLabel->setMargin(3);

        horizontalLayoutCoinControl4->addWidget(labelCoinControlChangeLabel);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl4);

        verticalSpacerCoinControl = new QSpacerItem(800, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutCoinControl->addItem(verticalSpacerCoinControl);

        verticalLayoutCoinControl->setStretch(4, 1);

        verticalLayoutCoinControl2->addLayout(verticalLayoutCoinControl);


        verticalLayout->addWidget(frameCoinControl);

        scrollArea = new QScrollArea(SendCoinsDialog);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 830, 104));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        entries = new QVBoxLayout();
        entries->setSpacing(6);
        entries->setObjectName("entries");

        verticalLayout_2->addLayout(entries);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_2->setStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        frameFee = new QFrame(SendCoinsDialog);
        frameFee->setObjectName("frameFee");
        sizePolicy.setHeightForWidth(frameFee->sizePolicy().hasHeightForWidth());
        frameFee->setSizePolicy(sizePolicy);
        frameFee->setMaximumSize(QSize(16777215, 16777215));
        frameFee->setFrameShape(QFrame::StyledPanel);
        frameFee->setFrameShadow(QFrame::Sunken);
        verticalLayoutFee1 = new QVBoxLayout(frameFee);
        verticalLayoutFee1->setSpacing(0);
        verticalLayoutFee1->setObjectName("verticalLayoutFee1");
        verticalLayoutFee1->setContentsMargins(0, 0, 0, 0);
        verticalLayoutFee2 = new QVBoxLayout();
        verticalLayoutFee2->setSpacing(0);
        verticalLayoutFee2->setObjectName("verticalLayoutFee2");
        verticalLayoutFee2->setContentsMargins(10, 0, -1, -1);
        horizontalLayoutFee1 = new QHBoxLayout();
        horizontalLayoutFee1->setObjectName("horizontalLayoutFee1");
        horizontalLayoutFee1->setContentsMargins(-1, -1, -1, 0);
        verticalLayoutFee7 = new QVBoxLayout();
        verticalLayoutFee7->setSpacing(0);
        verticalLayoutFee7->setObjectName("verticalLayoutFee7");
        verticalSpacerSmartFee = new QSpacerItem(1, 4, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayoutFee7->addItem(verticalSpacerSmartFee);

        horizontalLayoutSmartFee = new QHBoxLayout();
        horizontalLayoutSmartFee->setSpacing(10);
        horizontalLayoutSmartFee->setObjectName("horizontalLayoutSmartFee");
        labelFeeHeadline = new QLabel(frameFee);
        labelFeeHeadline->setObjectName("labelFeeHeadline");
        sizePolicy1.setHeightForWidth(labelFeeHeadline->sizePolicy().hasHeightForWidth());
        labelFeeHeadline->setSizePolicy(sizePolicy1);
        labelFeeHeadline->setFont(font);
        labelFeeHeadline->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        horizontalLayoutSmartFee->addWidget(labelFeeHeadline);

        labelFeeMinimized = new QLabel(frameFee);
        labelFeeMinimized->setObjectName("labelFeeMinimized");

        horizontalLayoutSmartFee->addWidget(labelFeeMinimized);

        buttonChooseFee = new QPushButton(frameFee);
        buttonChooseFee->setObjectName("buttonChooseFee");

        horizontalLayoutSmartFee->addWidget(buttonChooseFee);


        verticalLayoutFee7->addLayout(horizontalLayoutSmartFee);

        verticalSpacer_5 = new QSpacerItem(1, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutFee7->addItem(verticalSpacer_5);


        horizontalLayoutFee1->addLayout(verticalLayoutFee7);

        fallbackFeeWarningLabel = new QLabel(frameFee);
        fallbackFeeWarningLabel->setObjectName("fallbackFeeWarningLabel");
        fallbackFeeWarningLabel->setFont(font);
        fallbackFeeWarningLabel->setWordWrap(false);

        horizontalLayoutFee1->addWidget(fallbackFeeWarningLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutFee1->addItem(horizontalSpacer_4);

        buttonMinimizeFee = new QPushButton(frameFee);
        buttonMinimizeFee->setObjectName("buttonMinimizeFee");

        horizontalLayoutFee1->addWidget(buttonMinimizeFee);


        verticalLayoutFee2->addLayout(horizontalLayoutFee1);

        frameFeeSelection = new QFrame(frameFee);
        frameFeeSelection->setObjectName("frameFeeSelection");
        verticalLayoutFee12 = new QVBoxLayout(frameFeeSelection);
        verticalLayoutFee12->setSpacing(0);
        verticalLayoutFee12->setObjectName("verticalLayoutFee12");
        verticalLayoutFee12->setContentsMargins(0, 0, 0, 0);
        gridLayoutFee = new QGridLayout();
        gridLayoutFee->setObjectName("gridLayoutFee");
        gridLayoutFee->setHorizontalSpacing(10);
        gridLayoutFee->setVerticalSpacing(4);
        gridLayoutFee->setContentsMargins(-1, 10, -1, 4);
        verticalLayoutFee8 = new QVBoxLayout();
        verticalLayoutFee8->setSpacing(6);
        verticalLayoutFee8->setObjectName("verticalLayoutFee8");
        horizontalLayoutFee13 = new QHBoxLayout();
        horizontalLayoutFee13->setObjectName("horizontalLayoutFee13");
        labelCustomPerKilobyte = new QLabel(frameFeeSelection);
        labelCustomPerKilobyte->setObjectName("labelCustomPerKilobyte");

        horizontalLayoutFee13->addWidget(labelCustomPerKilobyte);

        customFee = new BitcoinAmountField(frameFeeSelection);
        customFee->setObjectName("customFee");

        horizontalLayoutFee13->addWidget(customFee);

        horizontalSpacer_6 = new QSpacerItem(1, 1, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutFee13->addItem(horizontalSpacer_6);


        verticalLayoutFee8->addLayout(horizontalLayoutFee13);

        horizontalLayoutFee8 = new QHBoxLayout();
        horizontalLayoutFee8->setObjectName("horizontalLayoutFee8");
        labelCustomFeeWarning = new QLabel(frameFeeSelection);
        labelCustomFeeWarning->setObjectName("labelCustomFeeWarning");
        labelCustomFeeWarning->setEnabled(true);

        horizontalLayoutFee8->addWidget(labelCustomFeeWarning);

        horizontalSpacer_2 = new QSpacerItem(1, 1, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutFee8->addItem(horizontalSpacer_2);


        verticalLayoutFee8->addLayout(horizontalLayoutFee8);


        gridLayoutFee->addLayout(verticalLayoutFee8, 1, 1, 1, 1);

        verticalLayoutFee4 = new QVBoxLayout();
        verticalLayoutFee4->setObjectName("verticalLayoutFee4");
        radioSmartFee = new QRadioButton(frameFeeSelection);
        groupFee = new QButtonGroup(SendCoinsDialog);
        groupFee->setObjectName("groupFee");
        groupFee->addButton(radioSmartFee);
        radioSmartFee->setObjectName("radioSmartFee");
        radioSmartFee->setChecked(true);

        verticalLayoutFee4->addWidget(radioSmartFee);

        verticalSpacer_2 = new QSpacerItem(1, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutFee4->addItem(verticalSpacer_2);

        verticalLayoutFee4->setStretch(1, 1);

        gridLayoutFee->addLayout(verticalLayoutFee4, 0, 0, 1, 1);

        verticalLayoutFee9 = new QVBoxLayout();
        verticalLayoutFee9->setObjectName("verticalLayoutFee9");
        radioCustomFee = new QRadioButton(frameFeeSelection);
        groupFee->addButton(radioCustomFee);
        radioCustomFee->setObjectName("radioCustomFee");

        verticalLayoutFee9->addWidget(radioCustomFee);

        verticalSpacer_6 = new QSpacerItem(1, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutFee9->addItem(verticalSpacer_6);

        verticalLayoutFee9->setStretch(1, 1);

        gridLayoutFee->addLayout(verticalLayoutFee9, 1, 0, 1, 1);

        verticalLayoutFee3 = new QVBoxLayout();
        verticalLayoutFee3->setSpacing(6);
        verticalLayoutFee3->setObjectName("verticalLayoutFee3");
        verticalLayoutFee3->setContentsMargins(-1, 2, -1, -1);
        horizontalLayoutFee12 = new QHBoxLayout();
        horizontalLayoutFee12->setObjectName("horizontalLayoutFee12");
        labelSmartFee = new QLabel(frameFeeSelection);
        labelSmartFee->setObjectName("labelSmartFee");

        horizontalLayoutFee12->addWidget(labelSmartFee);

        labelFeeEstimation = new QLabel(frameFeeSelection);
        labelFeeEstimation->setObjectName("labelFeeEstimation");

        horizontalLayoutFee12->addWidget(labelFeeEstimation);

        labelSmartFee2 = new QLabel(frameFeeSelection);
        labelSmartFee2->setObjectName("labelSmartFee2");

        horizontalLayoutFee12->addWidget(labelSmartFee2);

        horizontalSpacer_5 = new QSpacerItem(1, 1, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutFee12->addItem(horizontalSpacer_5);


        verticalLayoutFee3->addLayout(horizontalLayoutFee12);

        horizontalLayoutFee9 = new QHBoxLayout();
        horizontalLayoutFee9->setObjectName("horizontalLayoutFee9");
        verticalLayoutFee6 = new QVBoxLayout();
        verticalLayoutFee6->setObjectName("verticalLayoutFee6");
        labelSmartFee3 = new QLabel(frameFeeSelection);
        labelSmartFee3->setObjectName("labelSmartFee3");

        verticalLayoutFee6->addWidget(labelSmartFee3);


        horizontalLayoutFee9->addLayout(verticalLayoutFee6);

        verticalLayoutFee5 = new QVBoxLayout();
        verticalLayoutFee5->setObjectName("verticalLayoutFee5");
        verticalLayoutFee5->setContentsMargins(-1, -1, 30, -1);
        horizontalLayoutConfTarget = new QHBoxLayout();
        horizontalLayoutConfTarget->setObjectName("horizontalLayoutConfTarget");
        horizontalLayoutConfTarget->setContentsMargins(-1, -1, -1, 0);
        confTargetSelector = new QComboBox(frameFeeSelection);
        confTargetSelector->setObjectName("confTargetSelector");

        horizontalLayoutConfTarget->addWidget(confTargetSelector);

        horizontalSpacerConfTarget = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutConfTarget->addItem(horizontalSpacerConfTarget);


        verticalLayoutFee5->addLayout(horizontalLayoutConfTarget);


        horizontalLayoutFee9->addLayout(verticalLayoutFee5);


        verticalLayoutFee3->addLayout(horizontalLayoutFee9);

        verticalSpacer_4 = new QSpacerItem(1, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutFee3->addItem(verticalSpacer_4);

        verticalLayoutFee3->setStretch(2, 1);

        gridLayoutFee->addLayout(verticalLayoutFee3, 0, 1, 1, 1);


        verticalLayoutFee12->addLayout(gridLayoutFee);


        verticalLayoutFee2->addWidget(frameFeeSelection);

        verticalSpacerFee = new QSpacerItem(40, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutFee2->addItem(verticalSpacerFee);


        verticalLayoutFee1->addLayout(verticalLayoutFee2);


        verticalLayout->addWidget(frameFee);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        sendButton = new QPushButton(SendCoinsDialog);
        sendButton->setObjectName("sendButton");
        sendButton->setMinimumSize(QSize(150, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/send"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        sendButton->setIcon(icon);
        sendButton->setAutoDefault(false);

        horizontalLayout->addWidget(sendButton);

        clearButton = new QPushButton(SendCoinsDialog);
        clearButton->setObjectName("clearButton");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy5);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        clearButton->setIcon(icon1);
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);

        addButton = new QPushButton(SendCoinsDialog);
        addButton->setObjectName("addButton");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/add"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addButton->setIcon(icon2);
        addButton->setAutoDefault(false);

        horizontalLayout->addWidget(addButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelBalanceName = new QLabel(SendCoinsDialog);
        labelBalanceName->setObjectName("labelBalanceName");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(labelBalanceName->sizePolicy().hasHeightForWidth());
        labelBalanceName->setSizePolicy(sizePolicy6);

        horizontalLayout_2->addWidget(labelBalanceName);

        labelBalance = new QLabel(SendCoinsDialog);
        labelBalance->setObjectName("labelBalance");
        sizePolicy6.setHeightForWidth(labelBalance->sizePolicy().hasHeightForWidth());
        labelBalance->setSizePolicy(sizePolicy6);
        labelBalance->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("123.456 BTC"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelBalance);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(1, 1);

        retranslateUi(SendCoinsDialog);

        sendButton->setDefault(false);


        QMetaObject::connectSlotsByName(SendCoinsDialog);
    } // setupUi

    void retranslateUi(QDialog *SendCoinsDialog)
    {
        SendCoinsDialog->setWindowTitle(QCoreApplication::translate("SendCoinsDialog", "Send Coins", nullptr));
        labelCoinControlFeatures->setText(QCoreApplication::translate("SendCoinsDialog", "Coin Control Features", nullptr));
        pushButtonCoinControl->setText(QCoreApplication::translate("SendCoinsDialog", "Inputs\342\200\246", nullptr));
        labelCoinControlAutomaticallySelected->setText(QCoreApplication::translate("SendCoinsDialog", "automatically selected", nullptr));
        labelCoinControlInsuffFunds->setText(QCoreApplication::translate("SendCoinsDialog", "Insufficient funds!", nullptr));
        labelCoinControlQuantityText->setText(QCoreApplication::translate("SendCoinsDialog", "Quantity:", nullptr));
        labelCoinControlBytesText->setText(QCoreApplication::translate("SendCoinsDialog", "Bytes:", nullptr));
        labelCoinControlAmountText->setText(QCoreApplication::translate("SendCoinsDialog", "Amount:", nullptr));
        labelCoinControlFeeText->setText(QCoreApplication::translate("SendCoinsDialog", "Fee:", nullptr));
        labelCoinControlAfterFeeText->setText(QCoreApplication::translate("SendCoinsDialog", "After Fee:", nullptr));
        labelCoinControlChangeText->setText(QCoreApplication::translate("SendCoinsDialog", "Change:", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxCoinControlChange->setToolTip(QCoreApplication::translate("SendCoinsDialog", "If this is activated, but the change address is empty or invalid, change will be sent to a newly generated address.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxCoinControlChange->setText(QCoreApplication::translate("SendCoinsDialog", "Custom change address", nullptr));
        labelCoinControlChangeLabel->setText(QString());
        labelFeeHeadline->setText(QCoreApplication::translate("SendCoinsDialog", "Transaction Fee:", nullptr));
        labelFeeMinimized->setText(QString());
        buttonChooseFee->setText(QCoreApplication::translate("SendCoinsDialog", "Choose\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        fallbackFeeWarningLabel->setToolTip(QCoreApplication::translate("SendCoinsDialog", "Using the fallbackfee can result in sending a transaction that will take several hours or days (or never) to confirm. Consider choosing your fee manually or wait until you have validated the complete chain.", nullptr));
#endif // QT_CONFIG(tooltip)
        fallbackFeeWarningLabel->setText(QCoreApplication::translate("SendCoinsDialog", "Warning: Fee estimation is currently not possible.", nullptr));
#if QT_CONFIG(tooltip)
        buttonMinimizeFee->setToolTip(QCoreApplication::translate("SendCoinsDialog", "Hide transaction fee settings", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonMinimizeFee->setText(QCoreApplication::translate("SendCoinsDialog", "Hide", nullptr));
#if QT_CONFIG(tooltip)
        labelCustomPerKilobyte->setToolTip(QCoreApplication::translate("SendCoinsDialog", "Specify a custom fee per kB (1,000 bytes) of the transaction's virtual size.\n"
"\n"
"Note:  Since the fee is calculated on a per-byte basis, a fee rate of \"100 satoshis per kvB\" for a transaction size of 500 virtual bytes (half of 1 kvB) would ultimately yield a fee of only 50 satoshis.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelCustomPerKilobyte->setText(QCoreApplication::translate("SendCoinsDialog", "per kilobyte", nullptr));
#if QT_CONFIG(tooltip)
        labelCustomFeeWarning->setToolTip(QCoreApplication::translate("SendCoinsDialog", "When there is less transaction volume than space in the blocks, miners as well as relaying nodes may enforce a minimum fee. Paying only this minimum fee is just fine, but be aware that this can result in a never confirming transaction once there is more demand for bitcoin transactions than the network can process.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelCustomFeeWarning->setText(QCoreApplication::translate("SendCoinsDialog", "A too low fee might result in a never confirming transaction (read the tooltip)", nullptr));
        radioSmartFee->setText(QCoreApplication::translate("SendCoinsDialog", "Recommended:", nullptr));
        radioCustomFee->setText(QCoreApplication::translate("SendCoinsDialog", "Custom:", nullptr));
        labelSmartFee->setText(QString());
        labelFeeEstimation->setText(QString());
        labelSmartFee2->setText(QCoreApplication::translate("SendCoinsDialog", "(Smart fee not initialized yet. This usually takes a few blocks\342\200\246)", nullptr));
        labelSmartFee3->setText(QCoreApplication::translate("SendCoinsDialog", "Confirmation time target:", nullptr));
#if QT_CONFIG(tooltip)
        sendButton->setToolTip(QCoreApplication::translate("SendCoinsDialog", "Confirm the send action", nullptr));
#endif // QT_CONFIG(tooltip)
        sendButton->setText(QCoreApplication::translate("SendCoinsDialog", "S&end", nullptr));
#if QT_CONFIG(tooltip)
        clearButton->setToolTip(QCoreApplication::translate("SendCoinsDialog", "Clear all fields of the form.", nullptr));
#endif // QT_CONFIG(tooltip)
        clearButton->setText(QCoreApplication::translate("SendCoinsDialog", "Clear &All", nullptr));
#if QT_CONFIG(tooltip)
        addButton->setToolTip(QCoreApplication::translate("SendCoinsDialog", "Send to multiple recipients at once", nullptr));
#endif // QT_CONFIG(tooltip)
        addButton->setText(QCoreApplication::translate("SendCoinsDialog", "Add &Recipient", nullptr));
        labelBalanceName->setText(QCoreApplication::translate("SendCoinsDialog", "Balance:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendCoinsDialog: public Ui_SendCoinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSDIALOG_H
