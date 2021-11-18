/*
    Copyright 2020 Kevin Dionne	kevin.dionne@ennoid.me
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

import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

import Ennoid.bmsinterface 1.0
import Ennoid.commands 1.0
import Ennoid.configparams 1.0

Item {
    property Commands mCommands: VescIf.commands()
    property ConfigParams mbmsConfig: VescIf.bmsConfig()
    property var progressBarsVisible: []
    property var cellValues: [6,6,6,6,6,6,6,6,6,6,6,6]
    property var tempValues: [100,100,100,100,100]
    property var tempValuesExp: [100,100,100,100,100]


    property bool isHorizontal: width > height


    ProgressBar {
        id: progressBar
    }


    Component.onCompleted: {
        mCommands.emitEmptyValues()
    }

    function addProgressBar(prefix, unit, barValue, barFrom, barTo) {
        var component = Qt.createComponent("ProgressBar.qml");
        return component.createObject(scrollCol, {"prefix": prefix, "unit": unit, "barValue": barValue, "barFrom": barFrom, "barTo": barTo});
    }

    function destroyProgressBars() {
        for (var i = 0;i < progressBarsVisible.length;i++) {
            progressBarsVisible[i].destroy();
        }
        progressBarsVisible = []
    }

    function createProgressBar(prefix, unit, barValue, barFrom, barTo) {
        progressBarsVisible.push(addProgressBar(prefix, unit, barValue, barFrom, barTo))
    }



    function updateProgressBars(type, prefix, unit, barFrom, barTo) {
        destroyProgressBars()

        switch(type) {
        case "Cells":
            for (var i = 0 ; i < cellValues.length ; i++) {
                createProgressBar(prefix+(i+1), unit, cellValues[i], barFrom, barTo)
                }
            break;
        case "Temps":
            for (var j = 0 ; j < tempValues.length ; j++) {
                createProgressBar(prefix+(j+1), unit, tempValues[j], barFrom, barTo)
                }
            break;
        case "TempsExp":
            for (var k = 0 ; k < tempValuesExp.length ; k++) {
                createProgressBar(prefix+(k+1), unit, tempValuesExp[k], barFrom, barTo)
                }
            break;
        default:
            break;
        }

    }

    ColumnLayout {
        id: column
        anchors.fill: parent
        spacing: 0
        ComboBox {
            id: tabBox
            Layout.fillWidth: true
            model: [
                "Cells voltages",
                "Temperatures",
                "Temperatures expansion"
            ]
            onCurrentTextChanged: {

                switch(currentText) {
                case "Cells voltages":
                    updateProgressBars("Cells","C","V", 2.5, 4.2)
                    break;
                case "Temperatures":
                    updateProgressBars("Temps","T","\u00B0C", -50 ,100)
                    break;
                case "Temperatures expansion":
                    updateProgressBars("TempsExp","T","\u00B0C", -50 ,100)
                    break;
                default:
                    break;
                }
            }
       }


        ScrollView {
            id: scroll
            Layout.fillWidth: true
            Layout.fillHeight: true
            contentWidth: column.width
            clip: true

            GridLayout {
                id: scrollCol
                anchors.fill: parent
                columns: isHorizontal ? 2 : 1
            }
        }

        Rectangle {
            id: textRect
            color: "#272727"
            Layout.fillWidth: true
            Layout.preferredHeight: valMetrics.height * 8 + 20
            Layout.alignment: Qt.AlignBottom

            Rectangle {

                anchors.bottom: valText.top
                width: parent.width
                height: 2
                color: "#81D4FA"
        }

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
        target: mCommands

        // TODO: For some reason this does not work
        onBmsConfigCheckResult: {
            if (paramsNotSet.length > 0) {
                var notUpdated = "The following parameters were truncated because " +
                        "they were beyond the hardware limits:\n"

                for (var i = 0;i < paramsNotSet.length;i++) {
                    notUpdated += mbmsConf.getLongName(paramsNotSet[i]) + "\n"
                }

                VescIf.emitMessageDialog("Parameters truncated", notUpdated, false, false)
            }
        }
    }


    Connections {
        target: mCommands

        onValuesReceived: {

            valText.text =
                    "V Pack     : " + parseFloat(values.packVoltage).toFixed(2) + " V\n" +
                    "I Pack     : " + parseFloat(values.packCurrent).toFixed(2) + " A\n" +
                    "CVHigh     : " + parseFloat(values.cVHigh).toFixed(2) + " V\n" +
                    "CVAverage  : " + parseFloat(values.cVAverage).toFixed(2) + " V\n" +
                    "CVLow      : " + parseFloat(values.cVLow).toFixed(2) + " V\n" +
                    "CVMismatch : " + parseFloat(values.cVMisMatch).toFixed(2) + " V\n" +
                    "OpState    : " + values.opState + "\n" +
                    "FaultState : " + values.faultState + "\n" +
                    "SoC        : " + parseFloat(values.soC).toFixed(1) + " %\n"

            valText2.text =
                    "T Batt High: " + parseFloat(values.tempBattHigh).toFixed(1) + " \u00B0C\n" +
                    "T Batt Avrg: " + parseFloat(values.tempBattAverage).toFixed(1) + " \u00B0C\n" +
                    "T Batt Low : " + parseFloat(values.tempBattLow).toFixed(1) + " \u00B0C\n" +
                    "T BMS High : " + parseFloat(values.tempBMSHigh).toFixed(1) + " \u00B0C\n" +
                    "T BMS Avrg : " + parseFloat(values.tempBMSAverage).toFixed(1) + " \u00B0C\n" +
                    "T BMS Low  : " + parseFloat(values.tempBMSLow).toFixed(1) + " \u00B0C\n" +
                    "Humidity   : " + parseFloat(values.humidity).toFixed(1) + " %\n" +
                    "V Load     : " + parseFloat(values.loadLCVoltage).toFixed(1) + " V\n" +
                    "V Charger  : " + parseFloat(values.chargerVoltage).toFixed(1) + " V\n"


        }
    }

    Connections {
        target: mCommands

        onCellsReceived: {
            cellValues = cellVoltageArray
            if(tabBox.currentText==="Cells voltages"){
                updateProgressBars("Cells","C","V", 2.5, 4.2)
            }

        }
    }

    Connections {
        target: mCommands

        onAuxReceived: {
            tempValues = auxVoltageArray
            if(tabBox.currentText==="Temperatures"){
                updateProgressBars("Temps","T","\u00B0C", -50 ,100)
            }
        }
    }

    Connections {
        target: mCommands

        onExpTempReceived: {
            tempValuesExp = expTempVoltageArray
            if(tabBox.currentText==="Temperatures expansion"){
                updateProgressBars("TempsExp","T","\u00B0C", -50 ,100)
            }
        }
    }


}



