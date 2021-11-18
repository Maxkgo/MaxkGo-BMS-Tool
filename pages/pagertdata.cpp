/*
    Original copyright 2018 Benjamin Vedder benjamin@vedder.se and the VESC Tool project ( https://github.com/vedderb/vesc_tool )

    Forked to:
    Copyright 2018 Danny Bokma github@diebie.nl (https://github.com/DieBieEngineering/DieBieMS-Tool)

    Now forked to:
    Copyright 2019 - 2020 Kevin Dionne kevin.dionne@ennoid.me (https://github.com/EnnoidMe/ENNOID-BMS-Tool)

    This file is part of ENNOID-BMS Tool.

    ENNOID-BMS Tool is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    ENNOID-BMS Tool is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "pagertdata.h"

PageRtData::PageRtData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageRtData)
{
    ui->setupUi(this);
    layout()->setContentsMargins(0, 0, 0, 0);
    mDieBieMS = 0;

    mTimer = new QTimer(this);
    mTimer->start(20);

    mSecondCounter = 0.0;
    mLastUpdateTime = 0;

    mUpdateValPlot = false;

    ui->ivLCGraph->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    ui->cellGraph->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    ui->tempGraph->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

    // LC IVGraph
    int graphIndex = 0;
    ui->ivLCGraph->addGraph();
    ui->ivLCGraph->graph(graphIndex)->setPen(QPen(Qt::red));
    ui->ivLCGraph->graph(graphIndex)->setName("Pack Voltage");
    graphIndex++;

    ui->ivLCGraph->addGraph();
    ui->ivLCGraph->graph(graphIndex)->setPen(QPen(Qt::darkGreen));
    ui->ivLCGraph->graph(graphIndex)->setName("Load Voltage");
    graphIndex++;

    ui->ivLCGraph->addGraph(ui->ivLCGraph->xAxis, ui->ivLCGraph->yAxis2);
    ui->ivLCGraph->graph(graphIndex)->setPen(QPen(Qt::green));
    ui->ivLCGraph->graph(graphIndex)->setName("Current");
    graphIndex++;

    /* HC IVGraph
    graphIndex = 0;
    ui->ivHCGraph->addGraph();
    ui->ivHCGraph->graph(graphIndex)->setPen(QPen(Qt::blue));
    ui->ivHCGraph->graph(graphIndex)->setName("HC Voltage");
    graphIndex++;

    ui->ivHCGraph->addGraph(ui->ivHCGraph->xAxis, ui->ivHCGraph->yAxis2);
    ui->ivHCGraph->graph(graphIndex)->setPen(QPen(Qt::magenta));
    ui->ivHCGraph->graph(graphIndex)->setName("HC Current");
    graphIndex++;
*/
    // Cell voltage graph
    graphIndex = 0;
    ui->cellGraph->addGraph();
    ui->cellGraph->graph(graphIndex)->setPen(QPen(Qt::green));
    ui->cellGraph->graph(graphIndex)->setName("Cell high");
    graphIndex++;

    ui->cellGraph->addGraph();
    ui->cellGraph->graph(graphIndex)->setPen(QPen(Qt::blue));
    ui->cellGraph->graph(graphIndex)->setName("Cell average");
    graphIndex++;

    ui->cellGraph->addGraph();
    ui->cellGraph->graph(graphIndex)->setPen(QPen(Qt::red));
    ui->cellGraph->graph(graphIndex)->setName("Cell low");
    graphIndex++;

    // Temperature graph
    graphIndex = 0;
    ui->tempGraph->addGraph();
    ui->tempGraph->graph(graphIndex)->setPen(QPen(Qt::blue));
    ui->tempGraph->graph(graphIndex)->setName("BMS high");
    graphIndex++;

    ui->tempGraph->addGraph();
    ui->tempGraph->graph(graphIndex)->setPen(QPen(Qt::darkBlue));
    ui->tempGraph->graph(graphIndex)->setName("BMS Average");
    graphIndex++;

    ui->tempGraph->addGraph();
    ui->tempGraph->graph(graphIndex)->setPen(QPen(Qt::darkYellow));
    ui->tempGraph->graph(graphIndex)->setName("BMS Low");
    graphIndex++;

    ui->tempGraph->addGraph();
    ui->tempGraph->graph(graphIndex)->setPen(QPen(Qt::green));
    ui->tempGraph->graph(graphIndex)->setName("Battery high");
    graphIndex++;

    ui->tempGraph->addGraph();
    ui->tempGraph->graph(graphIndex)->setPen(QPen(Qt::darkGreen));
    ui->tempGraph->graph(graphIndex)->setName("Battery Average");
    graphIndex++;

    ui->tempGraph->addGraph();
    ui->tempGraph->graph(graphIndex)->setPen(QPen(Qt::darkRed));
    ui->tempGraph->graph(graphIndex)->setName("Battery Low");
    graphIndex++;

    QFont legendFont = font();
    legendFont.setPointSize(9);

    //LC Graph
    ui->ivLCGraph->legend->setVisible(true);
    ui->ivLCGraph->legend->setFont(legendFont);
    ui->ivLCGraph->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignRight|Qt::AlignBottom);
    ui->ivLCGraph->legend->setBrush(QBrush(QColor(255,255,255,230)));
    ui->ivLCGraph->xAxis->setLabel("Seconds (s)");
    ui->ivLCGraph->yAxis->setLabel("Voltage (V)");
    ui->ivLCGraph->yAxis2->setLabel("Current (A)");
    ui->ivLCGraph->yAxis->setRange(0, 60);
    ui->ivLCGraph->yAxis2->setRange(-5, 5);
    ui->ivLCGraph->yAxis2->setVisible(true);


    //Cell voltage Graph
    ui->cellGraph->legend->setVisible(true);
    ui->cellGraph->legend->setFont(legendFont);
    ui->cellGraph->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignRight|Qt::AlignBottom);
    ui->cellGraph->legend->setBrush(QBrush(QColor(255,255,255,230)));
    ui->cellGraph->xAxis->setLabel("Seconds (s)");
    ui->cellGraph->yAxis->setLabel("Voltage (V)");
    ui->cellGraph->yAxis->setRange(0, 4.2);

    //Temperature Graph
    ui->tempGraph->legend->setVisible(true);
    ui->tempGraph->legend->setFont(legendFont);
    ui->tempGraph->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignRight|Qt::AlignBottom);
    ui->tempGraph->legend->setBrush(QBrush(QColor(255,255,255,230)));
    ui->tempGraph->xAxis->setLabel("Seconds (s)");
    ui->tempGraph->yAxis->setLabel("Temperature (\u00B0C)");
    ui->tempGraph->yAxis->setRange(0, 60);

    // Cell bar graph
    group = new QCPBarsGroup(ui->cellBarGraph);
    barsNormal = new QCPBars(ui->cellBarGraph->xAxis, ui->cellBarGraph->yAxis);
    barsBalance = new QCPBars(ui->cellBarGraph->xAxis, ui->cellBarGraph->yAxis);

    barsNormal->setBrush(QColor(0, 255, 0, 50));
    barsNormal->setPen(QColor(0, 211, 56));
    barsNormal->setWidth(0.9);
    barsNormal->setBarsGroup(group);

    barsBalance->setBrush(QColor(0, 0, 255, 50));
    barsBalance->setPen(QColor(0, 211, 56));
    barsBalance->setWidth(0.9);
    barsBalance->setBarsGroup(group);

    barsBalance->moveAbove(barsNormal);

    ui->cellBarGraph->xAxis->setRange(1, 12);
    ui->cellBarGraph->yAxis->setRange(2.5, 4.15);
    ui->cellBarGraph->yAxis->setLabel("Voltage (V)");
    ui->cellBarGraph->xAxis->setTickLabelRotation(85);
    ui->cellBarGraph->xAxis->setSubTicks(false);
    ui->cellBarGraph->xAxis->setTickLength(0, 5);

    // Aux bar graph
    group2 = new QCPBarsGroup(ui->auxBarGraph);
    barsTemperature = new QCPBars(ui->auxBarGraph->xAxis, ui->auxBarGraph->yAxis);

    barsTemperature->setBrush(QColor(0, 255, 0, 50));
    barsTemperature->setPen(QColor(0, 211, 56));
    barsTemperature->setWidth(0.9);
    barsTemperature->setBarsGroup(group2);

    ui->auxBarGraph->xAxis->setRange(1, 9);
    ui->auxBarGraph->yAxis->setRange(-40, 75);
    ui->auxBarGraph->yAxis->setLabel("Temperature (°C)");
    ui->auxBarGraph->xAxis->setTickLabelRotation(85);
    ui->auxBarGraph->xAxis->setSubTicks(false);
    ui->auxBarGraph->xAxis->setTickLength(0, 5);

    // Expansion bar graph
    group3 = new QCPBarsGroup(ui->expBarGraph);
    ExpBarsTemperature = new QCPBars(ui->expBarGraph->xAxis, ui->expBarGraph->yAxis);

    ExpBarsTemperature->setBrush(QColor(0, 255, 0, 50));
    ExpBarsTemperature->setPen(QColor(0, 211, 56));
    ExpBarsTemperature->setWidth(0.9);
    ExpBarsTemperature->setBarsGroup(group3);

    ui->expBarGraph->xAxis->setRange(1, 8);
    ui->expBarGraph->yAxis->setRange(-40, 75);
    ui->expBarGraph->yAxis->setLabel("Temperature (°C)");
    ui->expBarGraph->xAxis->setTickLabelRotation(85);
    ui->expBarGraph->xAxis->setSubTicks(false);
    ui->expBarGraph->xAxis->setTickLength(0, 5);

    connect(mTimer, SIGNAL(timeout()),this, SLOT(timerSlot()));
}

