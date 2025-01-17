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

#include "configparam.h"

ConfigParam::ConfigParam()
{
    reset();
}

void ConfigParam::reset()
{
    type = CFG_T_UNDEFINED;
    longName = "none";
    description = "TODO";
    cDefine.clear();

    valDouble = 0.0;
    valInt = 0;
    maxDouble = 99.0;
    minDouble = 0.0;
    stepDouble = 1.0;
    editorDecimalsDouble = 2;
    editorScale = 1.0;
    maxInt = 99;
    minInt = 0;
    stepInt = 1;
    vTx = VESC_TX_UNDEFINED;
    vTxDoubleScale = 1.0;
    suffix = "";
    enumNames.clear();
    editAsPercentage = false;
    showDisplay = false;
    transmittable = true;
}

void ConfigParam::setInt(int val, int max, int min, int step)
{
    type = CFG_T_INT;
    valInt = val;
    maxInt = max;
    minInt = min;
    stepInt = step;
}

void ConfigParam::setDouble(double val, double max, double min, double step, int decimals)
{
    type = CFG_T_DOUBLE;
    valDouble = val;
    maxDouble = max;
    minDouble = min;
    stepDouble = step;
    editorDecimalsDouble = decimals;
}

void ConfigParam::setDoubleTx(VESC_TX_T tx, double scale)
{
    vTx = tx;
    vTxDoubleScale = scale;
}

void ConfigParam::setEnum(int val, QStringList names)
{
    type = CFG_T_ENUM;
    valInt = val;
    enumNames = names;
}

void ConfigParam::setString(QString val)
{
    type = CFG_T_QSTRING;
    valString = val;
}

void ConfigParam::setBool(bool val)
{
    type = CFG_T_BOOL;
    valInt = val;
}
