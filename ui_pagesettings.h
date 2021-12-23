/********************************************************************************
** Form generated from reading UI file 'pagesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGESETTINGS_H
#define UI_PAGESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *uiScaleBox;
    QCheckBox *uiAutoScaleBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PageSettings)
    {
        if (PageSettings->objectName().isEmpty())
            PageSettings->setObjectName(QString::fromUtf8("PageSettings"));
        PageSettings->resize(745, 352);
        verticalLayout_2 = new QVBoxLayout(PageSettings);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(PageSettings);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(1);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        uiScaleBox = new QDoubleSpinBox(frame);
        uiScaleBox->setObjectName(QString::fromUtf8("uiScaleBox"));
        uiScaleBox->setMinimum(1.000000000000000);
        uiScaleBox->setMaximum(3.000000000000000);
        uiScaleBox->setSingleStep(0.100000000000000);

        horizontalLayout->addWidget(uiScaleBox);

        uiAutoScaleBox = new QCheckBox(frame);
        uiAutoScaleBox->setObjectName(QString::fromUtf8("uiAutoScaleBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uiAutoScaleBox->sizePolicy().hasHeightForWidth());
        uiAutoScaleBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(uiAutoScaleBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 144, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(frame);


        retranslateUi(PageSettings);

        QMetaObject::connectSlotsByName(PageSettings);
    } // setupUi

    void retranslateUi(QWidget *PageSettings)
    {
        PageSettings->setWindowTitle(QCoreApplication::translate("PageSettings", "Form", nullptr));
        label->setText(QCoreApplication::translate("PageSettings", "UI Scale Factor (restart required)", nullptr));
#if QT_CONFIG(tooltip)
        uiScaleBox->setToolTip(QCoreApplication::translate("PageSettings", "<html><head/><body><p>Scale the user intefrace with this factor. Useful for high resolution monitors. VESC Tool must be restarted for this setting to take effect.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        uiAutoScaleBox->setToolTip(QCoreApplication::translate("PageSettings", "<html><head/><body><p>Try to determine the scaling factor automatically from the screen resolution and the system font settings. VESC Tool must be restarted for this setting to take effect.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        uiAutoScaleBox->setText(QCoreApplication::translate("PageSettings", "Auto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageSettings: public Ui_PageSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGESETTINGS_H