PageRtData::~PageRtData()
{
    delete ui;
}

BMSInterface *PageRtData::bms() const
{
    return mDieBieMS;
}

void PageRtData::setDieBieMS(BMSInterface *dieBieMS)
{
    mDieBieMS = dieBieMS;

    if (mDieBieMS) {
        connect(mDieBieMS->commands(), SIGNAL(valuesReceived(BMS_VALUES)),this, SLOT(valuesReceived(BMS_VALUES)));
        connect(mDieBieMS->commands(), SIGNAL(cellsReceived(int,QVector<double>)),this, SLOT(cellsReceived(int,QVector<double>)));
        connect(mDieBieMS->commands(), SIGNAL(auxReceived(int,QVector<double>)),this, SLOT(auxReceived(int,QVector<double>)));
        connect(mDieBieMS->commands(), SIGNAL(expTempReceived(int,QVector<double>)),this, SLOT(expTempReceived(int,QVector<double>)));
    }
}

void PageRtData::timerSlot()
{
    if (mUpdateValPlot) {
        int dataSize = mPackVoltage.size();

        QVector<double> xAxis(dataSize);
        for (int i = 0;i < mSeconds.size();i++) {
            xAxis[i] = mSeconds[i];
        }

        // Current and duty-plot
        int graphIndex = 0;
        ui->ivLCGraph->graph(graphIndex++)->setData(xAxis, mPackVoltage);
        ui->ivLCGraph->graph(graphIndex++)->setData(xAxis, mLCLoadVoltage);
        ui->ivLCGraph->graph(graphIndex++)->setData(xAxis, mLCLoadCurrent);

        graphIndex = 0;
        ui->cellGraph->graph(graphIndex++)->setData(xAxis, mCellVHigh);
        ui->cellGraph->graph(graphIndex++)->setData(xAxis, mCellVAverage);
        ui->cellGraph->graph(graphIndex++)->setData(xAxis, mCellVLow);

        graphIndex = 0;
        ui->tempGraph->graph(graphIndex++)->setData(xAxis, mTempBMSHigh);
        ui->tempGraph->graph(graphIndex++)->setData(xAxis, mTempBMSAverage);
        ui->tempGraph->graph(graphIndex++)->setData(xAxis, mTempBMSLow);
        ui->tempGraph->graph(graphIndex++)->setData(xAxis, mTempBattHigh);
        ui->tempGraph->graph(graphIndex++)->setData(xAxis, mTempBattAverage);
        ui->tempGraph->graph(graphIndex++)->setData(xAxis, mTempBattLow);

        if (ui->autoscaleButton->isChecked()) {
            ui->ivLCGraph->rescaleAxes();
            ui->cellGraph->rescaleAxes();
            ui->tempGraph->rescaleAxes();
        }

        ui->ivLCGraph->replot();
        ui->cellGraph->replot();
        ui->tempGraph->replot();
        ui->cellBarGraph->replot();
        ui->auxBarGraph->replot();
        ui->expBarGraph->replot();

        mUpdateValPlot = false;
    }
}

