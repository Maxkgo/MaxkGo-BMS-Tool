/********************************************************************************
** Form generated from reading UI file 'pageconnection.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGECONNECTION_H
#define UI_PAGECONNECTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageConnection
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabSerial;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayoutUSBSerial;
    QLabel *labelSerial;
    QComboBox *serialPortBox;
    QSpinBox *serialBaudBox;
    QPushButton *serialRefreshButton;
    QPushButton *serialDisconnectButton;
    QPushButton *serialConnectButton;
    QSpacerItem *verticalSpacerSerial;
    QWidget *tabCANConverter;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayoutUSBCAN;
    QLabel *CANSerialLabel;
    QComboBox *CANSerialPortBox;
    QPushButton *CANSerialRefreshButton;
    QPushButton *CANSerialDisconnectButton;
    QPushButton *CANSerialConnectButton;
    QTableView *tableView;
    QHBoxLayout *horizontalLayoutUSBCANNode;
    QPushButton *CANNodeRefreshButton;
    QPushButton *CANNodeConnectButton;
    QPushButton *CANNodeDisconnectButton;
    QWidget *tabTCP;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayoutTCP;
    QLabel *labelTCP;
    QLineEdit *tcpServerEdit;
    QSpinBox *tcpPortBox;
    QPushButton *tcpDisconnectButton;
    QPushButton *tcpConnectButton;
    QSpacerItem *verticalSpacerTCP;
    QWidget *tabBlueTooth;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayoutBLE;
    QLabel *label_3;
    QComboBox *bleDevBox;
    QPushButton *bleScanButton;
    QPushButton *bleDisconnectButton;
    QPushButton *bleConnectButton;
    QSpacerItem *verticalSpacerBLE;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *canFwdBox;
    QPushButton *helpButton;
    QPushButton *canFwdButton;
    QPushButton *autoConnectButton;
    QLabel *statusLabel;

    void setupUi(QWidget *PageConnection)
    {
        if (PageConnection->objectName().isEmpty())
            PageConnection->setObjectName(QString::fromUtf8("PageConnection"));
        PageConnection->resize(700, 500);
        verticalLayout = new QVBoxLayout(PageConnection);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(PageConnection);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabSerial = new QWidget();
        tabSerial->setObjectName(QString::fromUtf8("tabSerial"));
        verticalLayout_2 = new QVBoxLayout(tabSerial);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayoutUSBSerial = new QHBoxLayout();
        horizontalLayoutUSBSerial->setObjectName(QString::fromUtf8("horizontalLayoutUSBSerial"));
        labelSerial = new QLabel(tabSerial);
        labelSerial->setObjectName(QString::fromUtf8("labelSerial"));

        horizontalLayoutUSBSerial->addWidget(labelSerial);

        serialPortBox = new QComboBox(tabSerial);
        serialPortBox->setObjectName(QString::fromUtf8("serialPortBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serialPortBox->sizePolicy().hasHeightForWidth());
        serialPortBox->setSizePolicy(sizePolicy);

        horizontalLayoutUSBSerial->addWidget(serialPortBox);

        serialBaudBox = new QSpinBox(tabSerial);
        serialBaudBox->setObjectName(QString::fromUtf8("serialBaudBox"));
        serialBaudBox->setMaximum(3000000);
        serialBaudBox->setValue(115200);

        horizontalLayoutUSBSerial->addWidget(serialBaudBox);

        serialRefreshButton = new QPushButton(tabSerial);
        serialRefreshButton->setObjectName(QString::fromUtf8("serialRefreshButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(serialRefreshButton->sizePolicy().hasHeightForWidth());
        serialRefreshButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/Refresh-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        serialRefreshButton->setIcon(icon);

        horizontalLayoutUSBSerial->addWidget(serialRefreshButton);

        serialDisconnectButton = new QPushButton(tabSerial);
        serialDisconnectButton->setObjectName(QString::fromUtf8("serialDisconnectButton"));
        sizePolicy1.setHeightForWidth(serialDisconnectButton->sizePolicy().hasHeightForWidth());
        serialDisconnectButton->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/icons/Disconnected-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        serialDisconnectButton->setIcon(icon1);

        horizontalLayoutUSBSerial->addWidget(serialDisconnectButton);

        serialConnectButton = new QPushButton(tabSerial);
        serialConnectButton->setObjectName(QString::fromUtf8("serialConnectButton"));
        sizePolicy1.setHeightForWidth(serialConnectButton->sizePolicy().hasHeightForWidth());
        serialConnectButton->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/icons/Connected-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        serialConnectButton->setIcon(icon2);

        horizontalLayoutUSBSerial->addWidget(serialConnectButton);


        verticalLayout_2->addLayout(horizontalLayoutUSBSerial);

        verticalSpacerSerial = new QSpacerItem(20, 322, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacerSerial);

        tabWidget->addTab(tabSerial, QString());
        tabCANConverter = new QWidget();
        tabCANConverter->setObjectName(QString::fromUtf8("tabCANConverter"));
        verticalLayout_5 = new QVBoxLayout(tabCANConverter);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayoutUSBCAN = new QHBoxLayout();
        horizontalLayoutUSBCAN->setObjectName(QString::fromUtf8("horizontalLayoutUSBCAN"));
        CANSerialLabel = new QLabel(tabCANConverter);
        CANSerialLabel->setObjectName(QString::fromUtf8("CANSerialLabel"));

        horizontalLayoutUSBCAN->addWidget(CANSerialLabel);

        CANSerialPortBox = new QComboBox(tabCANConverter);
        CANSerialPortBox->setObjectName(QString::fromUtf8("CANSerialPortBox"));
        sizePolicy.setHeightForWidth(CANSerialPortBox->sizePolicy().hasHeightForWidth());
        CANSerialPortBox->setSizePolicy(sizePolicy);

        horizontalLayoutUSBCAN->addWidget(CANSerialPortBox);

        CANSerialRefreshButton = new QPushButton(tabCANConverter);
        CANSerialRefreshButton->setObjectName(QString::fromUtf8("CANSerialRefreshButton"));
        sizePolicy1.setHeightForWidth(CANSerialRefreshButton->sizePolicy().hasHeightForWidth());
        CANSerialRefreshButton->setSizePolicy(sizePolicy1);
        CANSerialRefreshButton->setIcon(icon);

        horizontalLayoutUSBCAN->addWidget(CANSerialRefreshButton);

        CANSerialDisconnectButton = new QPushButton(tabCANConverter);
        CANSerialDisconnectButton->setObjectName(QString::fromUtf8("CANSerialDisconnectButton"));
        sizePolicy1.setHeightForWidth(CANSerialDisconnectButton->sizePolicy().hasHeightForWidth());
        CANSerialDisconnectButton->setSizePolicy(sizePolicy1);
        CANSerialDisconnectButton->setIcon(icon1);

        horizontalLayoutUSBCAN->addWidget(CANSerialDisconnectButton);

        CANSerialConnectButton = new QPushButton(tabCANConverter);
        CANSerialConnectButton->setObjectName(QString::fromUtf8("CANSerialConnectButton"));
        sizePolicy1.setHeightForWidth(CANSerialConnectButton->sizePolicy().hasHeightForWidth());
        CANSerialConnectButton->setSizePolicy(sizePolicy1);
        CANSerialConnectButton->setIcon(icon2);

        horizontalLayoutUSBCAN->addWidget(CANSerialConnectButton);


        verticalLayout_5->addLayout(horizontalLayoutUSBCAN);

        tableView = new QTableView(tabCANConverter);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_5->addWidget(tableView);

        horizontalLayoutUSBCANNode = new QHBoxLayout();
        horizontalLayoutUSBCANNode->setObjectName(QString::fromUtf8("horizontalLayoutUSBCANNode"));
        CANNodeRefreshButton = new QPushButton(tabCANConverter);
        CANNodeRefreshButton->setObjectName(QString::fromUtf8("CANNodeRefreshButton"));
        sizePolicy.setHeightForWidth(CANNodeRefreshButton->sizePolicy().hasHeightForWidth());
        CANNodeRefreshButton->setSizePolicy(sizePolicy);
        CANNodeRefreshButton->setIcon(icon);

        horizontalLayoutUSBCANNode->addWidget(CANNodeRefreshButton);

        CANNodeConnectButton = new QPushButton(tabCANConverter);
        CANNodeConnectButton->setObjectName(QString::fromUtf8("CANNodeConnectButton"));
        sizePolicy.setHeightForWidth(CANNodeConnectButton->sizePolicy().hasHeightForWidth());
        CANNodeConnectButton->setSizePolicy(sizePolicy);
        CANNodeConnectButton->setIcon(icon2);

        horizontalLayoutUSBCANNode->addWidget(CANNodeConnectButton);

        CANNodeDisconnectButton = new QPushButton(tabCANConverter);
        CANNodeDisconnectButton->setObjectName(QString::fromUtf8("CANNodeDisconnectButton"));
        sizePolicy.setHeightForWidth(CANNodeDisconnectButton->sizePolicy().hasHeightForWidth());
        CANNodeDisconnectButton->setSizePolicy(sizePolicy);
        CANNodeDisconnectButton->setIcon(icon1);

        horizontalLayoutUSBCANNode->addWidget(CANNodeDisconnectButton);


        verticalLayout_5->addLayout(horizontalLayoutUSBCANNode);

        tabWidget->addTab(tabCANConverter, QString());
        tabTCP = new QWidget();
        tabTCP->setObjectName(QString::fromUtf8("tabTCP"));
        verticalLayout_3 = new QVBoxLayout(tabTCP);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayoutTCP = new QHBoxLayout();
        horizontalLayoutTCP->setObjectName(QString::fromUtf8("horizontalLayoutTCP"));
        labelTCP = new QLabel(tabTCP);
        labelTCP->setObjectName(QString::fromUtf8("labelTCP"));

        horizontalLayoutTCP->addWidget(labelTCP);

        tcpServerEdit = new QLineEdit(tabTCP);
        tcpServerEdit->setObjectName(QString::fromUtf8("tcpServerEdit"));

        horizontalLayoutTCP->addWidget(tcpServerEdit);

        tcpPortBox = new QSpinBox(tabTCP);
        tcpPortBox->setObjectName(QString::fromUtf8("tcpPortBox"));
        tcpPortBox->setMaximum(65535);
        tcpPortBox->setValue(65102);

        horizontalLayoutTCP->addWidget(tcpPortBox);

        tcpDisconnectButton = new QPushButton(tabTCP);
        tcpDisconnectButton->setObjectName(QString::fromUtf8("tcpDisconnectButton"));
        sizePolicy1.setHeightForWidth(tcpDisconnectButton->sizePolicy().hasHeightForWidth());
        tcpDisconnectButton->setSizePolicy(sizePolicy1);
        tcpDisconnectButton->setIcon(icon1);

        horizontalLayoutTCP->addWidget(tcpDisconnectButton);

        tcpConnectButton = new QPushButton(tabTCP);
        tcpConnectButton->setObjectName(QString::fromUtf8("tcpConnectButton"));
        sizePolicy1.setHeightForWidth(tcpConnectButton->sizePolicy().hasHeightForWidth());
        tcpConnectButton->setSizePolicy(sizePolicy1);
        tcpConnectButton->setIcon(icon2);

        horizontalLayoutTCP->addWidget(tcpConnectButton);


        verticalLayout_3->addLayout(horizontalLayoutTCP);

        verticalSpacerTCP = new QSpacerItem(20, 273, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacerTCP);

        tabWidget->addTab(tabTCP, QString());
        tabBlueTooth = new QWidget();
        tabBlueTooth->setObjectName(QString::fromUtf8("tabBlueTooth"));
        verticalLayout_4 = new QVBoxLayout(tabBlueTooth);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayoutBLE = new QHBoxLayout();
        horizontalLayoutBLE->setObjectName(QString::fromUtf8("horizontalLayoutBLE"));
        label_3 = new QLabel(tabBlueTooth);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayoutBLE->addWidget(label_3);

        bleDevBox = new QComboBox(tabBlueTooth);
        bleDevBox->setObjectName(QString::fromUtf8("bleDevBox"));
        sizePolicy.setHeightForWidth(bleDevBox->sizePolicy().hasHeightForWidth());
        bleDevBox->setSizePolicy(sizePolicy);

        horizontalLayoutBLE->addWidget(bleDevBox);

        bleScanButton = new QPushButton(tabBlueTooth);
        bleScanButton->setObjectName(QString::fromUtf8("bleScanButton"));
        sizePolicy1.setHeightForWidth(bleScanButton->sizePolicy().hasHeightForWidth());
        bleScanButton->setSizePolicy(sizePolicy1);
        bleScanButton->setIcon(icon);

        horizontalLayoutBLE->addWidget(bleScanButton);

        bleDisconnectButton = new QPushButton(tabBlueTooth);
        bleDisconnectButton->setObjectName(QString::fromUtf8("bleDisconnectButton"));
        sizePolicy1.setHeightForWidth(bleDisconnectButton->sizePolicy().hasHeightForWidth());
        bleDisconnectButton->setSizePolicy(sizePolicy1);
        bleDisconnectButton->setIcon(icon1);

        horizontalLayoutBLE->addWidget(bleDisconnectButton);

        bleConnectButton = new QPushButton(tabBlueTooth);
        bleConnectButton->setObjectName(QString::fromUtf8("bleConnectButton"));
        sizePolicy1.setHeightForWidth(bleConnectButton->sizePolicy().hasHeightForWidth());
        bleConnectButton->setSizePolicy(sizePolicy1);
        bleConnectButton->setIcon(icon2);

        horizontalLayoutBLE->addWidget(bleConnectButton);


        verticalLayout_4->addLayout(horizontalLayoutBLE);

        verticalSpacerBLE = new QSpacerItem(20, 186, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacerBLE);

        tabWidget->addTab(tabBlueTooth, QString());

        verticalLayout->addWidget(tabWidget);

        groupBox = new QGroupBox(PageConnection);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        canFwdBox = new QSpinBox(groupBox);
        canFwdBox->setObjectName(QString::fromUtf8("canFwdBox"));
        canFwdBox->setMaximum(255);
        canFwdBox->setValue(10);

        horizontalLayout_2->addWidget(canFwdBox);

        helpButton = new QPushButton(groupBox);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        sizePolicy1.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon3);

        horizontalLayout_2->addWidget(helpButton);

        canFwdButton = new QPushButton(groupBox);
        canFwdButton->setObjectName(QString::fromUtf8("canFwdButton"));
        sizePolicy1.setHeightForWidth(canFwdButton->sizePolicy().hasHeightForWidth());
        canFwdButton->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/icons/can_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/res/icons/can_on.png"), QSize(), QIcon::Normal, QIcon::On);
        canFwdButton->setIcon(icon4);
        canFwdButton->setCheckable(true);

        horizontalLayout_2->addWidget(canFwdButton);


        verticalLayout->addWidget(groupBox);

        autoConnectButton = new QPushButton(PageConnection);
        autoConnectButton->setObjectName(QString::fromUtf8("autoConnectButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/res/icons/Wizard-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        autoConnectButton->setIcon(icon5);
        autoConnectButton->setIconSize(QSize(45, 45));

        verticalLayout->addWidget(autoConnectButton);

        statusLabel = new QLabel(PageConnection);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(statusLabel);


        retranslateUi(PageConnection);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageConnection);
    } // setupUi

    void retranslateUi(QWidget *PageConnection)
    {
        PageConnection->setWindowTitle(QCoreApplication::translate("PageConnection", "Form", nullptr));
        labelSerial->setText(QCoreApplication::translate("PageConnection", "Port", nullptr));
#if QT_CONFIG(tooltip)
        serialPortBox->setToolTip(QCoreApplication::translate("PageConnection", "Serial port", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        serialBaudBox->setToolTip(QCoreApplication::translate("PageConnection", "Baudrate", nullptr));
#endif // QT_CONFIG(tooltip)
        serialBaudBox->setSuffix(QCoreApplication::translate("PageConnection", " bps", nullptr));
        serialBaudBox->setPrefix(QCoreApplication::translate("PageConnection", "Baud: ", nullptr));
#if QT_CONFIG(tooltip)
        serialRefreshButton->setToolTip(QCoreApplication::translate("PageConnection", "Refresh serial port list", nullptr));
#endif // QT_CONFIG(tooltip)
        serialRefreshButton->setText(QString());
#if QT_CONFIG(tooltip)
        serialDisconnectButton->setToolTip(QCoreApplication::translate("PageConnection", "Disconnect", nullptr));
#endif // QT_CONFIG(tooltip)
        serialDisconnectButton->setText(QString());
#if QT_CONFIG(tooltip)
        serialConnectButton->setToolTip(QCoreApplication::translate("PageConnection", "Connect", nullptr));
#endif // QT_CONFIG(tooltip)
        serialConnectButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabSerial), QCoreApplication::translate("PageConnection", "(USB-)Serial", nullptr));
        CANSerialLabel->setText(QCoreApplication::translate("PageConnection", "Port", nullptr));
#if QT_CONFIG(tooltip)
        CANSerialPortBox->setToolTip(QCoreApplication::translate("PageConnection", "Serial port", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        CANSerialRefreshButton->setToolTip(QCoreApplication::translate("PageConnection", "Refresh serial port list", nullptr));
#endif // QT_CONFIG(tooltip)
        CANSerialRefreshButton->setText(QString());
#if QT_CONFIG(tooltip)
        CANSerialDisconnectButton->setToolTip(QCoreApplication::translate("PageConnection", "Disconnect", nullptr));
#endif // QT_CONFIG(tooltip)
        CANSerialDisconnectButton->setText(QString());
#if QT_CONFIG(tooltip)
        CANSerialConnectButton->setToolTip(QCoreApplication::translate("PageConnection", "Connect", nullptr));
#endif // QT_CONFIG(tooltip)
        CANSerialConnectButton->setText(QString());
#if QT_CONFIG(tooltip)
        CANNodeRefreshButton->setToolTip(QCoreApplication::translate("PageConnection", "Refresh CAN nodes list", nullptr));
#endif // QT_CONFIG(tooltip)
        CANNodeRefreshButton->setText(QCoreApplication::translate("PageConnection", "Scan bus", nullptr));
#if QT_CONFIG(tooltip)
        CANNodeConnectButton->setToolTip(QCoreApplication::translate("PageConnection", "Connect to CAN node", nullptr));
#endif // QT_CONFIG(tooltip)
        CANNodeConnectButton->setText(QCoreApplication::translate("PageConnection", "Connect node", nullptr));
#if QT_CONFIG(tooltip)
        CANNodeDisconnectButton->setToolTip(QCoreApplication::translate("PageConnection", "Disconnect from CAN node", nullptr));
#endif // QT_CONFIG(tooltip)
        CANNodeDisconnectButton->setText(QCoreApplication::translate("PageConnection", "Disconnect node", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCANConverter), QCoreApplication::translate("PageConnection", "(USB-)CAN", nullptr));
        labelTCP->setText(QCoreApplication::translate("PageConnection", "TCP Server", nullptr));
        tcpServerEdit->setText(QCoreApplication::translate("PageConnection", "127.0.0.1", nullptr));
        tcpPortBox->setPrefix(QCoreApplication::translate("PageConnection", "Port: ", nullptr));
#if QT_CONFIG(tooltip)
        tcpDisconnectButton->setToolTip(QCoreApplication::translate("PageConnection", "Disconnect", nullptr));
#endif // QT_CONFIG(tooltip)
        tcpDisconnectButton->setText(QString());
#if QT_CONFIG(tooltip)
        tcpConnectButton->setToolTip(QCoreApplication::translate("PageConnection", "Connect", nullptr));
#endif // QT_CONFIG(tooltip)
        tcpConnectButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabTCP), QCoreApplication::translate("PageConnection", "TCP", nullptr));
        label_3->setText(QCoreApplication::translate("PageConnection", "BLE Device", nullptr));
#if QT_CONFIG(tooltip)
        bleScanButton->setToolTip(QCoreApplication::translate("PageConnection", "Refresh serial port list", nullptr));
#endif // QT_CONFIG(tooltip)
        bleScanButton->setText(QString());
#if QT_CONFIG(tooltip)
        bleDisconnectButton->setToolTip(QCoreApplication::translate("PageConnection", "Disconnect", nullptr));
#endif // QT_CONFIG(tooltip)
        bleDisconnectButton->setText(QString());
#if QT_CONFIG(tooltip)
        bleConnectButton->setToolTip(QCoreApplication::translate("PageConnection", "Connect", nullptr));
#endif // QT_CONFIG(tooltip)
        bleConnectButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabBlueTooth), QCoreApplication::translate("PageConnection", "Bluetooth LE", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PageConnection", "CAN Forward", nullptr));
        canFwdBox->setPrefix(QCoreApplication::translate("PageConnection", "ID: ", nullptr));
#if QT_CONFIG(tooltip)
        helpButton->setToolTip(QCoreApplication::translate("PageConnection", "Show help", nullptr));
#endif // QT_CONFIG(tooltip)
        helpButton->setText(QString());
#if QT_CONFIG(tooltip)
        canFwdButton->setToolTip(QCoreApplication::translate("PageConnection", "Forward communication over CAN-bus", nullptr));
#endif // QT_CONFIG(tooltip)
        canFwdButton->setText(QString());
#if QT_CONFIG(tooltip)
        autoConnectButton->setToolTip(QCoreApplication::translate("PageConnection", "Try to automatically connect using the USB connection", nullptr));
#endif // QT_CONFIG(tooltip)
        autoConnectButton->setText(QCoreApplication::translate("PageConnection", "Autoconnect", nullptr));
        statusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageConnection: public Ui_PageConnection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGECONNECTION_H
