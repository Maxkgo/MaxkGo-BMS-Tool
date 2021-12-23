/********************************************************************************
** Form generated from reading UI file 'pageterminal.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGETERMINAL_H
#define UI_PAGETERMINAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/historylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_PageTerminal
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *terminalBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *helpButton;
    HistoryLineEdit *terminalEdit;
    QPushButton *sendButton;
    QPushButton *clearButton;

    void setupUi(QWidget *PageTerminal)
    {
        if (PageTerminal->objectName().isEmpty())
            PageTerminal->setObjectName(QString::fromUtf8("PageTerminal"));
        PageTerminal->resize(632, 452);
        verticalLayout = new QVBoxLayout(PageTerminal);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        terminalBrowser = new QTextBrowser(PageTerminal);
        terminalBrowser->setObjectName(QString::fromUtf8("terminalBrowser"));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        terminalBrowser->setFont(font);
        terminalBrowser->setLineWrapMode(QTextEdit::NoWrap);

        verticalLayout->addWidget(terminalBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        helpButton = new QPushButton(PageTerminal);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon);

        horizontalLayout->addWidget(helpButton);

        terminalEdit = new HistoryLineEdit(PageTerminal);
        terminalEdit->setObjectName(QString::fromUtf8("terminalEdit"));

        horizontalLayout->addWidget(terminalEdit);

        sendButton = new QPushButton(PageTerminal);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sizePolicy.setHeightForWidth(sendButton->sizePolicy().hasHeightForWidth());
        sendButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/icons/Send File-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendButton->setIcon(icon1);

        horizontalLayout->addWidget(sendButton);

        clearButton = new QPushButton(PageTerminal);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        sizePolicy.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/icons/Delete-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon2);

        horizontalLayout->addWidget(clearButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PageTerminal);
        QObject::connect(clearButton, SIGNAL(clicked()), terminalBrowser, SLOT(clear()));
        QObject::connect(terminalEdit, SIGNAL(returnPressed()), sendButton, SLOT(click()));

        QMetaObject::connectSlotsByName(PageTerminal);
    } // setupUi

    void retranslateUi(QWidget *PageTerminal)
    {
        PageTerminal->setWindowTitle(QCoreApplication::translate("PageTerminal", "Form", nullptr));
#if QT_CONFIG(tooltip)
        helpButton->setToolTip(QCoreApplication::translate("PageTerminal", "Send help command to VESC", nullptr));
#endif // QT_CONFIG(tooltip)
        helpButton->setText(QString());
#if QT_CONFIG(tooltip)
        sendButton->setToolTip(QCoreApplication::translate("PageTerminal", "Send command", nullptr));
#endif // QT_CONFIG(tooltip)
        sendButton->setText(QString());
#if QT_CONFIG(tooltip)
        clearButton->setToolTip(QCoreApplication::translate("PageTerminal", "Clear terminal", nullptr));
#endif // QT_CONFIG(tooltip)
        clearButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageTerminal: public Ui_PageTerminal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGETERMINAL_H
