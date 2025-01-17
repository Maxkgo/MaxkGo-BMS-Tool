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

#ifndef COMMANDS_H
#define COMMANDS_H

#include <QObject>
#include <QTimer>
#include "vbytearray.h"
#include "datatypes.h"
#include "packet.h"
#include "configparams.h"

class Commands : public QObject
{
    Q_OBJECT
public:
    explicit Commands(QObject *parent = 0);

    void setLimitedMode(bool is_limited);
    Q_INVOKABLE bool isLimitedMode();
    Q_INVOKABLE void setSendCan(bool sendCan, int id = -1);
    Q_INVOKABLE bool getSendCan();
    Q_INVOKABLE void setCanSendId(unsigned int id);
    Q_INVOKABLE int getCanSendId();
    void setbmsConfig(ConfigParams *bmsConfig);
    Q_INVOKABLE void startFirmwareUpload(QByteArray &newFirmware, bool isBootloader = false);
    Q_INVOKABLE double getFirmwareUploadProgress();
    Q_INVOKABLE QString getFirmwareUploadStatus();
    Q_INVOKABLE void cancelFirmwareUpload();
    void checkbmsConfig();
    void storeBMSConfig();
    Q_INVOKABLE void emitEmptyValues();
    Q_INVOKABLE void emitEmptySetupValues();


signals:
    void dataToSend(QByteArray &data);

    void fwVersionReceived(int major, int minor, QString hw, QByteArray uuid);
    void ackReceived(QString ackType);
    void valuesReceived(BMS_VALUES values);
    void cellsReceived(int cellCount, QVector<double> cellVoltageArray);
    void auxReceived(int auxCount, QVector<double> auxVoltageArray);
    void expTempReceived(int expTempCount, QVector<double> expTempVoltageArray);
    void printReceived(QString str);
    void rotorPosReceived(double pos);
    void bmsConfigCheckResult(QStringList paramsNotSet);
    void valuesSetupReceived(BMS_VALUES values);
    void pingCanRx(QVector<int> devs, bool isTimeout);

public slots:
    void processPacket(QByteArray data);

    void getFwVersion();
    void getValues();
    void getCells();
    void getAux();
    void getExpansionTemp();
    void sendTerminalCmd(QString cmd);
    void setDetect(disp_pos_mode mode);
    void samplePrint(debug_sampling_mode mode, int sample_len, int dec);
    void getBMSconf();
    void getBMSconfDefault();
    void setBMSconf(bool check = true);
    void reboot();
    void sendAlive();
    void pairNrf(int ms);
    void pingCan();

private slots:
    void timerSlot();

private:
    void emitData(QByteArray data);
    void firmwareUploadUpdate(bool isTimeout);
    QString opStateToStr(OperationalStateTypedef fault);
    QString faultStateToStr(bms_fault_code fault);

    QTimer *mTimer;
    bool mSendCan;
    int mCanId;
    bool mIsLimitedMode;

    // FW upload state
    QByteArray mNewFirmware;
    bool mFirmwareIsUploading;
    int mFirmwareState;
    int mFimwarePtr;
    int mFirmwareTimer;
    int mFirmwareRetries;
    bool mFirmwareIsBootloader;
    QString mFirmwareUploadStatus;

    ConfigParams *mbmsConfig;
    ConfigParams mbmsConfigLast;
    bool mCheckNextbmsConfig;

    int mTimeoutCount;
    int mTimeoutFwVer;
    int mTimeoutBMSconf;
    int mTimeoutValues;
    int mTimeoutCells;
    int mTimeoutAux;
    int mTimeoutExp;
    int mTimeoutPingCan;
};

#endif // COMMANDS_H
