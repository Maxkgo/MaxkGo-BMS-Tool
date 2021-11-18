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

#ifndef DATATYPES_H
#define DATATYPES_H

#include <QObject>
#include <QString>
#include <QStringList>
#include <QVector>
#include <stdint.h>

typedef struct {
    QString name;
    QString systemPath;
    bool isVesc;
} VSerialInfo_t;

typedef enum {
    CFG_T_UNDEFINED = 0,
    CFG_T_DOUBLE,
    CFG_T_INT,
    CFG_T_QSTRING,
    CFG_T_ENUM,
    CFG_T_BOOL
} CFG_T;

typedef enum {
    VESC_TX_UNDEFINED = 0,
    VESC_TX_UINT8,
    VESC_TX_INT8,
    VESC_TX_UINT16,
    VESC_TX_INT16,
    VESC_TX_UINT32,
    VESC_TX_INT32,
    VESC_TX_DOUBLE16,
    VESC_TX_DOUBLE32,
    VESC_TX_DOUBLE32_AUTO
} VESC_TX_T;

typedef enum {
    FAULT_CODE_NONE = 0,
    FAULT_CODE_PACK_OVER_VOLTAGE,
    FAULT_CODE_PACK_UNDER_VOLTAGE,
    FAULT_CODE_LOAD_OVER_VOLTAGE,
    FAULT_CODE_LOAD_UNDER_VOLTAGE,
    FAULT_CODE_CHARGER_OVER_VOLTAGE,
    FAULT_CODE_CHARGER_UNDER_VOLTAGE,
    FAULT_CODE_CELL_HARD_OVER_VOLTAGE,
    FAULT_CODE_CELL_HARD_UNDER_VOLTAGE,
    FAULT_CODE_CELL_SOFT_OVER_VOLTAGE,
    FAULT_CODE_CELL_SOFT_UNDER_VOLTAGE,
    FAULT_CODE_MAX_UVP_OVP_ERRORS,
    FAULT_CODE_MAX_UVT_OVT_ERRORS,
    FAULT_CODE_OVER_CURRENT,
    FAULT_CODE_OVER_TEMP_BMS,
    FAULT_CODE_UNDER_TEMP_BMS,
    FAULT_CODE_DISCHARGE_OVER_TEMP_CELLS,
    FAULT_CODE_DISCHARGE_UNDER_TEMP_CELLS,
    FAULT_CODE_CHARGE_OVER_TEMP_CELLS,
    FAULT_CODE_CHARGE_UNDER_TEMP_CELLS,
    FAULT_CODE_PRECHARGE_TIMEOUT,
    FAULT_CODE_DISCHARGE_RETRY,
    FAULT_CODE_CHARGE_RETRY,
    FAULT_CODE_CHARGER_DISCONNECT
} bms_fault_code;

typedef enum {
    DISP_POS_MODE_NONE = 0,
    DISP_POS_MODE_INDUCTANCE,
    DISP_POS_MODE_OBSERVER,
    DISP_POS_MODE_ENCODER,
    DISP_POS_MODE_PID_POS,
    DISP_POS_MODE_PID_POS_ERROR,
    DISP_POS_MODE_ENCODER_OBSERVER_ERROR
} disp_pos_mode;

struct MC_VALUES {
    Q_GADGET

    Q_PROPERTY(double v_in MEMBER v_in)
    Q_PROPERTY(double temp_mos MEMBER temp_mos)
    Q_PROPERTY(double temp_motor MEMBER temp_motor)
    Q_PROPERTY(double current_motor MEMBER current_motor)
    Q_PROPERTY(double current_in MEMBER current_in)
    Q_PROPERTY(double id MEMBER id)
    Q_PROPERTY(double iq MEMBER iq)
    Q_PROPERTY(double rpm MEMBER rpm)
    Q_PROPERTY(double duty_now MEMBER duty_now)
    Q_PROPERTY(double amp_hours MEMBER amp_hours)
    Q_PROPERTY(double amp_hours_charged MEMBER amp_hours_charged)
    Q_PROPERTY(double watt_hours MEMBER watt_hours)
    Q_PROPERTY(double watt_hours_charged MEMBER watt_hours_charged)
    Q_PROPERTY(int tachometer MEMBER tachometer)
    Q_PROPERTY(int tachometer_abs MEMBER tachometer_abs)
    Q_PROPERTY(double position MEMBER position)
    //Q_PROPERTY(mc_fault_code fault_code MEMBER fault_code)
    Q_PROPERTY(QString fault_str MEMBER fault_str)

public:
    MC_VALUES() {
        v_in = 0.0;
        temp_mos = 0.0;
        temp_mos_1 = 0.0;
        temp_mos_2 = 0.0;
        temp_mos_3 = 0.0;
        temp_motor = 0.0;
        current_motor = 0.0;
        current_in = 0.0;
        id = 0.0;
        iq = 0.0;
        rpm = 0.0;
        duty_now = 0.0;
        amp_hours = 0.0;
        amp_hours_charged = 0.0;
        watt_hours = 0.0;
        watt_hours_charged = 0.0;
        tachometer = 0;
        tachometer_abs = 0;
        position = 0.0;
        //fault_code = FAULT_CODE_NONE;
        vesc_id = 0;
    }