void PageRtData::valuesReceived(BMS_VALUES values)
{
    ui->rtText->setValues(values);

    const int maxS = 500;

    appendDoubleAndTrunc(&mPackVoltage, values.packVoltage, maxS);
    appendDoubleAndTrunc(&mLCLoadVoltage, values.loadLCVoltage, maxS);
    appendDoubleAndTrunc(&mLCLoadCurrent, values.loadLCCurrent, maxS);
    appendDoubleAndTrunc(&mHCLoadVoltage, values.loadHCVoltage, maxS);
    appendDoubleAndTrunc(&mHCLoadCurrent, values.loadHCCurrent, maxS);
    appendDoubleAndTrunc(&mChargerVoltage, values.chargerVoltage, maxS);
    appendDoubleAndTrunc(&mAuxVoltage, values.auxVoltage, maxS);
    appendDoubleAndTrunc(&mAuxCurrent, values.auxCurrent, maxS);

    appendDoubleAndTrunc(&mCellVHigh, values.cVHigh, maxS);
    appendDoubleAndTrunc(&mCellVAverage, values.cVAverage, maxS);
    appendDoubleAndTrunc(&mCellVLow, values.cVLow, maxS);

    appendDoubleAndTrunc(&mTempBMSHigh, values.tempBMSHigh, maxS);
    appendDoubleAndTrunc(&mTempBMSAverage, values.tempBMSAverage, maxS);
    appendDoubleAndTrunc(&mTempBMSLow, values.tempBMSLow, maxS);
    appendDoubleAndTrunc(&mTempBattHigh, values.tempBattHigh, maxS);
    appendDoubleAndTrunc(&mTempBattAverage, values.tempBattAverage, maxS);
    appendDoubleAndTrunc(&mTempBattLow, values.tempBattLow, maxS);
    appendDoubleAndTrunc(&mHumidity, values.humidity, maxS);


    qint64 tNow = QDateTime::currentMSecsSinceEpoch();

    double elapsed = (double)(tNow - mLastUpdateTime) / 1000.0;
    if (elapsed > 1.0) {
        elapsed = 1.0;
    }

    mSecondCounter += elapsed;

    appendDoubleAndTrunc(&mSeconds, mSecondCounter, maxS);

    mLastUpdateTime = tNow;

    mUpdateValPlot = true;
}

