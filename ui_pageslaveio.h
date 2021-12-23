/********************************************************************************
** Form generated from reading UI file 'pageslaveio.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGESLAVEIO_H
#define UI_PAGESLAVEIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageSlaveIO
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabIOAUX;
    QVBoxLayout *verticalLayout_2;
    ParamTable *slaveIOTabAUX;
    QWidget *tabIOOpto;
    QVBoxLayout *verticalLayout_3;
    ParamTable *slaveIOTabOpto;

    void setupUi(QWidget *PageSlaveIO)
    {
        if (PageSlaveIO->objectName().isEmpty())
            PageSlaveIO->setObjectName(QString::fromUtf8("PageSlaveIO"));
        PageSlaveIO->resize(700, 500);
        verticalLayout = new QVBoxLayout(PageSlaveIO);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(PageSlaveIO);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabIOAUX = new QWidget();
        tabIOAUX->setObjectName(QString::fromUtf8("tabIOAUX"));
        verticalLayout_2 = new QVBoxLayout(tabIOAUX);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        slaveIOTabAUX = new ParamTable(tabIOAUX);
        slaveIOTabAUX->setObjectName(QString::fromUtf8("slaveIOTabAUX"));

        verticalLayout_2->addWidget(slaveIOTabAUX);

        tabWidget->addTab(tabIOAUX, QString());
        tabIOOpto = new QWidget();
        tabIOOpto->setObjectName(QString::fromUtf8("tabIOOpto"));
        verticalLayout_3 = new QVBoxLayout(tabIOOpto);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        slaveIOTabOpto = new ParamTable(tabIOOpto);
        slaveIOTabOpto->setObjectName(QString::fromUtf8("slaveIOTabOpto"));

        verticalLayout_3->addWidget(slaveIOTabOpto);

        tabWidget->addTab(tabIOOpto, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(PageSlaveIO);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageSlaveIO);
    } // setupUi

    void retranslateUi(QWidget *PageSlaveIO)
    {
        PageSlaveIO->setWindowTitle(QApplication::translate("PageSlaveIO", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabIOAUX), QApplication::translate("PageSlaveIO", "AUX", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabIOOpto), QApplication::translate("PageSlaveIO", "Opto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageSlaveIO: public Ui_PageSlaveIO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGESLAVEIO_H
