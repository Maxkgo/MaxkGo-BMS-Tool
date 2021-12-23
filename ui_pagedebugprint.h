/********************************************************************************
** Form generated from reading UI file 'pagedebugprint.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEDEBUGPRINT_H
#define UI_PAGEDEBUGPRINT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/vtextbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_PageDebugPrint
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    VTextBrowser *consoleBrowser;
    QVBoxLayout *verticalLayout;
    QPushButton *clearButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PageDebugPrint)
    {
        if (PageDebugPrint->objectName().isEmpty())
            PageDebugPrint->setObjectName(QString::fromUtf8("PageDebugPrint"));
        PageDebugPrint->resize(700, 500);
        verticalLayout_2 = new QVBoxLayout(PageDebugPrint);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        consoleBrowser = new VTextBrowser(PageDebugPrint);
        consoleBrowser->setObjectName(QString::fromUtf8("consoleBrowser"));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        consoleBrowser->setFont(font);
        consoleBrowser->setLineWrapMode(QTextEdit::NoWrap);

        horizontalLayout->addWidget(consoleBrowser);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        clearButton = new QPushButton(PageDebugPrint);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(3);
        clearButton->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/Delete-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon);

        verticalLayout->addWidget(clearButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(PageDebugPrint);

        QMetaObject::connectSlotsByName(PageDebugPrint);
    } // setupUi

    void retranslateUi(QWidget *PageDebugPrint)
    {
        PageDebugPrint->setWindowTitle(QCoreApplication::translate("PageDebugPrint", "Form", nullptr));
#if QT_CONFIG(tooltip)
        clearButton->setToolTip(QCoreApplication::translate("PageDebugPrint", "Clear all text from console", nullptr));
#endif // QT_CONFIG(tooltip)
        clearButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageDebugPrint: public Ui_PageDebugPrint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEDEBUGPRINT_H