void PageRtData::cellsReceived(int cellCount, QVector<double> cellVoltageArray){
    QVector<double> dataxNew;
    dataxNew.clear();
    QVector<double> datayNormal;
    datayNormal.clear();
    QVector<double> datayBalance;
    datayBalance.clear();
    QVector<QString> labels;
    int indexPointer;

    double cellHardUnder = mDieBieMS->bmsConfig()->getParamDouble("cellHardUnderVoltage");
    double cellHardOver  = mDieBieMS->bmsConfig()->getParamDouble("cellHardOverVoltage");

    for(indexPointer = 0; indexPointer < cellCount; indexPointer++){
        dataxNew.append(indexPointer + 1);

        if(cellVoltageArray[indexPointer] < 0.0){
            datayNormal.append(0.0);
            datayBalance.append(fabs(cellVoltageArray[indexPointer]));
        }else{
            datayNormal.append(fabs(cellVoltageArray[indexPointer]));
            datayBalance.append(0.0);
        }

        QString voltageString = QStringLiteral("%1V (C").arg(fabs(cellVoltageArray[indexPointer]), 0, 'f',3);
        labels.append(voltageString + QString::number(indexPointer+1) + ")");
    }

    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(dataxNew, labels);

    ui->cellBarGraph->xAxis->setTicker(textTicker);
    ui->cellBarGraph->xAxis->setRange(0.5, indexPointer + 0.5);
    ui->cellBarGraph->yAxis->setRange(cellHardUnder, cellHardOver);
    barsNormal->setData(dataxNew, datayNormal);
    barsBalance->setData(dataxNew, datayBalance);
}

