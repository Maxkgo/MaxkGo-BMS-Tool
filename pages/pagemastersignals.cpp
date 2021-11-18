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

#include "pagemastersignals.h"
#include "ui_pagemastersignals.h"

PageMasterSignals::PageMasterSignals(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageMasterSignals)
{
    ui->setupUi(this);
    mDieBieMS = 0;
}

PageMasterSignals::~PageMasterSignals()
{
    delete ui;
}

BMSInterface *PageMasterSignals::bms() const
{
    return mDieBieMS;
}

void PageMasterSignals::setDieBieMS(BMSInterface *dieBieMS)
{
    mDieBieMS = dieBieMS;

    if (mDieBieMS) {
        ui->signalsTab->addRowSeparator(tr("Discharge Current"));
        ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "shuntLCFactor");
        ui->signalsTab->addRowSeparator(tr("Pack voltage"));
        ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "voltageLCFactor");
        ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "voltageLCOffset");
        ui->signalsTab->addRowSeparator(tr("Load voltage"));
        ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "loadVoltageFactor");
        ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "loadVoltageOffset");
        ui->signalsTab->addRowSeparator(tr("Charger voltage"));
        ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "chargerVoltageFactor");
        ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "chargerVoltageOffset");
 //       ui->signalsTab->addRowSeparator(tr("High current path"));
   //     ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "HCLoadVoltageDataSource");
   //     ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "HCLoadCurrentDataSource");
   //     ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "shuntHCFactor");
    //    ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "shuntHCOffset");
        ui->signalsTab->addRowSeparator(tr("Data source"));
        ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "packVoltageDataSource");
        ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "packCurrentDataSource");
        ui->signalsTab->addRowSeparator(tr("Buzzer control"));
        ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "buzzerSignalSource");
        ui->signalsTab->addParamRow(mDieBieMS->bmsConfig(), "buzzerPersistent");
    }
}
