/********************************************************************************
** Form generated from reading UI file 'pageslavefan.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGESLAVEFAN_H
#define UI_PAGESLAVEFAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageSlaveFAN
{
public:
    QVBoxLayout *verticalLayout;
    ParamTable *slaveFANTab;

    void setupUi(QWidget *PageSlaveFAN)
    {
        if (PageSlaveFAN->objectName().isEmpty())
            PageSlaveFAN->setObjectName(QString::fromUtf8("PageSlaveFAN"));
        PageSlaveFAN->resize(700, 500);
        verticalLayout = new QVBoxLayout(PageSlaveFAN);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        slaveFANTab = new ParamTable(PageSlaveFAN);
        slaveFANTab->setObjectName(QString::fromUtf8("slaveFANTab"));

        verticalLayout->addWidget(slaveFANTab);


        retranslateUi(PageSlaveFAN);

        QMetaObject::connectSlotsByName(PageSlaveFAN);
    } // setupUi

    void retranslateUi(QWidget *PageSlaveFAN)
    {
        PageSlaveFAN->setWindowTitle(QApplication::translate("PageSlaveFAN", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageSlaveFAN: public Ui_PageSlaveFAN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGESLAVEFAN_H
