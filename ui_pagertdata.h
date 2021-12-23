/********************************************************************************
** Form generated from reading UI file 'pagertdata.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGERTDATA_H
#define UI_PAGERTDATA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/qcustomplot.h"
#include "widgets/rtdatatext.h"

QT_BEGIN_NAMESPACE

class Ui_PageRtData
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *cellBarGraphTab;
    QVBoxLayout *verticalLayout_5;
    QCustomPlot *cellBarGraph;
    QWidget *auxBarGraphTab;
    QVBoxLayout *verticalLayout_8;
    QCustomPlot *auxBarGraph;
    QWidget *expBarGraphTab;
    QVBoxLayout *verticalLayout_18;
    QCustomPlot *expBarGraph;
    QWidget *ivLCGraphTab;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *ivLCGraph;
    QWidget *cellGraphTab;
    QVBoxLayout *verticalLayout_4;
    QCustomPlot *cellGraph;
    QWidget *tempGraphTab;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *tempGraph;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *tempShowBMSBox;
    QCheckBox *tempShowBatteryBox;
    QSpacerItem *horizontalSpacer;
    QFrame *buttonFrame;
    QVBoxLayout *verticalLayout;
    QToolButton *autoscaleButton;
    QToolButton *zoomHButton;
    QToolButton *zoomVButton;
    QToolButton *rescaleButton;
    QSpacerItem *verticalSpacer;
    RtDataText *rtText;

    void setupUi(QWidget *PageRtData)
    {
        if (PageRtData->objectName().isEmpty())
            PageRtData->setObjectName(QString::fromUtf8("PageRtData"));
        PageRtData->resize(834, 505);
        verticalLayout_6 = new QVBoxLayout(PageRtData);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(PageRtData);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        cellBarGraphTab = new QWidget();
        cellBarGraphTab->setObjectName(QString::fromUtf8("cellBarGraphTab"));
        verticalLayout_5 = new QVBoxLayout(cellBarGraphTab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        cellBarGraph = new QCustomPlot(cellBarGraphTab);
        cellBarGraph->setObjectName(QString::fromUtf8("cellBarGraph"));

        verticalLayout_5->addWidget(cellBarGraph);

        tabWidget->addTab(cellBarGraphTab, QString());
        auxBarGraphTab = new QWidget();
        auxBarGraphTab->setObjectName(QString::fromUtf8("auxBarGraphTab"));
        verticalLayout_8 = new QVBoxLayout(auxBarGraphTab);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        auxBarGraph = new QCustomPlot(auxBarGraphTab);
        auxBarGraph->setObjectName(QString::fromUtf8("auxBarGraph"));

        verticalLayout_8->addWidget(auxBarGraph);

        tabWidget->addTab(auxBarGraphTab, QString());
        expBarGraphTab = new QWidget();
        expBarGraphTab->setObjectName(QString::fromUtf8("expBarGraphTab"));
        verticalLayout_18 = new QVBoxLayout(expBarGraphTab);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        expBarGraph = new QCustomPlot(expBarGraphTab);
        expBarGraph->setObjectName(QString::fromUtf8("expBarGraph"));

        verticalLayout_18->addWidget(expBarGraph);

        tabWidget->addTab(expBarGraphTab, QString());
        ivLCGraphTab = new QWidget();
        ivLCGraphTab->setObjectName(QString::fromUtf8("ivLCGraphTab"));
        verticalLayout_2 = new QVBoxLayout(ivLCGraphTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ivLCGraph = new QCustomPlot(ivLCGraphTab);
        ivLCGraph->setObjectName(QString::fromUtf8("ivLCGraph"));

        verticalLayout_2->addWidget(ivLCGraph);

        tabWidget->addTab(ivLCGraphTab, QString());
        cellGraphTab = new QWidget();
        cellGraphTab->setObjectName(QString::fromUtf8("cellGraphTab"));
        verticalLayout_4 = new QVBoxLayout(cellGraphTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        cellGraph = new QCustomPlot(cellGraphTab);
        cellGraph->setObjectName(QString::fromUtf8("cellGraph"));

        verticalLayout_4->addWidget(cellGraph);

        tabWidget->addTab(cellGraphTab, QString());
        tempGraphTab = new QWidget();
        tempGraphTab->setObjectName(QString::fromUtf8("tempGraphTab"));
        verticalLayout_3 = new QVBoxLayout(tempGraphTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tempGraph = new QCustomPlot(tempGraphTab);
        tempGraph->setObjectName(QString::fromUtf8("tempGraph"));

        verticalLayout_3->addWidget(tempGraph);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tempShowBMSBox = new QCheckBox(tempGraphTab);
        tempShowBMSBox->setObjectName(QString::fromUtf8("tempShowBMSBox"));
        tempShowBMSBox->setChecked(true);

        horizontalLayout_3->addWidget(tempShowBMSBox);

        tempShowBatteryBox = new QCheckBox(tempGraphTab);
        tempShowBatteryBox->setObjectName(QString::fromUtf8("tempShowBatteryBox"));
        tempShowBatteryBox->setChecked(true);

        horizontalLayout_3->addWidget(tempShowBatteryBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout_3->setStretch(0, 1);
        tabWidget->addTab(tempGraphTab, QString());

        horizontalLayout->addWidget(tabWidget);

        buttonFrame = new QFrame(PageRtData);
        buttonFrame->setObjectName(QString::fromUtf8("buttonFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonFrame->sizePolicy().hasHeightForWidth());
        buttonFrame->setSizePolicy(sizePolicy);
        buttonFrame->setFrameShape(QFrame::StyledPanel);
        buttonFrame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(buttonFrame);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        autoscaleButton = new QToolButton(buttonFrame);
        autoscaleButton->setObjectName(QString::fromUtf8("autoscaleButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(autoscaleButton->sizePolicy().hasHeightForWidth());
        autoscaleButton->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(3);
        autoscaleButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/size_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/res/icons/size_on.png"), QSize(), QIcon::Normal, QIcon::On);
        autoscaleButton->setIcon(icon);
        autoscaleButton->setIconSize(QSize(20, 20));
        autoscaleButton->setCheckable(true);
        autoscaleButton->setChecked(true);

        verticalLayout->addWidget(autoscaleButton);

        zoomHButton = new QToolButton(buttonFrame);
        zoomHButton->setObjectName(QString::fromUtf8("zoomHButton"));
        sizePolicy1.setHeightForWidth(zoomHButton->sizePolicy().hasHeightForWidth());
        zoomHButton->setSizePolicy(sizePolicy1);
        zoomHButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/icons/expand_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/res/icons/expand_on.png"), QSize(), QIcon::Normal, QIcon::On);
        zoomHButton->setIcon(icon1);
        zoomHButton->setIconSize(QSize(20, 20));
        zoomHButton->setCheckable(true);
        zoomHButton->setChecked(true);

        verticalLayout->addWidget(zoomHButton);

        zoomVButton = new QToolButton(buttonFrame);
        zoomVButton->setObjectName(QString::fromUtf8("zoomVButton"));
        sizePolicy1.setHeightForWidth(zoomVButton->sizePolicy().hasHeightForWidth());
        zoomVButton->setSizePolicy(sizePolicy1);
        zoomVButton->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/icons/expand_v_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/res/icons/expand_v_on.png"), QSize(), QIcon::Normal, QIcon::On);
        zoomVButton->setIcon(icon2);
        zoomVButton->setIconSize(QSize(20, 20));
        zoomVButton->setCheckable(true);
        zoomVButton->setChecked(true);

        verticalLayout->addWidget(zoomVButton);

        rescaleButton = new QToolButton(buttonFrame);
        rescaleButton->setObjectName(QString::fromUtf8("rescaleButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/icons/size_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        rescaleButton->setIcon(icon3);
        rescaleButton->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(rescaleButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(buttonFrame);


        verticalLayout_6->addLayout(horizontalLayout);

        rtText = new RtDataText(PageRtData);
        rtText->setObjectName(QString::fromUtf8("rtText"));

        verticalLayout_6->addWidget(rtText);


        retranslateUi(PageRtData);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(PageRtData);
    } // setupUi

    void retranslateUi(QWidget *PageRtData)
    {
        PageRtData->setWindowTitle(QCoreApplication::translate("PageRtData", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(cellBarGraphTab), QCoreApplication::translate("PageRtData", "Cells Voltage", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(auxBarGraphTab), QCoreApplication::translate("PageRtData", "Temperatures LTC", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(expBarGraphTab), QCoreApplication::translate("PageRtData", "Temperatures Expansion", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ivLCGraphTab), QCoreApplication::translate("PageRtData", "IV Graph", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(cellGraphTab), QCoreApplication::translate("PageRtData", "Cell Graph", nullptr));
#if QT_CONFIG(tooltip)
        tempShowBMSBox->setToolTip(QCoreApplication::translate("PageRtData", "Show MOSFET temperature", nullptr));
#endif // QT_CONFIG(tooltip)
        tempShowBMSBox->setText(QCoreApplication::translate("PageRtData", "BMS", nullptr));
#if QT_CONFIG(tooltip)
        tempShowBatteryBox->setToolTip(QCoreApplication::translate("PageRtData", "Show motor temperature", nullptr));
#endif // QT_CONFIG(tooltip)
        tempShowBatteryBox->setText(QCoreApplication::translate("PageRtData", "Battery", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tempGraphTab), QCoreApplication::translate("PageRtData", "Temp Graph", nullptr));
#if QT_CONFIG(tooltip)
        autoscaleButton->setToolTip(QCoreApplication::translate("PageRtData", "Autoscale plots with incoming samples", nullptr));
#endif // QT_CONFIG(tooltip)
        autoscaleButton->setText(QString());
#if QT_CONFIG(tooltip)
        zoomHButton->setToolTip(QCoreApplication::translate("PageRtData", "Enable horizontal zoom", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomHButton->setText(QString());
#if QT_CONFIG(tooltip)
        zoomVButton->setToolTip(QCoreApplication::translate("PageRtData", "Enable vertical zoom", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomVButton->setText(QString());
#if QT_CONFIG(tooltip)
        rescaleButton->setToolTip(QCoreApplication::translate("PageRtData", "Rescale plots to fit", nullptr));
#endif // QT_CONFIG(tooltip)
        rescaleButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageRtData: public Ui_PageRtData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGERTDATA_H
