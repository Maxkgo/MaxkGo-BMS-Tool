/********************************************************************************
** Form generated from reading UI file 'pagemasterdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEMASTERDISPLAY_H
#define UI_PAGEMASTERDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageMasterDisplay
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *Durations;
    QVBoxLayout *verticalLayout_2;
    ParamTable *durationsTab;
    QWidget *Custom;
    QVBoxLayout *verticalLayout_3;
    ParamTable *customTab;

    void setupUi(QWidget *PageMasterDisplay)
    {
        if (PageMasterDisplay->objectName().isEmpty())
            PageMasterDisplay->setObjectName(QString::fromUtf8("PageMasterDisplay"));
        PageMasterDisplay->resize(700, 500);
        verticalLayout = new QVBoxLayout(PageMasterDisplay);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(PageMasterDisplay);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        Durations = new QWidget();
        Durations->setObjectName(QString::fromUtf8("Durations"));
        verticalLayout_2 = new QVBoxLayout(Durations);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        durationsTab = new ParamTable(Durations);
        durationsTab->setObjectName(QString::fromUtf8("durationsTab"));

        verticalLayout_2->addWidget(durationsTab);

        tabWidget->addTab(Durations, QString());
        Custom = new QWidget();
        Custom->setObjectName(QString::fromUtf8("Custom"));
        verticalLayout_3 = new QVBoxLayout(Custom);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        customTab = new ParamTable(Custom);
        customTab->setObjectName(QString::fromUtf8("customTab"));

        verticalLayout_3->addWidget(customTab);

        tabWidget->addTab(Custom, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(PageMasterDisplay);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageMasterDisplay);
    } // setupUi

    void retranslateUi(QWidget *PageMasterDisplay)
    {
        PageMasterDisplay->setWindowTitle(QApplication::translate("PageMasterDisplay", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Durations), QApplication::translate("PageMasterDisplay", "Durations", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Custom), QApplication::translate("PageMasterDisplay", "Custom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageMasterDisplay: public Ui_PageMasterDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMASTERDISPLAY_H
