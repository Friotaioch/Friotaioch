/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/transactionoverviewwidget.h"

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QPushButton *labelWalletStatus;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *labelUnconfirmed;
    QFrame *line;
    QLabel *labelTotalText;
    QLabel *labelImmature;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelImmatureText;
    QLabel *labelTotal;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QLabel *labelPendingText;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QPushButton *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    TransactionOverviewWidget *listTransactions;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName("OverviewPage");
        OverviewPage->resize(798, 318);
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName("topLayout");
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName("labelAlerts");
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000; }"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);
        labelAlerts->setTextInteractionFlags(Qt::TextSelectableByMouse);

        topLayout->addWidget(labelAlerts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame = new QFrame(OverviewPage);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        QFont font;
        font.setBold(true);
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QPushButton(frame);
        labelWalletStatus->setObjectName("labelWalletStatus");
        labelWalletStatus->setEnabled(true);
        labelWalletStatus->setMaximumSize(QSize(45, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/warning"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon.addFile(QString::fromUtf8(":/icons/warning"), QSize(), QIcon::Mode::Disabled, QIcon::State::Off);
        labelWalletStatus->setIcon(icon);
        labelWalletStatus->setIconSize(QSize(24, 24));

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName("gridLayout");
        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName("labelUnconfirmed");
        labelUnconfirmed->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.00000000 BTC"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 1, 1, 1, 1);

        line = new QFrame(frame);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 2);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName("labelTotalText");

        gridLayout->addWidget(labelTotalText, 4, 0, 1, 1);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName("labelImmature");
        labelImmature->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.00000000 BTC"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName("labelImmatureText");

        gridLayout->addWidget(labelImmatureText, 2, 0, 1, 1);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName("labelTotal");
        labelTotal->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("21 000 000.00000000 BTC"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 4, 1, 1, 1);

        labelBalanceText = new QLabel(frame);
        labelBalanceText->setObjectName("labelBalanceText");

        gridLayout->addWidget(labelBalanceText, 0, 0, 1, 1);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName("labelBalance");
        labelBalance->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("21 000 000.00000000 BTC"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 0, 1, 1, 1);

        labelPendingText = new QLabel(frame);
        labelPendingText->setObjectName("labelPendingText");

        gridLayout->addWidget(labelPendingText, 1, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_2->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QPushButton(frame_2);
        labelTransactionsStatus->setObjectName("labelTransactionsStatus");
        labelTransactionsStatus->setEnabled(true);
        labelTransactionsStatus->setMaximumSize(QSize(45, 16777215));
        labelTransactionsStatus->setIcon(icon);
        labelTransactionsStatus->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new TransactionOverviewWidget(frame_2);
        listTransactions->setObjectName("listTransactions");
        listTransactions->setStyleSheet(QString::fromUtf8("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);
        listTransactions->setUniformItemSizes(true);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        topLayout->addLayout(horizontalLayout);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QCoreApplication::translate("OverviewPage", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("OverviewPage", "Balances", nullptr));
#if QT_CONFIG(tooltip)
        labelWalletStatus->setToolTip(QCoreApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Bitcoin network after a connection is established, but this process has not completed yet.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelWalletStatus->setText(QString());
#if QT_CONFIG(tooltip)
        labelUnconfirmed->setToolTip(QCoreApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", nullptr));
#endif // QT_CONFIG(tooltip)
        labelTotalText->setText(QCoreApplication::translate("OverviewPage", "Total:", nullptr));
#if QT_CONFIG(tooltip)
        labelImmature->setToolTip(QCoreApplication::translate("OverviewPage", "Mined balance that has not yet matured", nullptr));
#endif // QT_CONFIG(tooltip)
        labelImmatureText->setText(QCoreApplication::translate("OverviewPage", "Immature:", nullptr));
#if QT_CONFIG(tooltip)
        labelTotal->setToolTip(QCoreApplication::translate("OverviewPage", "Your current total balance", nullptr));
#endif // QT_CONFIG(tooltip)
        labelBalanceText->setText(QCoreApplication::translate("OverviewPage", "Available:", nullptr));
#if QT_CONFIG(tooltip)
        labelBalance->setToolTip(QCoreApplication::translate("OverviewPage", "Your current spendable balance", nullptr));
#endif // QT_CONFIG(tooltip)
        labelPendingText->setText(QCoreApplication::translate("OverviewPage", "Pending:", nullptr));
        label_4->setText(QCoreApplication::translate("OverviewPage", "Recent transactions", nullptr));
#if QT_CONFIG(tooltip)
        labelTransactionsStatus->setToolTip(QCoreApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Bitcoin network after a connection is established, but this process has not completed yet.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelTransactionsStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
