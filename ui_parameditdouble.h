/********************************************************************************
** Form generated from reading UI file 'parameditdouble.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMEDITDOUBLE_H
#define UI_PARAMEDITDOUBLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParamEditDouble
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *mainLayout;
    QPushButton *readButton;
    QPushButton *readDefaultButton;
    QPushButton *helpButton;

    void setupUi(QWidget *ParamEditDouble)
    {
        if (ParamEditDouble->objectName().isEmpty())
            ParamEditDouble->setObjectName(QString::fromUtf8("ParamEditDouble"));
        ParamEditDouble->resize(86, 26);
        verticalLayout = new QVBoxLayout(ParamEditDouble);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainLayout = new QHBoxLayout();
        mainLayout->setSpacing(0);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        readButton = new QPushButton(ParamEditDouble);
        readButton->setObjectName(QString::fromUtf8("readButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(readButton->sizePolicy().hasHeightForWidth());
        readButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/Upload-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        readButton->setIcon(icon);

        mainLayout->addWidget(readButton);

        readDefaultButton = new QPushButton(ParamEditDouble);
        readDefaultButton->setObjectName(QString::fromUtf8("readDefaultButton"));
        sizePolicy.setHeightForWidth(readDefaultButton->sizePolicy().hasHeightForWidth());
        readDefaultButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/icons/Data Backup-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        readDefaultButton->setIcon(icon1);

        mainLayout->addWidget(readDefaultButton);

        helpButton = new QPushButton(ParamEditDouble);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        sizePolicy.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon2);

        mainLayout->addWidget(helpButton);


        verticalLayout->addLayout(mainLayout);


        retranslateUi(ParamEditDouble);

        QMetaObject::connectSlotsByName(ParamEditDouble);
    } // setupUi

    void retranslateUi(QWidget *ParamEditDouble)
    {
        ParamEditDouble->setWindowTitle(QCoreApplication::translate("ParamEditDouble", "Form", nullptr));
#if QT_CONFIG(tooltip)
        readButton->setToolTip(QCoreApplication::translate("ParamEditDouble", "Read current setting", nullptr));
#endif // QT_CONFIG(tooltip)
        readButton->setText(QString());
#if QT_CONFIG(tooltip)
        readDefaultButton->setToolTip(QCoreApplication::translate("ParamEditDouble", "Read default setting", nullptr));
#endif // QT_CONFIG(tooltip)
        readDefaultButton->setText(QString());
#if QT_CONFIG(tooltip)
        helpButton->setToolTip(QCoreApplication::translate("ParamEditDouble", "Show help", nullptr));
#endif // QT_CONFIG(tooltip)
        helpButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ParamEditDouble: public Ui_ParamEditDouble {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMEDITDOUBLE_H
