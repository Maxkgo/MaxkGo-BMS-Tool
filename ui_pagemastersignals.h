/********************************************************************************
** Form generated from reading UI file 'pagemastersignals.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEMASTERSIGNALS_H
#define UI_PAGEMASTERSIGNALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageMasterSignals
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *Signals;
    QVBoxLayout *verticalLayout_2;
    ParamTable *signalsTab;
    QWidget *Conditions;
    QVBoxLayout *verticalLayout_3;
    ParamTable *conditionsTab;

    void setupUi(QWidget *PageMasterSignals)
    {
        if (PageMasterSignals->objectName().isEmpty())
            PageMasterSignals->setObjectName(QString::fromUtf8("PageMasterSignals"));
        PageMasterSignals->resize(700, 500);
        verticalLayout = new QVBoxLayout(PageMasterSignals);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(PageMasterSignals);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        Signals = new QWidget();
        Signals->setObjectName(QString::fromUtf8("Signals"));
        verticalLayout_2 = new QVBoxLayout(Signals);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        signalsTab = new ParamTable(Signals);
        signalsTab->setObjectName(QString::fromUtf8("signalsTab"));

        verticalLayout_2->addWidget(signalsTab);

        tabWidget->addTab(Signals, QString());
        Conditions = new QWidget();
        Conditions->setObjectName(QString::fromUtf8("Conditions"));
        verticalLayout_3 = new QVBoxLayout(Conditions);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        conditionsTab = new ParamTable(Conditions);
        conditionsTab->setObjectName(QString::fromUtf8("conditionsTab"));

        verticalLayout_3->addWidget(conditionsTab);

        tabWidget->addTab(Conditions, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(PageMasterSignals);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageMasterSignals);
    } // setupUi

    void retranslateUi(QWidget *PageMasterSignals)
    {
        PageMasterSignals->setWindowTitle(QApplication::translate("PageMasterSignals", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Signals), QApplication::translate("PageMasterSignals", "Signals", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Conditions), QApplication::translate("PageMasterSignals", "Conditions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageMasterSignals: public Ui_PageMasterSignals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMASTERSIGNALS_H
