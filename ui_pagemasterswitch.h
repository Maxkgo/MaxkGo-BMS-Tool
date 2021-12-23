/********************************************************************************
** Form generated from reading UI file 'pagemasterswitch.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEMASTERSWITCH_H
#define UI_PAGEMASTERSWITCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageMasterSwitch
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *Discharge;
    QVBoxLayout *verticalLayout_2;
    ParamTable *dischargeTab;
    QWidget *Charge;
    QVBoxLayout *verticalLayout_3;
    ParamTable *chargeTab;

    void setupUi(QWidget *PageMasterSwitch)
    {
        if (PageMasterSwitch->objectName().isEmpty())
            PageMasterSwitch->setObjectName(QString::fromUtf8("PageMasterSwitch"));
        PageMasterSwitch->resize(700, 500);
        verticalLayout = new QVBoxLayout(PageMasterSwitch);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(PageMasterSwitch);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        Discharge = new QWidget();
        Discharge->setObjectName(QString::fromUtf8("Discharge"));
        verticalLayout_2 = new QVBoxLayout(Discharge);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        dischargeTab = new ParamTable(Discharge);
        dischargeTab->setObjectName(QString::fromUtf8("dischargeTab"));

        verticalLayout_2->addWidget(dischargeTab);

        tabWidget->addTab(Discharge, QString());
        Charge = new QWidget();
        Charge->setObjectName(QString::fromUtf8("Charge"));
        verticalLayout_3 = new QVBoxLayout(Charge);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        chargeTab = new ParamTable(Charge);
        chargeTab->setObjectName(QString::fromUtf8("chargeTab"));

        verticalLayout_3->addWidget(chargeTab);

        tabWidget->addTab(Charge, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(PageMasterSwitch);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageMasterSwitch);
    } // setupUi

    void retranslateUi(QWidget *PageMasterSwitch)
    {
        PageMasterSwitch->setWindowTitle(QApplication::translate("PageMasterSwitch", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Discharge), QApplication::translate("PageMasterSwitch", "Discharge", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Charge), QApplication::translate("PageMasterSwitch", "Charge", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageMasterSwitch: public Ui_PageMasterSwitch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMASTERSWITCH_H
