/********************************************************************************
** Form generated from reading UI file 'pageslavesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGESLAVESETTINGS_H
#define UI_PAGESLAVESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/vtextbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_PageSlaveSettings
{
public:
    QHBoxLayout *horizontalLayout;
    VTextBrowser *textEdit;

    void setupUi(QWidget *PageSlaveSettings)
    {
        if (PageSlaveSettings->objectName().isEmpty())
            PageSlaveSettings->setObjectName(QString::fromUtf8("PageSlaveSettings"));
        PageSlaveSettings->resize(700, 500);
        horizontalLayout = new QHBoxLayout(PageSlaveSettings);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new VTextBrowser(PageSlaveSettings);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);


        retranslateUi(PageSlaveSettings);

        QMetaObject::connectSlotsByName(PageSlaveSettings);
    } // setupUi

    void retranslateUi(QWidget *PageSlaveSettings)
    {
        PageSlaveSettings->setWindowTitle(QCoreApplication::translate("PageSlaveSettings", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageSlaveSettings: public Ui_PageSlaveSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGESLAVESETTINGS_H
