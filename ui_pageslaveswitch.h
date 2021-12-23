/********************************************************************************
** Form generated from reading UI file 'pageslaveswitch.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGESLAVESWITCH_H
#define UI_PAGESLAVESWITCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageSlaveSwitch
{
public:
    QVBoxLayout *verticalLayout;
    ParamTable *switchTab;

    void setupUi(QWidget *PageSlaveSwitch)
    {
        if (PageSlaveSwitch->objectName().isEmpty())
            PageSlaveSwitch->setObjectName(QString::fromUtf8("PageSlaveSwitch"));
        PageSlaveSwitch->resize(700, 500);
        verticalLayout = new QVBoxLayout(PageSlaveSwitch);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        switchTab = new ParamTable(PageSlaveSwitch);
        switchTab->setObjectName(QString::fromUtf8("switchTab"));

        verticalLayout->addWidget(switchTab);


        retranslateUi(PageSlaveSwitch);

        QMetaObject::connectSlotsByName(PageSlaveSwitch);
    } // setupUi

    void retranslateUi(QWidget *PageSlaveSwitch)
    {
        PageSlaveSwitch->setWindowTitle(QApplication::translate("PageSlaveSwitch", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageSlaveSwitch: public Ui_PageSlaveSwitch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGESLAVESWITCH_H
