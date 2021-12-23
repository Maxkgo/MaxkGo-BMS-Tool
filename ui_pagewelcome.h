/********************************************************************************
** Form generated from reading UI file 'pagewelcome.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEWELCOME_H
#define UI_PAGEWELCOME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/imagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_PageWelcome
{
public:
    QVBoxLayout *verticalLayout;
    ImageWidget *bgWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *autoConnectButton;

    void setupUi(QWidget *PageWelcome)
    {
        if (PageWelcome->objectName().isEmpty())
            PageWelcome->setObjectName(QString::fromUtf8("PageWelcome"));
        PageWelcome->resize(760, 461);
        verticalLayout = new QVBoxLayout(PageWelcome);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        bgWidget = new ImageWidget(PageWelcome);
        bgWidget->setObjectName(QString::fromUtf8("bgWidget"));
        verticalLayout_2 = new QVBoxLayout(bgWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, 30, 30, 30);
        label = new QLabel(bgWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        verticalLayout_2->setStretch(0, 1);

        verticalLayout->addWidget(bgWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        autoConnectButton = new QPushButton(PageWelcome);
        autoConnectButton->setObjectName(QString::fromUtf8("autoConnectButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/Connected-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        autoConnectButton->setIcon(icon);
        autoConnectButton->setIconSize(QSize(45, 45));

        horizontalLayout->addWidget(autoConnectButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PageWelcome);

        QMetaObject::connectSlotsByName(PageWelcome);
    } // setupUi

    void retranslateUi(QWidget *PageWelcome)
    {
        PageWelcome->setWindowTitle(QApplication::translate("PageWelcome", "Form", nullptr));
        label->setText(QApplication::translate("PageWelcome", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Welcome to </span><span style=\" font-size:20pt; font-weight:600;\">ENNOID-BMS</span><span style=\" font-weight:600;\">\302\256</span><span style=\" font-size:20pt; font-weight:600;\"> Tool</span></p><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:14pt;\">You must connect your battery to your ENNOID-BMS before use. Once the battery is connected, the </span><span style=\" font-size:14pt; font-style:italic;\">power</span><span style=\" font-size:14pt;\"> LED on the ENNOID-BMS should normally turn </span><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">ON </span><span style=\" font-size:14pt;\">after connecting the USB to a computer host. </span></p><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:14pt;\">Click on the </span><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Connect </span><span style=\" font-size:14pt;\">button below. The indicator in th"
                        "e bottom right corner should turn green and shows </span><span style=\" font-size:14pt; font-style:italic;\">&quot;Connected&quot;. </span></p><p align=\"center\"><span style=\" font-size:14pt; vertical-align:sub;\">(If the connection fails, please make sure you have the appropriate driver for &quot;Silicon Labs CP2104&quot; installed on your computer)</span></p><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:14pt;\">Before using this application for configuring the ENNOID-BMS, make sure you have updated the firmware with one of the included files available in the &quot;Firmware&quot; page. </span></p><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:14pt;\">Follow the indicated instructions in the &quot;Settings&quot; page for configuring your ENNOID-BMS.</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        autoConnectButton->setToolTip(QApplication::translate("PageWelcome", "Automatically connect using the USB connection.", nullptr));
#endif // QT_NO_TOOLTIP
        autoConnectButton->setText(QApplication::translate("PageWelcome", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageWelcome: public Ui_PageWelcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEWELCOME_H
