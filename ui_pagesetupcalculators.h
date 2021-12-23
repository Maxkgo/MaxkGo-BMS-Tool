/********************************************************************************
** Form generated from reading UI file 'pagesetupcalculators.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGESETUPCALCULATORS_H
#define UI_PAGESETUPCALCULATORS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/vtextbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_PageSetupCalculators
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    VTextBrowser *setupText;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addSetupButton;
    QPushButton *removeSetupButton;

    void setupUi(QWidget *PageSetupCalculators)
    {
        if (PageSetupCalculators->objectName().isEmpty())
            PageSetupCalculators->setObjectName(QString::fromUtf8("PageSetupCalculators"));
        PageSetupCalculators->resize(734, 536);
        verticalLayout_2 = new QVBoxLayout(PageSetupCalculators);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter = new QSplitter(PageSetupCalculators);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        setupText = new VTextBrowser(splitter);
        setupText->setObjectName(QString::fromUtf8("setupText"));
        splitter->addWidget(setupText);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabsClosable(true);

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addSetupButton = new QPushButton(widget);
        addSetupButton->setObjectName(QString::fromUtf8("addSetupButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/Plus Math-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        addSetupButton->setIcon(icon);

        horizontalLayout->addWidget(addSetupButton);

        removeSetupButton = new QPushButton(widget);
        removeSetupButton->setObjectName(QString::fromUtf8("removeSetupButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/icons/Cancel-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeSetupButton->setIcon(icon1);

        horizontalLayout->addWidget(removeSetupButton);


        verticalLayout->addLayout(horizontalLayout);

        splitter->addWidget(widget);

        verticalLayout_2->addWidget(splitter);


        retranslateUi(PageSetupCalculators);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(PageSetupCalculators);
    } // setupUi

    void retranslateUi(QWidget *PageSetupCalculators)
    {
        PageSetupCalculators->setWindowTitle(QCoreApplication::translate("PageSetupCalculators", "Form", nullptr));
        addSetupButton->setText(QCoreApplication::translate("PageSetupCalculators", "Add Setup", nullptr));
        removeSetupButton->setText(QCoreApplication::translate("PageSetupCalculators", "Remove Setup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageSetupCalculators: public Ui_PageSetupCalculators {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGESETUPCALCULATORS_H
