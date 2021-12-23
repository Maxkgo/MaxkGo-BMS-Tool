/********************************************************************************
** Form generated from reading UI file 'pageslavegeneral.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGESLAVEGENERAL_H
#define UI_PAGESLAVEGENERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageSlaveGeneral
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *Sensors;
    QVBoxLayout *verticalLayout_2;
    ParamTable *slaveSensorsTab;

    void setupUi(QWidget *PageSlaveGeneral)
    {
        if (PageSlaveGeneral->objectName().isEmpty())
            PageSlaveGeneral->setObjectName(QString::fromUtf8("PageSlaveGeneral"));
        PageSlaveGeneral->resize(700, 500);
        verticalLayout = new QVBoxLayout(PageSlaveGeneral);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(PageSlaveGeneral);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        Sensors = new QWidget();
        Sensors->setObjectName(QString::fromUtf8("Sensors"));
        verticalLayout_2 = new QVBoxLayout(Sensors);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        slaveSensorsTab = new ParamTable(Sensors);
        slaveSensorsTab->setObjectName(QString::fromUtf8("slaveSensorsTab"));

        verticalLayout_2->addWidget(slaveSensorsTab);

        tabWidget->addTab(Sensors, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(PageSlaveGeneral);

        QMetaObject::connectSlotsByName(PageSlaveGeneral);
    } // setupUi

    void retranslateUi(QWidget *PageSlaveGeneral)
    {
        PageSlaveGeneral->setWindowTitle(QApplication::translate("PageSlaveGeneral", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Sensors), QApplication::translate("PageSlaveGeneral", "Sensors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageSlaveGeneral: public Ui_PageSlaveGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGESLAVEGENERAL_H
