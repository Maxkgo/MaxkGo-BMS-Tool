/********************************************************************************
** Form generated from reading UI file 'pagemastercell.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEMASTERCELL_H
#define UI_PAGEMASTERCELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageMasterCell
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *Specifications;
    QVBoxLayout *verticalLayout_2;
    ParamTable *specificationsTab;
    QWidget *Balancing;
    QVBoxLayout *verticalLayout_3;
    ParamTable *balancingTab;
    QWidget *Throttling;
    QVBoxLayout *verticalLayout_4;
    ParamTable *throttlingTab;
    QWidget *SoC;
    QVBoxLayout *verticalLayout_5;
    ParamTable *socTab;

    void setupUi(QWidget *PageMasterCell)
    {
        if (PageMasterCell->objectName().isEmpty())
            PageMasterCell->setObjectName(QString::fromUtf8("PageMasterCell"));
        PageMasterCell->resize(700, 500);
        verticalLayout = new QVBoxLayout(PageMasterCell);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(PageMasterCell);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        Specifications = new QWidget();
        Specifications->setObjectName(QString::fromUtf8("Specifications"));
        verticalLayout_2 = new QVBoxLayout(Specifications);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        specificationsTab = new ParamTable(Specifications);
        specificationsTab->setObjectName(QString::fromUtf8("specificationsTab"));

        verticalLayout_2->addWidget(specificationsTab);

        tabWidget->addTab(Specifications, QString());
        Balancing = new QWidget();
        Balancing->setObjectName(QString::fromUtf8("Balancing"));
        verticalLayout_3 = new QVBoxLayout(Balancing);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        balancingTab = new ParamTable(Balancing);
        balancingTab->setObjectName(QString::fromUtf8("balancingTab"));

        verticalLayout_3->addWidget(balancingTab);

        tabWidget->addTab(Balancing, QString());
        Throttling = new QWidget();
        Throttling->setObjectName(QString::fromUtf8("Throttling"));
        verticalLayout_4 = new QVBoxLayout(Throttling);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        throttlingTab = new ParamTable(Throttling);
        throttlingTab->setObjectName(QString::fromUtf8("throttlingTab"));

        verticalLayout_4->addWidget(throttlingTab);

        tabWidget->addTab(Throttling, QString());
        SoC = new QWidget();
        SoC->setObjectName(QString::fromUtf8("SoC"));
        verticalLayout_5 = new QVBoxLayout(SoC);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        socTab = new ParamTable(SoC);
        socTab->setObjectName(QString::fromUtf8("socTab"));

        verticalLayout_5->addWidget(socTab);

        tabWidget->addTab(SoC, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(PageMasterCell);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageMasterCell);
    } // setupUi

    void retranslateUi(QWidget *PageMasterCell)
    {
        PageMasterCell->setWindowTitle(QApplication::translate("PageMasterCell", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Specifications), QApplication::translate("PageMasterCell", "Specifications", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Balancing), QApplication::translate("PageMasterCell", "Balancing", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Throttling), QApplication::translate("PageMasterCell", "Throttling", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(SoC), QApplication::translate("PageMasterCell", "SoC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageMasterCell: public Ui_PageMasterCell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMASTERCELL_H
