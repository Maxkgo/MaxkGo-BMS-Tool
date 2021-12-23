/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionReadBMScconf;
    QAction *actionReadBMScconfDefault;
    QAction *actionWriteBMScconf;
    QAction *actionSaveBMSConfXml;
    QAction *actionLoadBMSConfXml;
    QAction *actionDisconnect;
    QAction *actionReboot;
    QAction *actionCanFwd;
    QAction *actionReconnect;
    QAction *actionRtData;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionParameterEditorBMScconf;
    QAction *actionSaveBMSConfigurationHeader;
    QAction *actionSaveBMSConfigurationHeaderWrap;
    QAction *actionRtDataApp;
    QAction *actionTerminalPrintFaults;
    QAction *actionTerminalShowHelp;
    QAction *actionTerminalClear;
    QAction *actionTerminalPrintThreads;
    QAction *actionSendAlive;
    QAction *actionLibrariesUsed;
    QAction *actionAboutQt;
    QAction *actionParameterEditorInfo;
    QAction *actionSafetyInformation;
    QAction *actionWarrantyStatement;
    QAction *actionDieBieMSToolChangelog;
    QAction *actionFirmwareChangelog;
    QAction *actionLicense;
    QAction *actionStoreBMScconf;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *pageLabel;
    QListWidget *pageList;
    QStackedWidget *pageWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuTools;
    QMenu *menuTerminal;
    QMenu *menuCommands;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1054, 642);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/Car Battery-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionReadBMScconf = new QAction(MainWindow);
        actionReadBMScconf->setObjectName(QString::fromUtf8("actionReadBMScconf"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/icons/motor_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReadBMScconf->setIcon(icon1);
        actionReadBMScconfDefault = new QAction(MainWindow);
        actionReadBMScconfDefault->setObjectName(QString::fromUtf8("actionReadBMScconfDefault"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/icons/motor_default.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReadBMScconfDefault->setIcon(icon2);
        actionWriteBMScconf = new QAction(MainWindow);
        actionWriteBMScconf->setObjectName(QString::fromUtf8("actionWriteBMScconf"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/icons/motor_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWriteBMScconf->setIcon(icon3);
        actionSaveBMSConfXml = new QAction(MainWindow);
        actionSaveBMSConfXml->setObjectName(QString::fromUtf8("actionSaveBMSConfXml"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/icons/Save as-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveBMSConfXml->setIcon(icon4);
        actionLoadBMSConfXml = new QAction(MainWindow);
        actionLoadBMSConfXml->setObjectName(QString::fromUtf8("actionLoadBMSConfXml"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/res/icons/Open Folder-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadBMSConfXml->setIcon(icon5);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/res/icons/Disconnected-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon6);
        actionReboot = new QAction(MainWindow);
        actionReboot->setObjectName(QString::fromUtf8("actionReboot"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/res/icons/Restart-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReboot->setIcon(icon7);
        actionCanFwd = new QAction(MainWindow);
        actionCanFwd->setObjectName(QString::fromUtf8("actionCanFwd"));
        actionCanFwd->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/res/icons/can_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QString::fromUtf8(":/res/icons/can_on.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCanFwd->setIcon(icon8);
        actionReconnect = new QAction(MainWindow);
        actionReconnect->setObjectName(QString::fromUtf8("actionReconnect"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/res/icons/Connected-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReconnect->setIcon(icon9);
        actionRtData = new QAction(MainWindow);
        actionRtData->setObjectName(QString::fromUtf8("actionRtData"));
        actionRtData->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/res/icons/rt_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QString::fromUtf8(":/res/icons/rt_on.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRtData->setIcon(icon10);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/res/icons/Shutdown-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon11);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/res/icons/About-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon12);
        actionParameterEditorBMScconf = new QAction(MainWindow);
        actionParameterEditorBMScconf->setObjectName(QString::fromUtf8("actionParameterEditorBMScconf"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/res/icons/Horizontal Settings Mixer-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionParameterEditorBMScconf->setIcon(icon13);
        actionSaveBMSConfigurationHeader = new QAction(MainWindow);
        actionSaveBMSConfigurationHeader->setObjectName(QString::fromUtf8("actionSaveBMSConfigurationHeader"));
        actionSaveBMSConfigurationHeader->setIcon(icon4);
        actionSaveBMSConfigurationHeaderWrap = new QAction(MainWindow);
        actionSaveBMSConfigurationHeaderWrap->setObjectName(QString::fromUtf8("actionSaveBMSConfigurationHeaderWrap"));
        actionSaveBMSConfigurationHeaderWrap->setIcon(icon4);
        actionRtDataApp = new QAction(MainWindow);
        actionRtDataApp->setObjectName(QString::fromUtf8("actionRtDataApp"));
        actionRtDataApp->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/res/icons/rt_app_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon14.addFile(QString::fromUtf8(":/res/icons/rt_app_on.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRtDataApp->setIcon(icon14);
        actionTerminalPrintFaults = new QAction(MainWindow);
        actionTerminalPrintFaults->setObjectName(QString::fromUtf8("actionTerminalPrintFaults"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/res/icons/Console-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalPrintFaults->setIcon(icon15);
        actionTerminalShowHelp = new QAction(MainWindow);
        actionTerminalShowHelp->setObjectName(QString::fromUtf8("actionTerminalShowHelp"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalShowHelp->setIcon(icon16);
        actionTerminalClear = new QAction(MainWindow);
        actionTerminalClear->setObjectName(QString::fromUtf8("actionTerminalClear"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/res/icons/Delete-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalClear->setIcon(icon17);
        actionTerminalPrintThreads = new QAction(MainWindow);
        actionTerminalPrintThreads->setObjectName(QString::fromUtf8("actionTerminalPrintThreads"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/res/icons/Electronics-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalPrintThreads->setIcon(icon18);
        actionSendAlive = new QAction(MainWindow);
        actionSendAlive->setObjectName(QString::fromUtf8("actionSendAlive"));
        actionSendAlive->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/res/icons/alive_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon19.addFile(QString::fromUtf8(":/res/icons/alive_on.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSendAlive->setIcon(icon19);
        actionLibrariesUsed = new QAction(MainWindow);
        actionLibrariesUsed->setObjectName(QString::fromUtf8("actionLibrariesUsed"));
        actionLibrariesUsed->setIcon(icon12);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        actionAboutQt->setIcon(icon12);
        actionParameterEditorInfo = new QAction(MainWindow);
        actionParameterEditorInfo->setObjectName(QString::fromUtf8("actionParameterEditorInfo"));
        actionParameterEditorInfo->setIcon(icon13);
        actionSafetyInformation = new QAction(MainWindow);
        actionSafetyInformation->setObjectName(QString::fromUtf8("actionSafetyInformation"));
        actionSafetyInformation->setIcon(icon12);
        actionWarrantyStatement = new QAction(MainWindow);
        actionWarrantyStatement->setObjectName(QString::fromUtf8("actionWarrantyStatement"));
        actionWarrantyStatement->setIcon(icon12);
        actionDieBieMSToolChangelog = new QAction(MainWindow);
        actionDieBieMSToolChangelog->setObjectName(QString::fromUtf8("actionDieBieMSToolChangelog"));
        actionDieBieMSToolChangelog->setIcon(icon12);
        actionFirmwareChangelog = new QAction(MainWindow);
        actionFirmwareChangelog->setObjectName(QString::fromUtf8("actionFirmwareChangelog"));
        actionFirmwareChangelog->setIcon(icon12);
        actionLicense = new QAction(MainWindow);
        actionLicense->setObjectName(QString::fromUtf8("actionLicense"));
        actionLicense->setIcon(icon12);
        actionStoreBMScconf = new QAction(MainWindow);
        actionStoreBMScconf->setObjectName(QString::fromUtf8("actionStoreBMScconf"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/res/icons/Save-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStoreBMScconf->setIcon(icon20);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, -1, -1, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pageLabel = new QLabel(centralWidget);
        pageLabel->setObjectName(QString::fromUtf8("pageLabel"));
        pageLabel->setEnabled(true);
        pageLabel->setMaximumSize(QSize(220, 56));
        pageLabel->setPixmap(QPixmap(QString::fromUtf8(":/res/logo.png")));
        pageLabel->setScaledContents(true);

        verticalLayout_2->addWidget(pageLabel);

        pageList = new QListWidget(centralWidget);
        pageList->setObjectName(QString::fromUtf8("pageList"));
        pageList->setMinimumSize(QSize(220, 0));
        pageList->setMaximumSize(QSize(220, 16777215));
        pageList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pageList->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(pageList);


        horizontalLayout->addLayout(verticalLayout_2);

        pageWidget = new QStackedWidget(centralWidget);
        pageWidget->setObjectName(QString::fromUtf8("pageWidget"));

        horizontalLayout->addWidget(pageWidget);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1054, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuTerminal = new QMenu(menuBar);
        menuTerminal->setObjectName(QString::fromUtf8("menuTerminal"));
        menuCommands = new QMenu(menuBar);
        menuCommands->setObjectName(QString::fromUtf8("menuCommands"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(24, 24));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::RightToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuCommands->menuAction());
        menuBar->addAction(menuTerminal->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSaveBMSConfXml);
        menuFile->addAction(actionLoadBMSConfXml);
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionSaveBMSConfigurationHeader);
        menuFile->addAction(actionSaveBMSConfigurationHeaderWrap);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionDieBieMSToolChangelog);
        menuHelp->addAction(actionFirmwareChangelog);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionLibrariesUsed);
        menuHelp->addAction(actionAboutQt);
        menuHelp->addSeparator();
        menuHelp->addAction(actionSafetyInformation);
        menuHelp->addAction(actionWarrantyStatement);
        menuHelp->addAction(actionLicense);
        menuTools->addAction(actionParameterEditorBMScconf);
        menuTools->addAction(actionParameterEditorInfo);
        menuTerminal->addAction(actionTerminalShowHelp);
        menuTerminal->addAction(actionTerminalPrintFaults);
        menuTerminal->addSeparator();
        menuTerminal->addAction(actionTerminalClear);
        menuCommands->addAction(actionReboot);
        mainToolBar->addAction(actionReconnect);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionReadBMScconf);
        mainToolBar->addAction(actionReadBMScconfDefault);
        mainToolBar->addAction(actionWriteBMScconf);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionStoreBMScconf);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRtData);
        mainToolBar->addAction(actionSendAlive);
        mainToolBar->addAction(actionCanFwd);

        retranslateUi(MainWindow);

        pageWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ENNOID-BMS Tool", nullptr));
        actionReadBMScconf->setText(QCoreApplication::translate("MainWindow", "readBMScconf", nullptr));
#if QT_CONFIG(tooltip)
        actionReadBMScconf->setToolTip(QCoreApplication::translate("MainWindow", "Read BMS Configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReadBMScconfDefault->setText(QCoreApplication::translate("MainWindow", "readBMScconfDefault", nullptr));
#if QT_CONFIG(tooltip)
        actionReadBMScconfDefault->setToolTip(QCoreApplication::translate("MainWindow", "Read default BMS configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWriteBMScconf->setText(QCoreApplication::translate("MainWindow", "writeBMScconf", nullptr));
#if QT_CONFIG(tooltip)
        actionWriteBMScconf->setToolTip(QCoreApplication::translate("MainWindow", "Write BMS configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveBMSConfXml->setText(QCoreApplication::translate("MainWindow", "Save BMS Configuration XML as...", nullptr));
        actionLoadBMSConfXml->setText(QCoreApplication::translate("MainWindow", "Load BMS Configuration XML", nullptr));
        actionDisconnect->setText(QCoreApplication::translate("MainWindow", "disconnect", nullptr));
#if QT_CONFIG(tooltip)
        actionDisconnect->setToolTip(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReboot->setText(QCoreApplication::translate("MainWindow", "Reboot", nullptr));
#if QT_CONFIG(tooltip)
        actionReboot->setToolTip(QCoreApplication::translate("MainWindow", "Reboot", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCanFwd->setText(QCoreApplication::translate("MainWindow", "canFwd", nullptr));
#if QT_CONFIG(tooltip)
        actionCanFwd->setToolTip(QCoreApplication::translate("MainWindow", "Forward communication over CAN-bus", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReconnect->setText(QCoreApplication::translate("MainWindow", "reconnect", nullptr));
#if QT_CONFIG(tooltip)
        actionReconnect->setToolTip(QCoreApplication::translate("MainWindow", "Reconnect last connection", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRtData->setText(QCoreApplication::translate("MainWindow", "rtData", nullptr));
#if QT_CONFIG(tooltip)
        actionRtData->setToolTip(QCoreApplication::translate("MainWindow", "Stream realtime data", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About ENNOID-BMS Tool", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("MainWindow", "About ENNOID-BMS Tool", nullptr));
#endif // QT_CONFIG(tooltip)
        actionParameterEditorBMScconf->setText(QCoreApplication::translate("MainWindow", "Parameter Editor Config", nullptr));
        actionSaveBMSConfigurationHeader->setText(QCoreApplication::translate("MainWindow", "Save BMS Configuration C Header as...", nullptr));
        actionSaveBMSConfigurationHeaderWrap->setText(QCoreApplication::translate("MainWindow", "Save BMS Configuration C Header (ifdef wrapped) as...", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveBMSConfigurationHeaderWrap->setToolTip(QCoreApplication::translate("MainWindow", "Save BMS Configuration C Header (ifdef wrapped) as", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRtDataApp->setText(QCoreApplication::translate("MainWindow", "rtDataApp", nullptr));
#if QT_CONFIG(tooltip)
        actionRtDataApp->setToolTip(QCoreApplication::translate("MainWindow", "Stream realtime app data", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTerminalPrintFaults->setText(QCoreApplication::translate("MainWindow", "Print Faults", nullptr));
#if QT_CONFIG(tooltip)
        actionTerminalPrintFaults->setToolTip(QCoreApplication::translate("MainWindow", "Print Faults", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTerminalShowHelp->setText(QCoreApplication::translate("MainWindow", "Show Help", nullptr));
        actionTerminalClear->setText(QCoreApplication::translate("MainWindow", "Clear Terminal", nullptr));
        actionTerminalPrintThreads->setText(QCoreApplication::translate("MainWindow", "Print Threads", nullptr));
#if QT_CONFIG(tooltip)
        actionTerminalPrintThreads->setToolTip(QCoreApplication::translate("MainWindow", "Print Threads", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSendAlive->setText(QCoreApplication::translate("MainWindow", "Send Alive Commands", nullptr));
#if QT_CONFIG(tooltip)
        actionSendAlive->setToolTip(QCoreApplication::translate("MainWindow", "Send alive packets periodically to prevent timeout", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLibrariesUsed->setText(QCoreApplication::translate("MainWindow", "About Libraries Used", nullptr));
        actionAboutQt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
#if QT_CONFIG(tooltip)
        actionAboutQt->setToolTip(QCoreApplication::translate("MainWindow", "Show the Qt library's About box", nullptr));
#endif // QT_CONFIG(tooltip)
        actionParameterEditorInfo->setText(QCoreApplication::translate("MainWindow", "Parameter Editor Info", nullptr));
        actionSafetyInformation->setText(QCoreApplication::translate("MainWindow", "Safety Information", nullptr));
        actionWarrantyStatement->setText(QCoreApplication::translate("MainWindow", "Limited Warranty Statement", nullptr));
#if QT_CONFIG(tooltip)
        actionWarrantyStatement->setToolTip(QCoreApplication::translate("MainWindow", "Limited Warranty Statement", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDieBieMSToolChangelog->setText(QCoreApplication::translate("MainWindow", "ENNOID-BMS Tool Changelog", nullptr));
#if QT_CONFIG(tooltip)
        actionDieBieMSToolChangelog->setToolTip(QCoreApplication::translate("MainWindow", "ENNOID-BMS Tool Changelog", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFirmwareChangelog->setText(QCoreApplication::translate("MainWindow", "Firmware Changelog", nullptr));
        actionLicense->setText(QCoreApplication::translate("MainWindow", "License", nullptr));
        actionStoreBMScconf->setText(QCoreApplication::translate("MainWindow", "writeBMScconf", nullptr));
#if QT_CONFIG(tooltip)
        actionStoreBMScconf->setToolTip(QCoreApplication::translate("MainWindow", "Store BMS configuration to Flash", nullptr));
#endif // QT_CONFIG(tooltip)
        pageLabel->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Developer", nullptr));
        menuTerminal->setTitle(QCoreApplication::translate("MainWindow", "Terminal", nullptr));
        menuCommands->setTitle(QCoreApplication::translate("MainWindow", "Commands", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
