/********************************************************************************
** Form generated from reading UI file 'parameditbool.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMEDITBOOL_H
#define UI_PARAMEDITBOOL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParamEditBool
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *valueBox;
    QPushButton *readButton;
    QPushButton *readDefaultButton;
    QPushButton *helpButton;

    void setupUi(QWidget *ParamEditBool)
    {
        if (ParamEditBool->objectName().isEmpty())
            ParamEditBool->setObjectName(QString::fromUtf8("ParamEditBool"));
        ParamEditBool->resize(285, 29);
        horizontalLayout = new QHBoxLayout(ParamEditBool);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        valueBox = new QComboBox(ParamEditBool);
        valueBox->addItem(QString());
        valueBox->addItem(QString());
        valueBox->setObjectName(QString::fromUtf8("valueBox"));

        horizontalLayout->addWidget(valueBox);

        readButton = new QPushButton(ParamEditBool);
        readButton->setObjectName(QString::fromUtf8("readButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(readButton->sizePolicy().hasHeightForWidth());
        readButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/Upload-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        readButton->setIcon(icon);

        horizontalLayout->addWidget(readButton);

        readDefaultButton = new QPushButton(ParamEditBool);
        readDefaultButton->setObjectName(QString::fromUtf8("readDefaultButton"));
        sizePolicy.setHeightForWidth(readDefaultButton->sizePolicy().hasHeightForWidth());
        readDefaultButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/icons/Data Backup-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        readDefaultButton->setIcon(icon1);

        horizontalLayout->addWidget(readDefaultButton);

        helpButton = new QPushButton(ParamEditBool);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        sizePolicy.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon2);

        horizontalLayout->addWidget(helpButton);


        retranslateUi(ParamEditBool);

        QMetaObject::connectSlotsByName(ParamEditBool);
    } // setupUi

    void retranslateUi(QWidget *ParamEditBool)
    {
        ParamEditBool->setWindowTitle(QCoreApplication::translate("ParamEditBool", "Form", nullptr));
        valueBox->setItemText(0, QCoreApplication::translate("ParamEditBool", "False", nullptr));
        valueBox->setItemText(1, QCoreApplication::translate("ParamEditBool", "True", nullptr));

#if QT_CONFIG(tooltip)
        readButton->setToolTip(QCoreApplication::translate("ParamEditBool", "Read current setting", nullptr));
#endif // QT_CONFIG(tooltip)
        readButton->setText(QString());
#if QT_CONFIG(tooltip)
        readDefaultButton->setToolTip(QCoreApplication::translate("ParamEditBool", "Read default setting", nullptr));
#endif // QT_CONFIG(tooltip)
        readDefaultButton->setText(QString());
#if QT_CONFIG(tooltip)
        helpButton->setToolTip(QCoreApplication::translate("ParamEditBool", "Show help", nullptr));
#endif // QT_CONFIG(tooltip)
        helpButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ParamEditBool: public Ui_ParamEditBool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMEDITBOOL_H
