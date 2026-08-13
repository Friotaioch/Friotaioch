/********************************************************************************
** Form generated from reading UI file 'debugwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGWINDOW_H
#define UI_DEBUGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/trafficgraphwidget.h"

QT_BEGIN_NAMESPACE

class Ui_RPCConsole
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_alerts;
    QTabWidget *tabWidget;
    QWidget *tab_info;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *clientVersion;
    QLabel *labelClientUserAgent;
    QLabel *clientUserAgent;
    QLabel *label_12;
    QLabel *dataDir;
    QLabel *label_11;
    QLabel *blocksDir;
    QLabel *label_13;
    QLabel *startupTime;
    QLabel *labelNetwork;
    QLabel *label_8;
    QLabel *networkName;
    QLabel *label_7;
    QLabel *numberOfConnections;
    QLabel *label_14;
    QLabel *localAddresses;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *numberOfBlocks;
    QLabel *labelLastBlockTime;
    QLabel *lastBlockTime;
    QLabel *labelMempoolTitle;
    QLabel *labelNumberOfTransactions;
    QLabel *mempoolNumberTxs;
    QLabel *labelMemoryUsage;
    QLabel *mempoolSize;
    QVBoxLayout *verticalLayoutDebugButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelDebugLogfile;
    QPushButton *openDebugLogfileButton;
    QSpacerItem *verticalSpacer;
    QWidget *tab_console;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *WalletSelectorLabel;
    QComboBox *WalletSelector;
    QSpacerItem *horizontalSpacer;
    QToolButton *fontSmallerButton;
    QToolButton *fontBiggerButton;
    QToolButton *clearButton;
    PlainCopyTextEdit *messagesWidget;
    QHBoxLayout *horizontalLayoutPrompt;
    QPushButton *promptIcon;
    QLineEdit *lineEdit;
    QWidget *tab_nettraffic;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    TrafficGraphWidget *trafficGraph;
    QHBoxLayout *horizontalLayout_2;
    QSlider *sldGraphRange;
    QLabel *lblGraphRange;
    QPushButton *btnClearTrafficGraph;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QFrame *line;
    QLabel *label_16;
    QLabel *lblBytesIn;
    QHBoxLayout *horizontalLayout_5;
    QFrame *line_2;
    QLabel *label_17;
    QLabel *lblBytesOut;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_peers;
    QVBoxLayout *verticalLayout_6;
    QSplitter *splitter;
    QWidget *widget_1;
    QVBoxLayout *verticalLayout_7;
    QTableView *peerWidget;
    QLabel *banHeading;
    QTableView *banlistWidget;
    QWidget *peersTabRightPanel;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *peerHeading;
    QWidget *hidePeersDetail;
    QToolButton *hidePeersDetailButton;
    QScrollArea *scrollArea;
    QWidget *detailWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_30;
    QLabel *peerPermissions;
    QLabel *peerConnectionTypeLabel;
    QLabel *peerConnectionType;
    QLabel *peerTransportTypeLabel;
    QLabel *peerTransportType;
    QLabel *peerSessionIdLabel;
    QLabel *peerSessionId;
    QLabel *peerNetworkLabel;
    QLabel *peerNetwork;
    QLabel *label_21;
    QLabel *peerVersion;
    QLabel *label_28;
    QLabel *peerSubversion;
    QLabel *label_4;
    QLabel *peerServices;
    QLabel *peerRelayTxesLabel;
    QLabel *peerRelayTxes;
    QLabel *peerHighBandwidthLabel;
    QLabel *peerHighBandwidth;
    QLabel *label_27;
    QLabel *peerSyncHeight;
    QLabel *label_25;
    QLabel *peerCommonHeight;
    QLabel *label_22;
    QLabel *peerConnTime;
    QLabel *peerLastBlockLabel;
    QLabel *peerLastBlock;
    QLabel *peerLastTxLabel;
    QLabel *peerLastTx;
    QLabel *label_15;
    QLabel *peerLastSend;
    QLabel *label_19;
    QLabel *peerLastRecv;
    QLabel *label_18;
    QLabel *peerBytesSent;
    QLabel *label_20;
    QLabel *peerBytesRecv;
    QLabel *label_26;
    QLabel *peerPingTime;
    QLabel *peerPingWaitLabel;
    QLabel *peerPingWait;
    QLabel *peerMinPingLabel;
    QLabel *peerMinPing;
    QLabel *label_timeoffset;
    QLabel *timeoffset;
    QLabel *peerMappedASLabel;
    QLabel *peerMappedAS;
    QLabel *peerAddrRelayEnabledLabel;
    QLabel *peerAddrRelayEnabled;
    QLabel *peerAddrProcessedLabel;
    QLabel *peerAddrProcessed;
    QLabel *peerAddrRateLimitedLabel;
    QLabel *peerAddrRateLimited;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *RPCConsole)
    {
        if (RPCConsole->objectName().isEmpty())
            RPCConsole->setObjectName("RPCConsole");
        RPCConsole->resize(740, 430);
        verticalLayout_2 = new QVBoxLayout(RPCConsole);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_alerts = new QLabel(RPCConsole);
        label_alerts->setObjectName("label_alerts");
        label_alerts->setVisible(false);
        label_alerts->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000; }"));
        label_alerts->setWordWrap(true);
        label_alerts->setMargin(3);
        label_alerts->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_alerts);

        tabWidget = new QTabWidget(RPCConsole);
        tabWidget->setObjectName("tabWidget");
        tab_info = new QWidget();
        tab_info->setObjectName("tab_info");
        gridLayout = new QGridLayout(tab_info);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(12);
        label_9 = new QLabel(tab_info);
        label_9->setObjectName("label_9");
        QFont font;
        font.setBold(true);
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_6 = new QLabel(tab_info);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        clientVersion = new QLabel(tab_info);
        clientVersion->setObjectName("clientVersion");
        clientVersion->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        clientVersion->setTextFormat(Qt::PlainText);
        clientVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientVersion, 1, 1, 1, 2);

        labelClientUserAgent = new QLabel(tab_info);
        labelClientUserAgent->setObjectName("labelClientUserAgent");
        labelClientUserAgent->setIndent(10);

        gridLayout->addWidget(labelClientUserAgent, 2, 0, 1, 1);

        clientUserAgent = new QLabel(tab_info);
        clientUserAgent->setObjectName("clientUserAgent");
        clientUserAgent->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        clientUserAgent->setTextFormat(Qt::PlainText);
        clientUserAgent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientUserAgent, 2, 1, 1, 2);

        label_12 = new QLabel(tab_info);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        dataDir = new QLabel(tab_info);
        dataDir->setObjectName("dataDir");
        dataDir->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        dataDir->setTextFormat(Qt::PlainText);
        dataDir->setWordWrap(true);
        dataDir->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(dataDir, 3, 1, 1, 2);

        label_11 = new QLabel(tab_info);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 4, 0, 1, 1);

        blocksDir = new QLabel(tab_info);
        blocksDir->setObjectName("blocksDir");
        blocksDir->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        blocksDir->setTextFormat(Qt::PlainText);
        blocksDir->setWordWrap(true);
        blocksDir->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(blocksDir, 4, 1, 1, 2);

        label_13 = new QLabel(tab_info);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        startupTime = new QLabel(tab_info);
        startupTime->setObjectName("startupTime");
        startupTime->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        startupTime->setTextFormat(Qt::PlainText);
        startupTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(startupTime, 5, 1, 1, 2);

        labelNetwork = new QLabel(tab_info);
        labelNetwork->setObjectName("labelNetwork");
        labelNetwork->setFont(font);

        gridLayout->addWidget(labelNetwork, 6, 0, 1, 1);

        label_8 = new QLabel(tab_info);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        networkName = new QLabel(tab_info);
        networkName->setObjectName("networkName");
        networkName->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        networkName->setTextFormat(Qt::PlainText);
        networkName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(networkName, 7, 1, 1, 2);

        label_7 = new QLabel(tab_info);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        numberOfConnections = new QLabel(tab_info);
        numberOfConnections->setObjectName("numberOfConnections");
        numberOfConnections->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        numberOfConnections->setTextFormat(Qt::PlainText);
        numberOfConnections->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfConnections, 8, 1, 1, 2);

        label_14 = new QLabel(tab_info);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 9, 0, 1, 1);

        localAddresses = new QLabel(tab_info);
        localAddresses->setObjectName("localAddresses");
        localAddresses->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        localAddresses->setWordWrap(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(localAddresses->sizePolicy().hasHeightForWidth());
        localAddresses->setSizePolicy(sizePolicy);
        localAddresses->setText(QString::fromUtf8("N/A"));
        localAddresses->setTextFormat(Qt::PlainText);
        localAddresses->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(localAddresses, 9, 1, 1, 2);

        label_10 = new QLabel(tab_info);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 10, 0, 1, 1);

        label_3 = new QLabel(tab_info);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 11, 0, 1, 1);

        numberOfBlocks = new QLabel(tab_info);
        numberOfBlocks->setObjectName("numberOfBlocks");
        numberOfBlocks->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        numberOfBlocks->setTextFormat(Qt::PlainText);
        numberOfBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfBlocks, 11, 1, 1, 2);

        labelLastBlockTime = new QLabel(tab_info);
        labelLastBlockTime->setObjectName("labelLastBlockTime");

        gridLayout->addWidget(labelLastBlockTime, 12, 0, 1, 1);

        lastBlockTime = new QLabel(tab_info);
        lastBlockTime->setObjectName("lastBlockTime");
        lastBlockTime->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        lastBlockTime->setTextFormat(Qt::PlainText);
        lastBlockTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lastBlockTime, 12, 1, 1, 2);

        labelMempoolTitle = new QLabel(tab_info);
        labelMempoolTitle->setObjectName("labelMempoolTitle");
        labelMempoolTitle->setFont(font);

        gridLayout->addWidget(labelMempoolTitle, 13, 0, 1, 1);

        labelNumberOfTransactions = new QLabel(tab_info);
        labelNumberOfTransactions->setObjectName("labelNumberOfTransactions");

        gridLayout->addWidget(labelNumberOfTransactions, 14, 0, 1, 1);

        mempoolNumberTxs = new QLabel(tab_info);
        mempoolNumberTxs->setObjectName("mempoolNumberTxs");
        mempoolNumberTxs->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        mempoolNumberTxs->setTextFormat(Qt::PlainText);
        mempoolNumberTxs->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mempoolNumberTxs, 14, 1, 1, 1);

        labelMemoryUsage = new QLabel(tab_info);
        labelMemoryUsage->setObjectName("labelMemoryUsage");

        gridLayout->addWidget(labelMemoryUsage, 15, 0, 1, 1);

        mempoolSize = new QLabel(tab_info);
        mempoolSize->setObjectName("mempoolSize");
        mempoolSize->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        mempoolSize->setTextFormat(Qt::PlainText);
        mempoolSize->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mempoolSize, 15, 1, 1, 1);

        verticalLayoutDebugButton = new QVBoxLayout();
        verticalLayoutDebugButton->setSpacing(3);
        verticalLayoutDebugButton->setObjectName("verticalLayoutDebugButton");
        verticalSpacer_2 = new QSpacerItem(10, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutDebugButton->addItem(verticalSpacer_2);

        labelDebugLogfile = new QLabel(tab_info);
        labelDebugLogfile->setObjectName("labelDebugLogfile");

        verticalLayoutDebugButton->addWidget(labelDebugLogfile);

        openDebugLogfileButton = new QPushButton(tab_info);
        openDebugLogfileButton->setObjectName("openDebugLogfileButton");
        openDebugLogfileButton->setAutoDefault(false);

        verticalLayoutDebugButton->addWidget(openDebugLogfileButton);


        gridLayout->addLayout(verticalLayoutDebugButton, 13, 2, 3, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 16, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        tabWidget->addTab(tab_info, QString());
        tab_console = new QWidget();
        tab_console->setObjectName("tab_console");
        verticalLayout_3 = new QVBoxLayout(tab_console);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, -1, -1, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName("horizontalLayout");
        WalletSelectorLabel = new QLabel(tab_console);
        WalletSelectorLabel->setObjectName("WalletSelectorLabel");

        horizontalLayout->addWidget(WalletSelectorLabel);

        WalletSelector = new QComboBox(tab_console);
        WalletSelector->addItem(QString());
        WalletSelector->setObjectName("WalletSelector");
        WalletSelector->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(WalletSelector);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        fontSmallerButton = new QToolButton(tab_console);
        fontSmallerButton->setObjectName("fontSmallerButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/fontsmaller"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        fontSmallerButton->setIcon(icon);
        fontSmallerButton->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(fontSmallerButton);

        fontBiggerButton = new QToolButton(tab_console);
        fontBiggerButton->setObjectName("fontBiggerButton");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/fontbigger"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        fontBiggerButton->setIcon(icon1);
        fontBiggerButton->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(fontBiggerButton);

        clearButton = new QToolButton(tab_console);
        clearButton->setObjectName("clearButton");
        clearButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        clearButton->setIcon(icon2);
        clearButton->setIconSize(QSize(22, 22));
#if QT_CONFIG(shortcut)
        clearButton->setShortcut(QString::fromUtf8("Ctrl+L"));
#endif // QT_CONFIG(shortcut)

        horizontalLayout->addWidget(clearButton);


        verticalLayout_3->addLayout(horizontalLayout);

        messagesWidget = new PlainCopyTextEdit(tab_console);
        messagesWidget->setObjectName("messagesWidget");
        messagesWidget->setMinimumSize(QSize(0, 100));
        messagesWidget->setReadOnly(true);
        messagesWidget->setProperty("tabKeyNavigation", QVariant(false));
        messagesWidget->setProperty("columnCount", QVariant(2));

        verticalLayout_3->addWidget(messagesWidget);

        horizontalLayoutPrompt = new QHBoxLayout();
        horizontalLayoutPrompt->setSpacing(3);
        horizontalLayoutPrompt->setObjectName("horizontalLayoutPrompt");
        promptIcon = new QPushButton(tab_console);
        promptIcon->setObjectName("promptIcon");
        promptIcon->setEnabled(false);
        promptIcon->setMaximumSize(QSize(16, 24));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/prompticon"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon3.addFile(QString::fromUtf8(":/icons/prompticon"), QSize(), QIcon::Mode::Disabled, QIcon::State::Off);
        promptIcon->setIcon(icon3);
        promptIcon->setIconSize(QSize(14, 14));
        promptIcon->setAutoDefault(false);
        promptIcon->setFlat(true);

        horizontalLayoutPrompt->addWidget(promptIcon);

        lineEdit = new QLineEdit(tab_console);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);

        horizontalLayoutPrompt->addWidget(lineEdit);


        verticalLayout_3->addLayout(horizontalLayoutPrompt);

        tabWidget->addTab(tab_console, QString());
        tab_nettraffic = new QWidget();
        tab_nettraffic->setObjectName("tab_nettraffic");
        horizontalLayout_3 = new QHBoxLayout(tab_nettraffic);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        trafficGraph = new TrafficGraphWidget(tab_nettraffic);
        trafficGraph->setObjectName("trafficGraph");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(trafficGraph->sizePolicy().hasHeightForWidth());
        trafficGraph->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(trafficGraph);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        sldGraphRange = new QSlider(tab_nettraffic);
        sldGraphRange->setObjectName("sldGraphRange");
        sldGraphRange->setMinimum(1);
        sldGraphRange->setMaximum(288);
        sldGraphRange->setPageStep(12);
        sldGraphRange->setValue(6);
        sldGraphRange->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sldGraphRange);

        lblGraphRange = new QLabel(tab_nettraffic);
        lblGraphRange->setObjectName("lblGraphRange");
        lblGraphRange->setMinimumSize(QSize(100, 0));
        lblGraphRange->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblGraphRange);

        btnClearTrafficGraph = new QPushButton(tab_nettraffic);
        btnClearTrafficGraph->setObjectName("btnClearTrafficGraph");
        btnClearTrafficGraph->setAutoDefault(false);

        horizontalLayout_2->addWidget(btnClearTrafficGraph);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(tab_nettraffic);
        groupBox->setObjectName("groupBox");
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        line = new QFrame(groupBox);
        line->setObjectName("line");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setMinimumSize(QSize(10, 0));
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        line->setPalette(palette);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_4->addWidget(line);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");

        horizontalLayout_4->addWidget(label_16);

        lblBytesIn = new QLabel(groupBox);
        lblBytesIn->setObjectName("lblBytesIn");
        lblBytesIn->setMinimumSize(QSize(50, 0));
        lblBytesIn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(lblBytesIn);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        line_2 = new QFrame(groupBox);
        line_2->setObjectName("line_2");
        sizePolicy2.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy2);
        line_2->setMinimumSize(QSize(10, 0));
        QPalette palette1;
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        line_2->setPalette(palette1);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_5->addWidget(line_2);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName("label_17");

        horizontalLayout_5->addWidget(label_17);

        lblBytesOut = new QLabel(groupBox);
        lblBytesOut->setObjectName("lblBytesOut");
        lblBytesOut->setMinimumSize(QSize(50, 0));
        lblBytesOut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lblBytesOut);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 407, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);


        verticalLayout->addWidget(groupBox);


        horizontalLayout_3->addLayout(verticalLayout);

        tabWidget->addTab(tab_nettraffic, QString());
        tab_peers = new QWidget();
        tab_peers->setObjectName("tab_peers");
        verticalLayout_6 = new QVBoxLayout(tab_peers);
        verticalLayout_6->setObjectName("verticalLayout_6");
        splitter = new QSplitter(tab_peers);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        widget_1 = new QWidget(splitter);
        widget_1->setObjectName("widget_1");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_1->sizePolicy().hasHeightForWidth());
        widget_1->setSizePolicy(sizePolicy3);
        widget_1->setMinimumSize(QSize(400, 0));
        verticalLayout_7 = new QVBoxLayout(widget_1);
        verticalLayout_7->setObjectName("verticalLayout_7");
        peerWidget = new QTableView(widget_1);
        peerWidget->setObjectName("peerWidget");
        peerWidget->setTabKeyNavigation(false);
        peerWidget->setAlternatingRowColors(true);
        peerWidget->setTextElideMode(Qt::ElideMiddle);
        peerWidget->setSortingEnabled(true);
        peerWidget->setWordWrap(false);
        peerWidget->horizontalHeader()->setHighlightSections(false);

        verticalLayout_7->addWidget(peerWidget);

        banHeading = new QLabel(widget_1);
        banHeading->setObjectName("banHeading");
        sizePolicy.setHeightForWidth(banHeading->sizePolicy().hasHeightForWidth());
        banHeading->setSizePolicy(sizePolicy);
        banHeading->setMinimumSize(QSize(0, 32));
        banHeading->setMaximumSize(QSize(16777215, 32));
        QFont font1;
        font1.setPointSize(12);
        banHeading->setFont(font1);
        banHeading->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        banHeading->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        banHeading->setWordWrap(true);
        banHeading->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_7->addWidget(banHeading);

        banlistWidget = new QTableView(widget_1);
        banlistWidget->setObjectName("banlistWidget");
        banlistWidget->setTabKeyNavigation(false);
        banlistWidget->setAlternatingRowColors(true);
        banlistWidget->setSortingEnabled(true);
        banlistWidget->horizontalHeader()->setHighlightSections(false);

        verticalLayout_7->addWidget(banlistWidget);

        splitter->addWidget(widget_1);
        peersTabRightPanel = new QWidget(splitter);
        peersTabRightPanel->setObjectName("peersTabRightPanel");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(peersTabRightPanel->sizePolicy().hasHeightForWidth());
        peersTabRightPanel->setSizePolicy(sizePolicy4);
        peersTabRightPanel->setMinimumSize(QSize(300, 0));
        verticalLayout_8 = new QVBoxLayout(peersTabRightPanel);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(-1, 0, -1, 0);
        peerHeading = new QLabel(peersTabRightPanel);
        peerHeading->setObjectName("peerHeading");
        sizePolicy.setHeightForWidth(peerHeading->sizePolicy().hasHeightForWidth());
        peerHeading->setSizePolicy(sizePolicy);
        peerHeading->setMinimumSize(QSize(0, 32));
        QFont font2;
        font2.setPointSize(10);
        peerHeading->setFont(font2);
        peerHeading->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerHeading->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        peerHeading->setWordWrap(true);
        peerHeading->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_8->addWidget(peerHeading);

        hidePeersDetail = new QWidget(peersTabRightPanel);
        hidePeersDetail->setObjectName("hidePeersDetail");
        hidePeersDetail->setEnabled(true);
        hidePeersDetail->setMinimumSize(QSize(32, 32));
        hidePeersDetail->setMaximumSize(QSize(32, 32));
        hidePeersDetailButton = new QToolButton(hidePeersDetail);
        hidePeersDetailButton->setObjectName("hidePeersDetailButton");
        hidePeersDetailButton->setGeometry(QRect(0, 0, 32, 32));
        hidePeersDetailButton->setMinimumSize(QSize(32, 32));
        hidePeersDetailButton->setBaseSize(QSize(32, 32));
        hidePeersDetailButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        hidePeersDetailButton->setIcon(icon4);
        hidePeersDetailButton->setIconSize(QSize(22, 22));

        horizontalLayout_8->addWidget(hidePeersDetail);


        verticalLayout_8->addLayout(horizontalLayout_8);

        scrollArea = new QScrollArea(peersTabRightPanel);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        detailWidget = new QWidget();
        detailWidget->setObjectName("detailWidget");
        detailWidget->setGeometry(QRect(0, 0, 300, 426));
        gridLayout_2 = new QGridLayout(detailWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        label_30 = new QLabel(detailWidget);
        label_30->setObjectName("label_30");

        gridLayout_2->addWidget(label_30, 0, 0, 1, 1);

        peerPermissions = new QLabel(detailWidget);
        peerPermissions->setObjectName("peerPermissions");
        peerPermissions->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerPermissions->setTextFormat(Qt::PlainText);
        peerPermissions->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerPermissions, 0, 1, 1, 1);

        peerConnectionTypeLabel = new QLabel(detailWidget);
        peerConnectionTypeLabel->setObjectName("peerConnectionTypeLabel");

        gridLayout_2->addWidget(peerConnectionTypeLabel, 1, 0, 1, 1);

        peerConnectionType = new QLabel(detailWidget);
        peerConnectionType->setObjectName("peerConnectionType");
        peerConnectionType->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerConnectionType->setTextFormat(Qt::PlainText);
        peerConnectionType->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerConnectionType, 1, 1, 1, 1);

        peerTransportTypeLabel = new QLabel(detailWidget);
        peerTransportTypeLabel->setObjectName("peerTransportTypeLabel");

        gridLayout_2->addWidget(peerTransportTypeLabel, 2, 0, 1, 1);

        peerTransportType = new QLabel(detailWidget);
        peerTransportType->setObjectName("peerTransportType");
        peerTransportType->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerTransportType->setTextFormat(Qt::PlainText);
        peerTransportType->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerTransportType, 2, 1, 1, 1);

        peerSessionIdLabel = new QLabel(detailWidget);
        peerSessionIdLabel->setObjectName("peerSessionIdLabel");

        gridLayout_2->addWidget(peerSessionIdLabel, 3, 0, 1, 1);

        peerSessionId = new QLabel(detailWidget);
        peerSessionId->setObjectName("peerSessionId");
        peerSessionId->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerSessionId->setTextFormat(Qt::PlainText);
        peerSessionId->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerSessionId, 3, 1, 1, 1);

        peerNetworkLabel = new QLabel(detailWidget);
        peerNetworkLabel->setObjectName("peerNetworkLabel");

        gridLayout_2->addWidget(peerNetworkLabel, 4, 0, 1, 1);

        peerNetwork = new QLabel(detailWidget);
        peerNetwork->setObjectName("peerNetwork");
        peerNetwork->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerNetwork->setTextFormat(Qt::PlainText);
        peerNetwork->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerNetwork, 4, 1, 1, 1);

        label_21 = new QLabel(detailWidget);
        label_21->setObjectName("label_21");

        gridLayout_2->addWidget(label_21, 5, 0, 1, 1);

        peerVersion = new QLabel(detailWidget);
        peerVersion->setObjectName("peerVersion");
        peerVersion->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerVersion->setTextFormat(Qt::PlainText);
        peerVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerVersion, 5, 1, 1, 1);

        label_28 = new QLabel(detailWidget);
        label_28->setObjectName("label_28");

        gridLayout_2->addWidget(label_28, 6, 0, 1, 1);

        peerSubversion = new QLabel(detailWidget);
        peerSubversion->setObjectName("peerSubversion");
        peerSubversion->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerSubversion->setTextFormat(Qt::PlainText);
        peerSubversion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerSubversion, 6, 1, 1, 1);

        label_4 = new QLabel(detailWidget);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 7, 0, 1, 1);

        peerServices = new QLabel(detailWidget);
        peerServices->setObjectName("peerServices");
        peerServices->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerServices->setTextFormat(Qt::PlainText);
        peerServices->setWordWrap(true);
        peerServices->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerServices, 7, 1, 1, 1);

        peerRelayTxesLabel = new QLabel(detailWidget);
        peerRelayTxesLabel->setObjectName("peerRelayTxesLabel");

        gridLayout_2->addWidget(peerRelayTxesLabel, 8, 0, 1, 1);

        peerRelayTxes = new QLabel(detailWidget);
        peerRelayTxes->setObjectName("peerRelayTxes");
        peerRelayTxes->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerRelayTxes->setTextFormat(Qt::PlainText);
        peerRelayTxes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerRelayTxes, 8, 1, 1, 1);

        peerHighBandwidthLabel = new QLabel(detailWidget);
        peerHighBandwidthLabel->setObjectName("peerHighBandwidthLabel");

        gridLayout_2->addWidget(peerHighBandwidthLabel, 9, 0, 1, 1);

        peerHighBandwidth = new QLabel(detailWidget);
        peerHighBandwidth->setObjectName("peerHighBandwidth");
        peerHighBandwidth->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerHighBandwidth->setTextFormat(Qt::PlainText);
        peerHighBandwidth->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerHighBandwidth, 9, 1, 1, 1);

        label_27 = new QLabel(detailWidget);
        label_27->setObjectName("label_27");

        gridLayout_2->addWidget(label_27, 10, 0, 1, 1);

        peerSyncHeight = new QLabel(detailWidget);
        peerSyncHeight->setObjectName("peerSyncHeight");
        peerSyncHeight->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerSyncHeight->setTextFormat(Qt::PlainText);
        peerSyncHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerSyncHeight, 10, 1, 1, 1);

        label_25 = new QLabel(detailWidget);
        label_25->setObjectName("label_25");

        gridLayout_2->addWidget(label_25, 11, 0, 1, 1);

        peerCommonHeight = new QLabel(detailWidget);
        peerCommonHeight->setObjectName("peerCommonHeight");
        peerCommonHeight->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerCommonHeight->setTextFormat(Qt::PlainText);
        peerCommonHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerCommonHeight, 11, 1, 1, 1);

        label_22 = new QLabel(detailWidget);
        label_22->setObjectName("label_22");

        gridLayout_2->addWidget(label_22, 12, 0, 1, 1);

        peerConnTime = new QLabel(detailWidget);
        peerConnTime->setObjectName("peerConnTime");
        peerConnTime->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerConnTime->setTextFormat(Qt::PlainText);
        peerConnTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerConnTime, 12, 1, 1, 1);

        peerLastBlockLabel = new QLabel(detailWidget);
        peerLastBlockLabel->setObjectName("peerLastBlockLabel");

        gridLayout_2->addWidget(peerLastBlockLabel, 13, 0, 1, 1);

        peerLastBlock = new QLabel(detailWidget);
        peerLastBlock->setObjectName("peerLastBlock");
        peerLastBlock->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerLastBlock->setTextFormat(Qt::PlainText);
        peerLastBlock->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerLastBlock, 13, 1, 1, 1);

        peerLastTxLabel = new QLabel(detailWidget);
        peerLastTxLabel->setObjectName("peerLastTxLabel");

        gridLayout_2->addWidget(peerLastTxLabel, 14, 0, 1, 1);

        peerLastTx = new QLabel(detailWidget);
        peerLastTx->setObjectName("peerLastTx");
        peerLastTx->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerLastTx->setTextFormat(Qt::PlainText);
        peerLastTx->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerLastTx, 14, 1, 1, 1);

        label_15 = new QLabel(detailWidget);
        label_15->setObjectName("label_15");

        gridLayout_2->addWidget(label_15, 15, 0, 1, 1);

        peerLastSend = new QLabel(detailWidget);
        peerLastSend->setObjectName("peerLastSend");
        peerLastSend->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerLastSend->setTextFormat(Qt::PlainText);
        peerLastSend->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerLastSend, 15, 1, 1, 1);

        label_19 = new QLabel(detailWidget);
        label_19->setObjectName("label_19");

        gridLayout_2->addWidget(label_19, 16, 0, 1, 1);

        peerLastRecv = new QLabel(detailWidget);
        peerLastRecv->setObjectName("peerLastRecv");
        peerLastRecv->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerLastRecv->setTextFormat(Qt::PlainText);
        peerLastRecv->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerLastRecv, 16, 1, 1, 1);

        label_18 = new QLabel(detailWidget);
        label_18->setObjectName("label_18");

        gridLayout_2->addWidget(label_18, 17, 0, 1, 1);

        peerBytesSent = new QLabel(detailWidget);
        peerBytesSent->setObjectName("peerBytesSent");
        peerBytesSent->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerBytesSent->setTextFormat(Qt::PlainText);
        peerBytesSent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerBytesSent, 17, 1, 1, 1);

        label_20 = new QLabel(detailWidget);
        label_20->setObjectName("label_20");

        gridLayout_2->addWidget(label_20, 18, 0, 1, 1);

        peerBytesRecv = new QLabel(detailWidget);
        peerBytesRecv->setObjectName("peerBytesRecv");
        peerBytesRecv->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerBytesRecv->setTextFormat(Qt::PlainText);
        peerBytesRecv->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerBytesRecv, 18, 1, 1, 1);

        label_26 = new QLabel(detailWidget);
        label_26->setObjectName("label_26");

        gridLayout_2->addWidget(label_26, 19, 0, 1, 1);

        peerPingTime = new QLabel(detailWidget);
        peerPingTime->setObjectName("peerPingTime");
        peerPingTime->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerPingTime->setTextFormat(Qt::PlainText);
        peerPingTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerPingTime, 19, 1, 1, 1);

        peerPingWaitLabel = new QLabel(detailWidget);
        peerPingWaitLabel->setObjectName("peerPingWaitLabel");

        gridLayout_2->addWidget(peerPingWaitLabel, 20, 0, 1, 1);

        peerPingWait = new QLabel(detailWidget);
        peerPingWait->setObjectName("peerPingWait");
        peerPingWait->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerPingWait->setTextFormat(Qt::PlainText);
        peerPingWait->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerPingWait, 20, 1, 1, 1);

        peerMinPingLabel = new QLabel(detailWidget);
        peerMinPingLabel->setObjectName("peerMinPingLabel");

        gridLayout_2->addWidget(peerMinPingLabel, 21, 0, 1, 1);

        peerMinPing = new QLabel(detailWidget);
        peerMinPing->setObjectName("peerMinPing");
        peerMinPing->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerMinPing->setTextFormat(Qt::PlainText);
        peerMinPing->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerMinPing, 21, 1, 1, 1);

        label_timeoffset = new QLabel(detailWidget);
        label_timeoffset->setObjectName("label_timeoffset");

        gridLayout_2->addWidget(label_timeoffset, 22, 0, 1, 1);

        timeoffset = new QLabel(detailWidget);
        timeoffset->setObjectName("timeoffset");
        timeoffset->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        timeoffset->setTextFormat(Qt::PlainText);
        timeoffset->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(timeoffset, 22, 1, 1, 1);

        peerMappedASLabel = new QLabel(detailWidget);
        peerMappedASLabel->setObjectName("peerMappedASLabel");

        gridLayout_2->addWidget(peerMappedASLabel, 23, 0, 1, 1);

        peerMappedAS = new QLabel(detailWidget);
        peerMappedAS->setObjectName("peerMappedAS");
        peerMappedAS->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerMappedAS->setTextFormat(Qt::PlainText);
        peerMappedAS->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerMappedAS, 23, 1, 1, 1);

        peerAddrRelayEnabledLabel = new QLabel(detailWidget);
        peerAddrRelayEnabledLabel->setObjectName("peerAddrRelayEnabledLabel");

        gridLayout_2->addWidget(peerAddrRelayEnabledLabel, 24, 0, 1, 1);

        peerAddrRelayEnabled = new QLabel(detailWidget);
        peerAddrRelayEnabled->setObjectName("peerAddrRelayEnabled");
        peerAddrRelayEnabled->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerAddrRelayEnabled->setTextFormat(Qt::PlainText);
        peerAddrRelayEnabled->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerAddrRelayEnabled, 24, 1, 1, 1);

        peerAddrProcessedLabel = new QLabel(detailWidget);
        peerAddrProcessedLabel->setObjectName("peerAddrProcessedLabel");

        gridLayout_2->addWidget(peerAddrProcessedLabel, 25, 0, 1, 1);

        peerAddrProcessed = new QLabel(detailWidget);
        peerAddrProcessed->setObjectName("peerAddrProcessed");
        peerAddrProcessed->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerAddrProcessed->setTextFormat(Qt::PlainText);
        peerAddrProcessed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerAddrProcessed, 25, 1, 1, 1);

        peerAddrRateLimitedLabel = new QLabel(detailWidget);
        peerAddrRateLimitedLabel->setObjectName("peerAddrRateLimitedLabel");

        gridLayout_2->addWidget(peerAddrRateLimitedLabel, 26, 0, 1, 1);

        peerAddrRateLimited = new QLabel(detailWidget);
        peerAddrRateLimited->setObjectName("peerAddrRateLimited");
        peerAddrRateLimited->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        peerAddrRateLimited->setTextFormat(Qt::PlainText);
        peerAddrRateLimited->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerAddrRateLimited, 26, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 27, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);
        scrollArea->setWidget(detailWidget);

        verticalLayout_8->addWidget(scrollArea);

        splitter->addWidget(peersTabRightPanel);

        verticalLayout_6->addWidget(splitter);

        tabWidget->addTab(tab_peers, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(RPCConsole);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RPCConsole);
    } // setupUi

    void retranslateUi(QWidget *RPCConsole)
    {
        RPCConsole->setWindowTitle(QCoreApplication::translate("RPCConsole", "Node window", nullptr));
        label_9->setText(QCoreApplication::translate("RPCConsole", "General", nullptr));
        label_6->setText(QCoreApplication::translate("RPCConsole", "Client version", nullptr));
        clientVersion->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        labelClientUserAgent->setText(QCoreApplication::translate("RPCConsole", "User Agent", nullptr));
        clientUserAgent->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_12->setText(QCoreApplication::translate("RPCConsole", "Datadir", nullptr));
#if QT_CONFIG(tooltip)
        dataDir->setToolTip(QCoreApplication::translate("RPCConsole", "To specify a non-default location of the data directory use the '%1' option.", nullptr));
#endif // QT_CONFIG(tooltip)
        dataDir->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_11->setText(QCoreApplication::translate("RPCConsole", "Blocksdir", nullptr));
#if QT_CONFIG(tooltip)
        blocksDir->setToolTip(QCoreApplication::translate("RPCConsole", "To specify a non-default location of the blocks directory use the '%1' option.", nullptr));
#endif // QT_CONFIG(tooltip)
        blocksDir->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_13->setText(QCoreApplication::translate("RPCConsole", "Startup time", nullptr));
        startupTime->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        labelNetwork->setText(QCoreApplication::translate("RPCConsole", "Network", nullptr));
        label_8->setText(QCoreApplication::translate("RPCConsole", "Name", nullptr));
        networkName->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_7->setText(QCoreApplication::translate("RPCConsole", "Number of connections", nullptr));
        numberOfConnections->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_14->setText(QCoreApplication::translate("RPCConsole", "Local Addresses", nullptr));
#if QT_CONFIG(tooltip)
        localAddresses->setToolTip(QCoreApplication::translate("RPCConsole", "Network addresses that your Bitcoin node is currently using to communicate with other nodes.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("RPCConsole", "Block chain", nullptr));
        label_3->setText(QCoreApplication::translate("RPCConsole", "Current block height", nullptr));
        numberOfBlocks->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        labelLastBlockTime->setText(QCoreApplication::translate("RPCConsole", "Last block time", nullptr));
        lastBlockTime->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        labelMempoolTitle->setText(QCoreApplication::translate("RPCConsole", "Memory Pool", nullptr));
        labelNumberOfTransactions->setText(QCoreApplication::translate("RPCConsole", "Current number of transactions", nullptr));
        mempoolNumberTxs->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        labelMemoryUsage->setText(QCoreApplication::translate("RPCConsole", "Memory usage", nullptr));
        mempoolSize->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        labelDebugLogfile->setText(QCoreApplication::translate("RPCConsole", "Debug log file", nullptr));
#if QT_CONFIG(tooltip)
        openDebugLogfileButton->setToolTip(QCoreApplication::translate("RPCConsole", "Open the %1 debug log file from the current data directory. This can take a few seconds for large log files.", nullptr));
#endif // QT_CONFIG(tooltip)
        openDebugLogfileButton->setText(QCoreApplication::translate("RPCConsole", "&Open", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_info), QCoreApplication::translate("RPCConsole", "&Information", nullptr));
        WalletSelectorLabel->setText(QCoreApplication::translate("RPCConsole", "Wallet: ", nullptr));
        WalletSelector->setItemText(0, QCoreApplication::translate("RPCConsole", "(none)", nullptr));

#if QT_CONFIG(tooltip)
        fontSmallerButton->setToolTip(QCoreApplication::translate("RPCConsole", "Decrease font size", nullptr));
#endif // QT_CONFIG(tooltip)
        fontSmallerButton->setText(QString());
#if QT_CONFIG(tooltip)
        fontBiggerButton->setToolTip(QCoreApplication::translate("RPCConsole", "Increase font size", nullptr));
#endif // QT_CONFIG(tooltip)
        fontBiggerButton->setText(QString());
#if QT_CONFIG(tooltip)
        clearButton->setToolTip(QCoreApplication::translate("RPCConsole", "Clear console", nullptr));
#endif // QT_CONFIG(tooltip)
        clearButton->setText(QString());
        promptIcon->setText(QString());
        lineEdit->setPlaceholderText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_console), QCoreApplication::translate("RPCConsole", "&Console", nullptr));
        btnClearTrafficGraph->setText(QCoreApplication::translate("RPCConsole", "&Reset", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RPCConsole", "Totals", nullptr));
        label_16->setText(QCoreApplication::translate("RPCConsole", "Received", nullptr));
        label_17->setText(QCoreApplication::translate("RPCConsole", "Sent", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_nettraffic), QCoreApplication::translate("RPCConsole", "&Network Traffic", nullptr));
        banHeading->setText(QCoreApplication::translate("RPCConsole", "Banned peers", nullptr));
        peerHeading->setText(QCoreApplication::translate("RPCConsole", "Select a peer to view detailed information.", nullptr));
#if QT_CONFIG(tooltip)
        hidePeersDetailButton->setToolTip(QCoreApplication::translate("RPCConsole", "Hide Peers Detail", nullptr));
#endif // QT_CONFIG(tooltip)
        hidePeersDetailButton->setText(QString());
#if QT_CONFIG(shortcut)
        hidePeersDetailButton->setShortcut(QCoreApplication::translate("RPCConsole", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        label_30->setText(QCoreApplication::translate("RPCConsole", "Permissions", nullptr));
        peerPermissions->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerConnectionTypeLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The direction and type of peer connection: %1", nullptr));
#endif // QT_CONFIG(tooltip)
        peerConnectionTypeLabel->setText(QCoreApplication::translate("RPCConsole", "Direction/Type", nullptr));
        peerConnectionType->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerTransportTypeLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The transport layer version: %1", nullptr));
#endif // QT_CONFIG(tooltip)
        peerTransportTypeLabel->setText(QCoreApplication::translate("RPCConsole", "Transport", nullptr));
        peerTransportType->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerSessionIdLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The BIP324 session ID string in hex.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerSessionIdLabel->setText(QCoreApplication::translate("RPCConsole", "Session ID", nullptr));
        peerSessionId->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerNetworkLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The network protocol this peer is connected through: IPv4, IPv6, Onion, I2P, or CJDNS.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerNetworkLabel->setText(QCoreApplication::translate("RPCConsole", "Network", nullptr));
        peerNetwork->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_21->setText(QCoreApplication::translate("RPCConsole", "Version", nullptr));
        peerVersion->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_28->setText(QCoreApplication::translate("RPCConsole", "User Agent", nullptr));
        peerSubversion->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_4->setText(QCoreApplication::translate("RPCConsole", "Services", nullptr));
        peerServices->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerRelayTxesLabel->setToolTip(QCoreApplication::translate("RPCConsole", "Whether we relay transactions to this peer.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerRelayTxesLabel->setText(QCoreApplication::translate("RPCConsole", "Transaction Relay", nullptr));
        peerRelayTxes->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerHighBandwidthLabel->setToolTip(QCoreApplication::translate("RPCConsole", "High bandwidth BIP152 compact block relay: %1", nullptr));
#endif // QT_CONFIG(tooltip)
        peerHighBandwidthLabel->setText(QCoreApplication::translate("RPCConsole", "High Bandwidth", nullptr));
        peerHighBandwidth->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_27->setText(QCoreApplication::translate("RPCConsole", "Synced Headers", nullptr));
        peerSyncHeight->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_25->setText(QCoreApplication::translate("RPCConsole", "Synced Blocks", nullptr));
        peerCommonHeight->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_22->setText(QCoreApplication::translate("RPCConsole", "Connection Time", nullptr));
        peerConnTime->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerLastBlockLabel->setToolTip(QCoreApplication::translate("RPCConsole", "Elapsed time since a novel block passing initial validity checks was received from this peer.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerLastBlockLabel->setText(QCoreApplication::translate("RPCConsole", "Last Block", nullptr));
        peerLastBlock->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerLastTxLabel->setToolTip(QCoreApplication::translate("RPCConsole", "Elapsed time since a novel transaction accepted into our mempool was received from this peer.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerLastTxLabel->setText(QCoreApplication::translate("RPCConsole", "Last Transaction", nullptr));
        peerLastTx->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_15->setText(QCoreApplication::translate("RPCConsole", "Last Send", nullptr));
        peerLastSend->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_19->setText(QCoreApplication::translate("RPCConsole", "Last Receive", nullptr));
        peerLastRecv->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_18->setText(QCoreApplication::translate("RPCConsole", "Sent", nullptr));
        peerBytesSent->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_20->setText(QCoreApplication::translate("RPCConsole", "Received", nullptr));
        peerBytesRecv->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_26->setText(QCoreApplication::translate("RPCConsole", "Ping Time", nullptr));
        peerPingTime->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerPingWaitLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The duration of a currently outstanding ping.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerPingWaitLabel->setText(QCoreApplication::translate("RPCConsole", "Ping Wait", nullptr));
        peerPingWait->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        peerMinPingLabel->setText(QCoreApplication::translate("RPCConsole", "Min Ping", nullptr));
        peerMinPing->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_timeoffset->setText(QCoreApplication::translate("RPCConsole", "Time Offset", nullptr));
        timeoffset->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerMappedASLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The mapped Autonomous System used for diversifying peer selection.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerMappedASLabel->setText(QCoreApplication::translate("RPCConsole", "Mapped AS", nullptr));
        peerMappedAS->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerAddrRelayEnabledLabel->setToolTip(QCoreApplication::translate("RPCConsole", "Whether we relay addresses to this peer.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerAddrRelayEnabledLabel->setText(QCoreApplication::translate("RPCConsole", "Address Relay", nullptr));
        peerAddrRelayEnabled->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerAddrProcessedLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The total number of addresses received from this peer that were processed (excludes addresses that were dropped due to rate-limiting).", nullptr));
#endif // QT_CONFIG(tooltip)
        peerAddrProcessedLabel->setText(QCoreApplication::translate("RPCConsole", "Addresses Processed", nullptr));
        peerAddrProcessed->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerAddrRateLimitedLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The total number of addresses received from this peer that were dropped (not processed) due to rate-limiting.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerAddrRateLimitedLabel->setText(QCoreApplication::translate("RPCConsole", "Addresses Rate-Limited", nullptr));
        peerAddrRateLimited->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_peers), QCoreApplication::translate("RPCConsole", "&Peers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RPCConsole: public Ui_RPCConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGWINDOW_H
