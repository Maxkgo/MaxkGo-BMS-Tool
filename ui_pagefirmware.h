/********************************************************************************
** Form generated from reading UI file 'pagefirmware.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEFIRMWARE_H
#define UI_PAGEFIRMWARE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/displaypercentage.h"

QT_BEGIN_NAMESPACE

class Ui_PageFirmware
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *fwTabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QListWidget *hwList;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QListWidget *fwList;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *showNonDefaultBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *changelogButton;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *fwEdit;
    QPushButton *chooseButton;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_8;
    QListWidget *blList;
    QHBoxLayout *horizontalLayout_3;
    DisplayPercentage *display;
    QPushButton *cancelButton;
    QPushButton *uploadButton;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QLabel *currentLabel;
    QPushButton *readVersionButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *supportedLabel;

    void setupUi(QWidget *PageFirmware)
    {
        if (PageFirmware->objectName().isEmpty())
            PageFirmware->setObjectName(QString::fromUtf8("PageFirmware"));
        PageFirmware->resize(700, 500);
        verticalLayout_4 = new QVBoxLayout(PageFirmware);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(PageFirmware);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        fwTabWidget = new QTabWidget(groupBox);
        fwTabWidget->setObjectName(QString::fromUtf8("fwTabWidget"));
        fwTabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_7 = new QVBoxLayout(tab);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);

        hwList = new QListWidget(tab);
        hwList->setObjectName(QString::fromUtf8("hwList"));

        verticalLayout_5->addWidget(hwList);


        horizontalLayout_5->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_2);

        fwList = new QListWidget(tab);
        fwList->setObjectName(QString::fromUtf8("fwList"));

        verticalLayout_6->addWidget(fwList);


        horizontalLayout_5->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        showNonDefaultBox = new QCheckBox(tab);
        showNonDefaultBox->setObjectName(QString::fromUtf8("showNonDefaultBox"));

        horizontalLayout_6->addWidget(showNonDefaultBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        changelogButton = new QPushButton(tab);
        changelogButton->setObjectName(QString::fromUtf8("changelogButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/About-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        changelogButton->setIcon(icon);

        horizontalLayout_6->addWidget(changelogButton);


        verticalLayout_7->addLayout(horizontalLayout_6);

        fwTabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        fwEdit = new QLineEdit(tab_2);
        fwEdit->setObjectName(QString::fromUtf8("fwEdit"));

        horizontalLayout_4->addWidget(fwEdit);

        chooseButton = new QPushButton(tab_2);
        chooseButton->setObjectName(QString::fromUtf8("chooseButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chooseButton->sizePolicy().hasHeightForWidth());
        chooseButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/icons/Open Folder-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        chooseButton->setIcon(icon1);

        horizontalLayout_4->addWidget(chooseButton);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 249, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        fwTabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_8 = new QVBoxLayout(tab_3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        blList = new QListWidget(tab_3);
        blList->setObjectName(QString::fromUtf8("blList"));

        verticalLayout_8->addWidget(blList);

        fwTabWidget->addTab(tab_3, QString());

        verticalLayout_3->addWidget(fwTabWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        display = new DisplayPercentage(groupBox);
        display->setObjectName(QString::fromUtf8("display"));

        horizontalLayout_3->addWidget(display);

        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/icons/Cancel-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon2);

        horizontalLayout_3->addWidget(cancelButton);

        uploadButton = new QPushButton(groupBox);
        uploadButton->setObjectName(QString::fromUtf8("uploadButton"));
        sizePolicy.setHeightForWidth(uploadButton->sizePolicy().hasHeightForWidth());
        uploadButton->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/icons/Download-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        uploadButton->setIcon(icon3);

        horizontalLayout_3->addWidget(uploadButton);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_2 = new QGroupBox(PageFirmware);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        currentLabel = new QLabel(groupBox_2);
        currentLabel->setObjectName(QString::fromUtf8("currentLabel"));

        horizontalLayout->addWidget(currentLabel);

        readVersionButton = new QPushButton(groupBox_2);
        readVersionButton->setObjectName(QString::fromUtf8("readVersionButton"));
        sizePolicy.setHeightForWidth(readVersionButton->sizePolicy().hasHeightForWidth());
        readVersionButton->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/icons/Upload-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        readVersionButton->setIcon(icon4);

        horizontalLayout->addWidget(readVersionButton);


        horizontalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(PageFirmware);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        supportedLabel = new QLabel(groupBox_3);
        supportedLabel->setObjectName(QString::fromUtf8("supportedLabel"));

        verticalLayout_2->addWidget(supportedLabel);


        horizontalLayout_2->addWidget(groupBox_3);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(PageFirmware);

        fwTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageFirmware);
    } // setupUi

    void retranslateUi(QWidget *PageFirmware)
    {
        PageFirmware->setWindowTitle(QCoreApplication::translate("PageFirmware", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PageFirmware", "Install New Firmware", nullptr));
        label->setText(QCoreApplication::translate("PageFirmware", "Hardware Version", nullptr));
        label_2->setText(QCoreApplication::translate("PageFirmware", "Firmware", nullptr));
#if QT_CONFIG(tooltip)
        showNonDefaultBox->setToolTip(QCoreApplication::translate("PageFirmware", "Show firmwares with non-default compilation options", nullptr));
#endif // QT_CONFIG(tooltip)
        showNonDefaultBox->setText(QCoreApplication::translate("PageFirmware", "Show non-default firmwares", nullptr));
#if QT_CONFIG(tooltip)
        changelogButton->setToolTip(QCoreApplication::translate("PageFirmware", "Show firmware changelog", nullptr));
#endif // QT_CONFIG(tooltip)
        changelogButton->setText(QString());
        fwTabWidget->setTabText(fwTabWidget->indexOf(tab), QCoreApplication::translate("PageFirmware", "Included Files", nullptr));
#if QT_CONFIG(tooltip)
        chooseButton->setToolTip(QCoreApplication::translate("PageFirmware", "Choose file...", nullptr));
#endif // QT_CONFIG(tooltip)
        chooseButton->setText(QString());
        fwTabWidget->setTabText(fwTabWidget->indexOf(tab_2), QCoreApplication::translate("PageFirmware", "Custom File", nullptr));
        fwTabWidget->setTabText(fwTabWidget->indexOf(tab_3), QCoreApplication::translate("PageFirmware", "Bootloader", nullptr));
#if QT_CONFIG(tooltip)
        cancelButton->setToolTip(QCoreApplication::translate("PageFirmware", "Cancel upload", nullptr));
#endif // QT_CONFIG(tooltip)
        cancelButton->setText(QString());
#if QT_CONFIG(tooltip)
        uploadButton->setToolTip(QCoreApplication::translate("PageFirmware", "Update firmware on the connected ENNOID-BMS", nullptr));
#endif // QT_CONFIG(tooltip)
        uploadButton->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("PageFirmware", "Firmware, hardware and UUID", nullptr));
        currentLabel->setText(QString());
#if QT_CONFIG(tooltip)
        readVersionButton->setToolTip(QCoreApplication::translate("PageFirmware", "Read firmware version", nullptr));
#endif // QT_CONFIG(tooltip)
        readVersionButton->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("PageFirmware", "Supported Firmwares", nullptr));
        supportedLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageFirmware: public Ui_PageFirmware {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEFIRMWARE_H