    double v_in;
    double temp_mos;
    double temp_mos_1;
    double temp_mos_2;
    double temp_mos_3;
    double temp_motor;
    double current_motor;
    double current_in;
    double id;
    double iq;
    double rpm;
    double duty_now;
    double amp_hours;
    double amp_hours_charged;
    double watt_hours;
    double watt_hours_charged;
    int tachometer;
    int tachometer_abs;
    double position;
    //mc_fault_code fault_code;
    int vesc_id;
    QString fault_str;
};

Q_DECLARE_METATYPE(MC_VALUES)

struct BMS_VALUES {
    Q_GADGET

    Q_PROPERTY(double packVoltage MEMBER packVoltage)
    Q_PROPERTY(double packCurrent MEMBER packCurrent)
    Q_PROPERTY(int soC MEMBER soC)
    Q_PROPERTY(double cVHigh MEMBER cVHigh)
    Q_PROPERTY(double cVAverage MEMBER cVAverage)
    Q_PROPERTY(double cVLow MEMBER cVLow)
    Q_PROPERTY(double cVMisMatch MEMBER cVMisMatch)
    Q_PROPERTY(double loadLCVoltage MEMBER loadLCVoltage)
    Q_PROPERTY(double loadLCCurrent MEMBER loadLCCurrent)
    Q_PROPERTY(double loadHCVoltage MEMBER loadHCVoltage)
    Q_PROPERTY(double loadHCCurrent MEMBER loadHCCurrent)
    Q_PROPERTY(double chargerVoltage MEMBER chargerVoltage)
    Q_PROPERTY(double auxVoltage MEMBER auxVoltage)
    Q_PROPERTY(double auxCurrent MEMBER auxCurrent)
    Q_PROPERTY(double tempBattHigh MEMBER tempBattHigh)
    Q_PROPERTY(double tempBattAverage MEMBER tempBattAverage)
    Q_PROPERTY(double tempBattLow MEMBER tempBattLow)
    Q_PROPERTY(double tempBMSHigh MEMBER tempBMSHigh)
    Q_PROPERTY(double tempBMSAverage MEMBER tempBMSAverage)
    Q_PROPERTY(double tempBMSLow MEMBER tempBMSLow)
    Q_PROPERTY(double humidity MEMBER humidity)
    Q_PROPERTY(QString opState MEMBER opState)
    Q_PROPERTY(int balanceActive MEMBER balanceActive)
    Q_PROPERTY(QString faultState MEMBER faultState)

public:
    BMS_VALUES(){
        packVoltage = 0.0;
        packCurrent =0.0;
        soC = 0;
        cVHigh = 0.0;
        cVAverage =0.0;
        cVLow = 0.0;
        cVMisMatch = 0.0;
        loadLCVoltage = 0.0;
        loadLCCurrent = 0.0;
        loadHCVoltage = 0.0;
        loadHCCurrent = 0.0;
        chargerVoltage =0.0;
        auxVoltage = 0.0;
        auxCurrent = 0.0;
        tempBattHigh = 0.0;
        tempBattAverage = 0.0;
        tempBattLow = 0.0;
        tempBMSHigh = 0.0;
        tempBMSAverage = 0.0;
        tempBMSLow = 0.0;
        humidity = 0.0;
        balanceActive = 0;
    }

    double packVoltage;
    double packCurrent;
    int    soC;
    double cVHigh;
    double cVAverage;
    double cVLow;
    double cVMisMatch;
    double loadLCVoltage;
    double loadLCCurrent;
    double loadHCVoltage;
    double loadHCCurrent;
    double chargerVoltage;
    double auxVoltage;
    double auxCurrent;
    double tempBattHigh;
    double tempBattAverage;
    double tempBattLow;
    double tempBMSHigh;
    double tempBMSAverage;
    double tempBMSLow;
    double humidity;
    QString opState;
    int    balanceActive;
    QString faultState;
};

Q_DECLARE_METATYPE(BMS_VALUES)

struct MCCONF_TEMP {
    Q_GADGET

