/********************************************************************************
** Form generated from reading UI file 'parameditstring.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMEDITSTRING_H
#define UI_PARAMEDITSTRING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParamEditString
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *valueEdit;
    QPushButton *helpButton;

    void setupUi(QWidget *ParamEditString)
    {
        if (ParamEditString->objectName().isEmpty())
            ParamEditString->setObjectName(QString::fromUtf8("ParamEditString"));
        ParamEditString->resize(258, 32);
        horizontalLayout = new QHBoxLayout(ParamEditString);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        valueEdit = new QLineEdit(ParamEditString);
        valueEdit->setObjectName(QString::fromUtf8("valueEdit"));

        horizontalLayout->addWidget(valueEdit);

        helpButton = new QPushButton(ParamEditString);
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


        retranslateUi(ParamEditString);

        QMetaObject::connectSlotsByName(ParamEditString);
    } // setupUi

    void retranslateUi(QWidget *ParamEditString)
    {
        ParamEditString->setWindowTitle(QCoreApplication::translate("ParamEditString", "Form", nullptr));
#if QT_CONFIG(tooltip)
        helpButton->setToolTip(QCoreApplication::translate("ParamEditString", "Show help", nullptr));
#endif // QT_CONFIG(tooltip)
        helpButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ParamEditString: public Ui_ParamEditString {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMEDITSTRING_H
