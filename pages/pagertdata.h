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

#ifndef PAGERTDATA_H
#define PAGERTDATA_H

#include <QWidget>
#include <QVector>
#include <QTimer>
#include "bmsinterface.h"
#include "ui_pagertdata.h"

namespace Ui {
class PageRtData;
}

class PageRtData : public QWidget
{
    Q_OBJECT

public:
    explicit PageRtData(QWidget *parent = 0);
    ~PageRtData();

    BMSInterface *bms() const;
    void setDieBieMS(BMSInterface *dieBieMS);

private slots:
    void timerSlot();
    void valuesReceived(BMS_VALUES values);
    void cellsReceived(int cellCount, QVector<double> cellVoltageArray);
    void auxReceived(int auxCount, QVector<double> auxVoltageArray);
    void expTempReceived(int expTempCount, QVector<double> expTempVoltageArray);

    void on_zoomHButton_toggled(bool checked);
    void on_zoomVButton_toggled(bool checked);
    void on_rescaleButton_clicked();
    void on_tempShowBMSBox_toggled(bool checked);
    void on_tempShowBatteryBox_toggled(bool checked);
    //void on_csvChooseDirButton_clicked();
    //void on_csvEnableLogBox_clicked(bool checked);
    //void on_csvHelpButton_clicked();

private:
    Ui::PageRtData *ui;
    BMSInterface *mDieBieMS;
    QTimer *mTimer;

    QVector<double> mPackVoltage;
    QVector<double> mLCLoadVoltage;
    QVector<double> mLCLoadCurrent;
    QVector<double> mHCLoadVoltage;
    QVector<double> mHCLoadCurrent;
    QVector<double> mChargerVoltage;
    QVector<double> mAuxVoltage;
    QVector<double> mAuxCurrent;
    QVector<double> mCellVHigh;
    QVector<double> mCellVAverage;
    QVector<double> mCellVLow;
    QVector<double> mTempBMSHigh;
    QVector<double> mTempBMSAverage;
    QVector<double> mTempBMSLow;
    QVector<double> mTempBattHigh;
    QVector<double> mTempBattAverage;
    QVector<double> mTempBattLow;
    QVector<double> mHumidity;
    QVector<double> mSeconds;

    double mSecondCounter;
    qint64 mLastUpdateTime;

    bool mUpdateValPlot;

    QCPBarsGroup *group;
    QCPBars *barsNormal;
    QCPBars *barsBalance;
    QCPBarsGroup *group2;
    QCPBarsGroup *group3;
    QCPBars *barsTemperature;
    QCPBars *ExpBarsTemperature;

    void appendDoubleAndTrunc(QVector<double> *vec, double num, int maxSize);
    void updateZoom();

};

#endif // PAGERTDATA_H