    Q_PROPERTY(double current_min_scale MEMBER current_min_scale)
    Q_PROPERTY(double current_max_scale MEMBER current_max_scale)
    Q_PROPERTY(double erpm_or_speed_min MEMBER erpm_or_speed_min)
    Q_PROPERTY(double erpm_or_speed_max MEMBER erpm_or_speed_max)
    Q_PROPERTY(double duty_min MEMBER duty_min)
    Q_PROPERTY(double duty_max MEMBER duty_max)
    Q_PROPERTY(double watt_min MEMBER watt_min)
    Q_PROPERTY(double watt_max MEMBER watt_max)
    Q_PROPERTY(QString name MEMBER name)

public:
    double current_min_scale;
    double current_max_scale;
    double erpm_or_speed_min;
    double erpm_or_speed_max;
    double duty_min;
    double duty_max;
    double watt_min;
    double watt_max;
    QString name;
};

Q_DECLARE_METATYPE(MCCONF_TEMP)

typedef enum {
    DEBUG_SAMPLING_OFF = 0,
    DEBUG_SAMPLING_NOW,
    DEBUG_SAMPLING_START,
    DEBUG_SAMPLING_TRIGGER_START,
    DEBUG_SAMPLING_TRIGGER_FAULT,
    DEBUG_SAMPLING_TRIGGER_START_NOSEND,
    DEBUG_SAMPLING_TRIGGER_FAULT_NOSEND,
    DEBUG_SAMPLING_SEND_LAST_SAMPLES
} debug_sampling_mode;

// Communication commands
typedef enum {
    COMM_FW_VERSION = 0,
    COMM_JUMP_TO_BOOTLOADER,
    COMM_ERASE_NEW_APP,
    COMM_WRITE_NEW_APP_DATA,
    COMM_GET_VALUES,
    COMM_SET_DUTY,
    COMM_SET_CURRENT,
    COMM_SET_CURRENT_BRAKE,
    COMM_SET_RPM,
    COMM_SET_POS,
    COMM_SET_HANDBRAKE,
    COMM_SET_DETECT,
    COMM_SET_SERVO_POS,
    COMM_SET_MCCONF,
    COMM_GET_MCCONF,
    COMM_GET_MCCONF_DEFAULT,
    COMM_SET_APPCONF,
    COMM_GET_APPCONF,
    COMM_GET_APPCONF_DEFAULT,
    COMM_SAMPLE_PRINT,
    COMM_TERMINAL_CMD,
    COMM_PRINT,
    COMM_ROTOR_POSITION,
    COMM_EXPERIMENT_SAMPLE,
    COMM_DETECT_MOTOR_PARAM,
    COMM_DETECT_MOTOR_R_L,
    COMM_DETECT_MOTOR_FLUX_LINKAGE,
    COMM_DETECT_ENCODER,
    COMM_DETECT_HALL_FOC,
    COMM_REBOOT,
    COMM_ALIVE,
    COMM_GET_DECODED_PPM,
    COMM_GET_DECODED_ADC,
    COMM_GET_DECODED_CHUK,
    COMM_FORWARD_CAN,
    COMM_SET_CHUCK_DATA,
    COMM_CUSTOM_APP_DATA,
    COMM_NRF_START_PAIRING,
    COMM_GPD_SET_FSW,
    COMM_GPD_BUFFER_NOTIFY,
    COMM_GPD_BUFFER_SIZE_LEFT,
    COMM_GPD_FILL_BUFFER,
    COMM_GPD_OUTPUT_SAMPLE,
    COMM_GPD_SET_MODE,
    COMM_GPD_FILL_BUFFER_INT8,
    COMM_GPD_FILL_BUFFER_INT16,
    COMM_GPD_SET_BUFFER_INT_SCALE,
    COMM_GET_VALUES_SETUP,
    COMM_SET_MCCONF_TEMP,
    COMM_SET_MCCONF_TEMP_SETUP,
    COMM_GET_VALUES_SELECTIVE,
    COMM_GET_VALUES_SETUP_SELECTIVE,
    COMM_EXT_NRF_PRESENT,
    COMM_EXT_NRF_ESB_SET_CH_ADDR,
    COMM_EXT_NRF_ESB_SEND_DATA,
    COMM_EXT_NRF_ESB_RX_DATA,
    COMM_EXT_NRF_SET_ENABLED,
    COMM_DETECT_MOTOR_FLUX_LINKAGE_OPENLOOP,
    COMM_DETECT_APPLY_ALL_FOC,
    COMM_JUMP_TO_BOOTLOADER_ALL_CAN,
    COMM_ERASE_NEW_APP_ALL_CAN,
    COMM_WRITE_NEW_APP_DATA_ALL_CAN,
    COMM_PING_CAN,
    COMM_APP_DISABLE_OUTPUT,
    COMM_TERMINAL_CMD_SYNC,
    COMM_GET_IMU_DATA,
    COMM_BM_CONNECT,
    COMM_BM_ERASE_FLASH_ALL,
    COMM_BM_WRITE_FLASH,
    COMM_BM_REBOOT,
    COMM_BM_DISCONNECT,
    COMM_BM_MAP_PINS_DEFAULT,
    COMM_BM_MAP_PINS_NRF5X,
    COMM_ERASE_BOOTLOADER,
    COMM_ERASE_BOOTLOADER_ALL_CAN,
    COMM_PLOT_INIT,
    COMM_PLOT_DATA,
    COMM_PLOT_ADD_GRAPH,
    COMM_PLOT_SET_GRAPH,
    COMM_GET_DECODED_BALANCE,
    COMM_BM_MEM_READ,
    COMM_WRITE_NEW_APP_DATA_LZO,
    COMM_WRITE_NEW_APP_DATA_ALL_CAN_LZO,
    COMM_BM_WRITE_FLASH_LZO,
    COMM_SET_CURRENT_REL,
    COMM_CAN_FWD_FRAME,
    COMM_SET_BATTERY_CUT,
    COMM_SET_BLE_NAME,
    COMM_SET_BLE_PIN,
    COMM_SET_CAN_MODE,
    COMM_GET_IMU_CALIBRATION,
    COMM_GET_MCCONF_TEMP,

    // Custom configuration for hardware
    COMM_GET_CUSTOM_CONFIG_XML,
    COMM_GET_CUSTOM_CONFIG,
    COMM_GET_CUSTOM_CONFIG_DEFAULT,
    COMM_SET_CUSTOM_CONFIG,

    // BMS commands
    COMM_BMS_GET_VALUES,
    COMM_BMS_SET_CHARGE_ALLOWED,
    COMM_BMS_SET_BALANCE_OVERRIDE,
    COMM_BMS_RESET_COUNTERS,
    COMM_BMS_FORCE_BALANCE,
    COMM_BMS_ZERO_CURRENT_OFFSET,

    // FW updates commands for different HW types
    COMM_JUMP_TO_BOOTLOADER_HW,
    COMM_ERASE_NEW_APP_HW,
    COMM_WRITE_NEW_APP_DATA_HW,
    COMM_ERASE_BOOTLOADER_HW,
    COMM_JUMP_TO_BOOTLOADER_ALL_CAN_HW,
    COMM_ERASE_NEW_APP_ALL_CAN_HW,
    COMM_WRITE_NEW_APP_DATA_ALL_CAN_HW,
    COMM_ERASE_BOOTLOADER_ALL_CAN_HW,

    COMM_SET_ODOMETER,

    // ENNOID-BMS specific
    COMM_EBMS_STORE_CONF = 150,
    COMM_EBMS_GET_CELLS,
    COMM_EBMS_GET_AUX,
    COMM_EBMS_GET_EXP_TEMP,
    COMM_EBMS_SET_MCCONF,
    COMM_EBMS_GET_MCCONF,
    COMM_EBMS_GET_MCCONF_DEFAULT,
    COMM_EBMS_GET_VALUES
} COMM_PACKET_ID;