void PageRtData::auxReceived(int auxCount, QVector<double> auxVoltageArray){
    QVector<double> dataxNew;
    dataxNew.clear();
    QVector<double> datayNormal;
    datayNormal.clear();
    QVector<QString> labels;
    int indexPointer;

    for(indexPointer = 0; indexPointer < auxCount; indexPointer++){
        dataxNew.append(indexPointer + 1);

        if(auxVoltageArray[indexPointer] < -50.0){
            datayNormal.append(0.0);
        }else{
            datayNormal.append(auxVoltageArray[indexPointer]);
        }

        QString voltageString = QStringLiteral("%1°C (TH").arg(auxVoltageArray[indexPointer], 0, 'f',3);
        labels.append(voltageString + QString::number(indexPointer+1) + ")");
    }

    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(dataxNew, labels);

    ui->auxBarGraph->xAxis->setTicker(textTicker);
    ui->auxBarGraph->xAxis->setRange(0.5, indexPointer + 0.5);
    ui->auxBarGraph->yAxis->setRange(-40, 75);
    barsTemperature->setData(dataxNew, datayNormal);
}

void PageRtData::expTempReceived(int expTempCount, QVector<double> expTempVoltageArray){
    QVector<double> dataxNew;
    dataxNew.clear();
    QVector<double> datayNormal;
    datayNormal.clear();
    QVector<QString> labels;
    int indexPointer;

    for(indexPointer = 0; indexPointer < expTempCount; indexPointer++){
        dataxNew.append(indexPointer + 1);

        if(expTempVoltageArray[indexPointer] < -50.0){
            datayNormal.append(0.0);
        }else{
            datayNormal.append(expTempVoltageArray[indexPointer]);
        }

        QString voltageString = QStringLiteral("%1°C (T").arg(expTempVoltageArray[indexPointer], 0, 'f',3);
        labels.append(voltageString + QString::number(indexPointer) + ")");
    }

    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(dataxNew, labels);

    ui->expBarGraph->xAxis->setTicker(textTicker);
    ui->expBarGraph->xAxis->setRange(0.5, indexPointer + 0.5);
    ui->expBarGraph->yAxis->setRange(-40, 75);
    ExpBarsTemperature->setData(dataxNew, datayNormal);
}

void PageRtData::appendDoubleAndTrunc(QVector<double> *vec, double num, int maxSize)
{
    vec->append(num);

    if(vec->size() > maxSize) {
        vec->remove(0, vec->size() - maxSize);
    }
}

void PageRtData::updateZoom()
{
    Qt::Orientations plotOrientations = (Qt::Orientations)
            ((ui->zoomHButton->isChecked() ? Qt::Horizontal : 0) |
             (ui->zoomVButton->isChecked() ? Qt::Vertical : 0));

    ui->ivLCGraph->axisRect()->setRangeZoom(plotOrientations);
    ui->cellGraph->axisRect()->setRangeZoom(plotOrientations);
    ui->tempGraph->axisRect()->setRangeZoom(plotOrientations);
}

void PageRtData::on_zoomHButton_toggled(bool checked)
{
    (void)checked;
    updateZoom();
}

void PageRtData::on_zoomVButton_toggled(bool checked)
{
    (void)checked;
    updateZoom();
}

void PageRtData::on_rescaleButton_clicked()
{
    ui->ivLCGraph->rescaleAxes();
    ui->cellGraph->rescaleAxes();
    ui->tempGraph->rescaleAxes();

    ui->ivLCGraph->replot();
    ui->cellGraph->replot();
    ui->tempGraph->replot();
}

void PageRtData::on_tempShowBMSBox_toggled(bool checked)
{
    ui->tempGraph->graph(0)->setVisible(checked);
    ui->tempGraph->graph(1)->setVisible(checked);
}

void PageRtData::on_tempShowBatteryBox_toggled(bool checked)
{
    ui->tempGraph->graph(2)->setVisible(checked);
    ui->tempGraph->graph(3)->setVisible(checked);
}
/*
void PageRtData::on_csvChooseDirButton_clicked()
{
    ui->csvFileEdit->setText(QFileDialog::getExistingDirectory(this,
                                                               "Choose CSV output directory"));
}

void PageRtData::on_csvEnableLogBox_clicked(bool checked)
{
    if (checked) {
        if (mDieBieMS) {
            mDieBieMS->openRtLogFile(ui->csvFileEdit->text());
        }
    } else {
        mDieBieMS->closeRtLogFile();
    }
}

void PageRtData::on_csvHelpButton_clicked()
{
    HelpDialog::showHelp(this, mDieBieMS->infoConfig(), "help_rt_logging");
}
*/
