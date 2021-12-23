/********************************************************************************
** Form generated from reading UI file 'pagemastersettings.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEMASTERSETTINGS_H
#define UI_PAGEMASTERSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/vtextbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_PageMasterSettings
{
public:
    QHBoxLayout *horizontalLayout;
    VTextBrowser *textEdit;

    void setupUi(QWidget *PageMasterSettings)
    {
        if (PageMasterSettings->objectName().isEmpty())
            PageMasterSettings->setObjectName(QString::fromUtf8("PageMasterSettings"));
        PageMasterSettings->resize(700, 500);
        horizontalLayout = new QHBoxLayout(PageMasterSettings);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new VTextBrowser(PageMasterSettings);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);


        retranslateUi(PageMasterSettings);

        QMetaObject::connectSlotsByName(PageMasterSettings);
    } // setupUi

    void retranslateUi(QWidget *PageMasterSettings)
    {
        PageMasterSettings->setWindowTitle(QCoreApplication::translate("PageMasterSettings", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageMasterSettings: public Ui_PageMasterSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMASTERSETTINGS_H