typedef struct {
    int js_x;
    int js_y;
    int acc_x;
    int acc_y;
    int acc_z;
    bool bt_c;
    bool bt_z;
} chuck_data;

struct bldc_detect {
    Q_GADGET

    Q_PROPERTY(double cycle_int_limit MEMBER cycle_int_limit)
    Q_PROPERTY(double bemf_coupling_k MEMBER bemf_coupling_k)
    Q_PROPERTY(QVector<int> hall_table MEMBER hall_table)
    Q_PROPERTY(int hall_res MEMBER hall_res)

public:
    double cycle_int_limit;
    double bemf_coupling_k;
    QVector<int> hall_table;
    int hall_res;
};

Q_DECLARE_METATYPE(bldc_detect)

typedef enum {
    NRF_PAIR_STARTED = 0,
    NRF_PAIR_OK,
    NRF_PAIR_FAIL
} NRF_PAIR_RES;

typedef enum {
    OP_STATE_INIT = 0,									// 0
    OP_STATE_CHARGING,									// 1
    OP_STATE_PRE_CHARGE,								// 2
    OP_STATE_LOAD_ENABLED,								// 3
    OP_STATE_BATTERY_DEAD,								// 4
    OP_STATE_POWER_DOWN,								// 5
    OP_STATE_EXTERNAL,									// 6
    OP_STATE_ERROR,										// 7
    OP_STATE_ERROR_PRECHARGE,						    // 8
    OP_STATE_BALANCING,									// 9
    OP_STATE_CHARGED,									// 10
    OP_STATE_FORCEON,									// 11
} OperationalStateTypedef;

#endif // DATATYPES_H
