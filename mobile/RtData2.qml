/*
    Copyright 2017 Benjamin Vedder	benjamin@vedder.se

    This file is part of VESC Tool.

    VESC Tool is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    VESC Tool is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

import Ennoid.bmsinterface 1.0
import Ennoid.commands 1.0
import Ennoid.configparams 1.0

Item {
    id: rtData
    property Commands mCommands: VescIf.commands()
    property ConfigParams mbmsConfig: VescIf.bmsConfig()
    property var progressBarsVisible: []
    property bool isHorizontal: rtData.width > rtData.height
    property int gaugeSize: Math.min(width / 2 - 10,
                                     (height - valMetrics.height * 10) /
                                     (isHorizontal ? 1 : 2) - (isHorizontal ? 30 : 20))



    //RtProgressBar {
     //   id: progressBars
    //}

    Component.onCompleted: {
        //currentGauge.minimumValue = -mbmsConfig.getParamDouble("maxAllowedCurrent")
        //currentGauge.maximumValue = mbmsConfig.getParamDouble("maxAllowedCurrent")
        mCommands.emitEmptyValues()

    }

    ColumnLayout {
        id: column
        anchors.fill: parent

        GridLayout {
            Layout.fillWidth: true
            columns: 1


           /*CustomGauge {
                id: currentGauge
                Layout.fillWidth: true
                maximumValue: 100
                minimumValue: -100
                labelStep: maximumValue > 60 ? 20 : 10
                value: 0
                unitText: "A"
                typeText: "Current"
                Layout.preferredWidth: gaugeSize
                Layout.preferredHeight: gaugeSize
            }

            CustomGauge {
                id: dutyGauge
                Layout.fillWidth: true
                maximumValue: 100
                minimumValue: -100
                labelStep: 20
                value: 0
                unitText: "%"
                typeText: "Duty"
                Layout.preferredWidth: gaugeSize
                Layout.preferredHeight: gaugeSize
            }

            CustomGauge {
                id: rpmGauge
                Layout.fillWidth: true
                maximumValue: 100
                minimumValue: -100
                labelStep: 20
                value: -0
                unitText: "x1000"
                typeText: "ERPM"
                Layout.preferredWidth: gaugeSize
                Layout.preferredHeight: gaugeSize
            }

            CustomGauge {
                id: powerGauge
                Layout.fillWidth: true
                maximumValue: 10000
                minimumValue: -10000
                tickmarkScale: 0.001
                tickmarkSuffix: "k"
                labelStep: 1000
                value: 0
                unitText: "W"
                typeText: "Power"
                Layout.preferredWidth: gaugeSize
                Layout.preferredHeight: gaugeSize
            }*/
        }

        Rectangle {
            id: textRect
            color: "#272727"

            Rectangle {
                anchors.bottom: valText.top
                width: parent.width
                height: 2
                color: "#81D4FA"
        }

            Layout.fillWidth: true
            Layout.preferredHeight: valMetrics.height * 6 + 20
            Layout.alignment: Qt.AlignBottom

            Text {
                id: valText
                color: "white"
                text: VescIf.getConnectedPortName()
                font.family: "DejaVu Sans Mono"
                verticalAlignment: Text.AlignVCenter
                anchors.left: parent.left
                anchors.verticalCenter: parent.verticalTop
                anchors.margins: 10
            }

            Text {
                id: valText2
                color: "white"
                text: VescIf.getConnectedPortName()
                font.family: "DejaVu Sans Mono"
                verticalAlignment: Text.AlignVCenter
                anchors.left: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalTop
                anchors.margins: 10
            }

            TextMetrics {
                id: valMetrics
                font: valText.font
                text: valText.text
            }
        }
    }

    Connections {
        target: mbmsConfig

        onUpdated: {
            currentGauge.maximumValue = Math.ceil(mbmsConfig.getParamDouble("maxAllowedCurrent") / 5) * 5
            currentGauge.minimumValue = -currentGauge.maximumValue
        }
    }

    Connections {
        target: mCommands
        onCellsReceived:{
            updateProgressBars()
        }
    }

    Connections {
        target: mCommands

        onValuesReceived: {

           /* currentGauge.value = values.packCurrent
            dutyGauge.value = values.duty_now * 100.0

            var fl = mbmsConfig.getParamDouble("maxAllowedCurrent")
            var rpmMax = (values.v_in * 60.0) / (Math.sqrt(3.0) * 2.0 * Math.PI * fl)
            var rpmMaxRound = (Math.ceil(rpmMax / 5000.0) * 5000.0) / 1000

            if (Math.abs(rpmGauge.maximumValue - rpmMaxRound) > 6) {
                rpmGauge.maximumValue = rpmMaxRound
                rpmGauge.minimumValue = -rpmMaxRound
            }

            rpmGauge.value = values.packVoltage

            var powerMax = Math.min(values.packVoltage * Math.min(mbmsConfig.getParamDouble("packVoltage"),
                                                           mbmsConfig.getParamDouble("packVoltage")),
                                    mbmsConfig.getParamDouble("packVoltage"))
            var powerMaxRound = (Math.ceil(powerMax / 1000.0) * 1000.0)

            if (Math.abs(powerGauge.maximumValue - powerMaxRound) > 1.2) {
                powerGauge.maximumValue = powerMaxRound
                powerGauge.minimumValue = -powerMaxRound
            }

            powerGauge.value = (values.packCurrent * values.packVoltage)
*/
            valText.text =
                    "Battery    : " + parseFloat(values.packVoltage).toFixed(2) + " V\n" +
                    "I Battery  : " + parseFloat(values.packCurrent).toFixed(2) + " A\n" +
                    "CVHigh     : " + parseFloat(values.cVHigh).toFixed(2) + " V\n" +
                    "CVAverage  : " + parseFloat(values.cVAverage).toFixed(2) + " V\n" +
                    "CVLow      : " + parseFloat(values.cVLow).toFixed(2) + " V\n" +
                    "CVMismatch : " + parseFloat(values.cVMisMatch).toFixed(2) + " V\n"

            valText2.text =
                    "T Batt High: " + parseFloat(values.tempBattHigh).toFixed(1) + " \u00B0C\n" +
                    "T Batt Avrg: " + parseFloat(values.tempBattAverage).toFixed(1) + " \u00B0C\n" +
                    "T BMS High : " + parseFloat(values.tempBMSHigh).toFixed(2) + " \u00B0C\n" +
                    "T BMS Avrg : " + parseFloat(values.tempBMSAverage).toFixed(2) + " \u00B0C\n" +
                    "SoC        : " + parseFloat(values.soC).toFixed(1) + " %\n" +
                    "OpState    : " + values.opState
        }
    }
}
