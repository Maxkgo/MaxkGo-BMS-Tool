/********************************************************************************
** Form generated from reading UI file 'pagemastergeneral.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEMASTERGENERAL_H
#define UI_PAGEMASTERGENERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageMasterGeneral
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *PowerState;
    QVBoxLayout *verticalLayout_2;
    ParamTable *powerStateTab;
    QWidget *Limits;
    QVBoxLayout *verticalLayout_5;
    ParamTable *masterLimitsTab;
    QWidget *CAN;
    QVBoxLayout *verticalLayout_3;
    ParamTable *canTab;
    QWidget *TemperatureSensors;
    QVBoxLayout *verticalLayout_4;
    ParamTable *masterSensorsTab;

    void setupUi(QWidget *PageMasterGeneral)
    {
        if (PageMasterGeneral->objectName().isEmpty())
            PageMasterGeneral->setObjectName(QString::fromUtf8("PageMasterGeneral"));
        PageMasterGeneral->resize(700, 500);
        verticalLayout = new QVBoxLayout(PageMasterGeneral);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(PageMasterGeneral);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        PowerState = new QWidget();
        PowerState->setObjectName(QString::fromUtf8("PowerState"));
        verticalLayout_2 = new QVBoxLayout(PowerState);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        powerStateTab = new ParamTable(PowerState);
        powerStateTab->setObjectName(QString::fromUtf8("powerStateTab"));

        verticalLayout_2->addWidget(powerStateTab);

        tabWidget->addTab(PowerState, QString());
        Limits = new QWidget();
        Limits->setObjectName(QString::fromUtf8("Limits"));
        verticalLayout_5 = new QVBoxLayout(Limits);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        masterLimitsTab = new ParamTable(Limits);
        masterLimitsTab->setObjectName(QString::fromUtf8("masterLimitsTab"));

        verticalLayout_5->addWidget(masterLimitsTab);

        tabWidget->addTab(Limits, QString());
        CAN = new QWidget();
        CAN->setObjectName(QString::fromUtf8("CAN"));
        verticalLayout_3 = new QVBoxLayout(CAN);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        canTab = new ParamTable(CAN);
        canTab->setObjectName(QString::fromUtf8("canTab"));

        verticalLayout_3->addWidget(canTab);

        tabWidget->addTab(CAN, QString());
        TemperatureSensors = new QWidget();
        TemperatureSensors->setObjectName(QString::fromUtf8("TemperatureSensors"));
        verticalLayout_4 = new QVBoxLayout(TemperatureSensors);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        masterSensorsTab = new ParamTable(TemperatureSensors);
        masterSensorsTab->setObjectName(QString::fromUtf8("masterSensorsTab"));

        verticalLayout_4->addWidget(masterSensorsTab);

        tabWidget->addTab(TemperatureSensors, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(PageMasterGeneral);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageMasterGeneral);
    } // setupUi

    void retranslateUi(QWidget *PageMasterGeneral)
    {
        PageMasterGeneral->setWindowTitle(QApplication::translate("PageMasterGeneral", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(PowerState), QApplication::translate("PageMasterGeneral", "PowerState", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Limits), QApplication::translate("PageMasterGeneral", "Limits", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(CAN), QApplication::translate("PageMasterGeneral", "CAN", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TemperatureSensors), QApplication::translate("PageMasterGeneral", "Sensors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageMasterGeneral: public Ui_PageMasterGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMASTERGENERAL_H
