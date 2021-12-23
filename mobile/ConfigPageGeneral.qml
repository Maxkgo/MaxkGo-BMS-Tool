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
    property var editorsVisible: []
    property bool isHorizontal: width > height

    ParamEditors {
        id: editors
    }

    onIsHorizontalChanged: {
        //updateEditors()
    }

    function addSeparator(text) {
        editorsVisible.push(editors.createSeparator(scrollCol, text))
        editorsVisible[editorsVisible.length - 1].Layout.columnSpan = isHorizontal ? 2 : 1
    }

    function destroyEditors() {
        for (var i = 0;i < editorsVisible.length;i++) {
            editorsVisible[i].destroy();
        }
        editorsVisible = []
    }

    function createEditorMc(param) {
        editorsVisible.push(editors.createEditorMc(scrollCol, param))
        editorsVisible[editorsVisible.length - 1].Layout.preferredWidth = 500
        editorsVisible[editorsVisible.length - 1].Layout.fillsWidth = true
    }

    function updateEditors() {
        destroyEditors()

        switch (pageBox.currentText) {
        case "Power State":
            switch(tabBox.currentText) {
            case "Onstate":
                createEditorMc("pulseToggleButton")
                createEditorMc("notUsedCurrentThreshold")
                createEditorMc("notUsedTimeout")
                createEditorMc("powerDownDelay")
                createEditorMc("allowForceOn")
                break;
            case "Jump to":
                createEditorMc("extEnableState")
                createEditorMc("chargeEnableState")
                break;
            case "BMS usage":
                createEditorMc("BMSApplication")

                break;
            default:
                break;
            }
            break;

        case "Limits":
            switch(tabBox.currentText) {
            case "Current":
                createEditorMc("maxAllowedCurrent")
                break;
            case "Temperature discharging":
                createEditorMc("allowedTempBattDischargingMax")
                createEditorMc("allowedTempBattDischargingMin")
                break;
            case "Temperature charging":
                createEditorMc("allowedTempBattChargingMax")
                createEditorMc("allowedTempBattChargingMin")
                break;
            case "Temperature cooling/heating":
                createEditorMc("allowedTempBattCoolingMax")
                createEditorMc("allowedTempBattCoolingMin")
                break;
            case "Temperature Master board":
                createEditorMc("allowedTempBMSMax")
                createEditorMc("allowedTempBMSMin")
                break;
            default:
                break;
            }
            break;

        case "CAN":
            switch(tabBox.currentText) {
            case "CAN configuration":
                createEditorMc("CANID")
                createEditorMc("CANIDStyle")
                createEditorMc("CANBaudRate")
                break;
            case "CAN messaging":
                createEditorMc("emitStatusOverCAN")
                createEditorMc("emitStatusProtocolType")
                createEditorMc("useCANSafetyInput")
                createEditorMc("useCANDelayedPowerDown")
                break;
            default:
                break;
            }
            break;

        case "Sensors":
            switch(tabBox.currentText) {
            case "NTC specifications battery":
                createEditorMc("tempEnableMaskBattery")
                createEditorMc("noOfTempSensorPerModule")
                createEditorMc("NTCLTC25Deg")
                createEditorMc("NTCLTCBeta")
                break;
            case "NTC specifications expansion Board":
                createEditorMc("tempEnableMaskExpansion")
                createEditorMc("noOfExpansionBoard")
                createEditorMc("noOfTempSensorPerExpansionBoard")
                createEditorMc("NTCEXP25Deg")
                createEditorMc("NTCEXPBeta")
                break;
            case "NTC advanced settings":
                createEditorMc("maxUnderAndOverTemperatureErrorCount")
                createEditorMc("humidityICType")


                break;

            default:
                break;
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

        GridLayout {
            Layout.fillWidth: true
            columns: isHorizontal ? 2 : 1
            rowSpacing: -5
            ComboBox {
                id: pageBox
                Layout.fillWidth: true
                model: [
                    "Power State",
                    "Limits",
                    "CAN",
                    "Sensors"
                ]

                onCurrentTextChanged: {
                    var tabTextOld = tabBox.currentText

                    switch(currentText) {
                    case "Power State":
                        tabBox.model = [
                                    "Onstate",
                                    "Jump to"
                                ]
                        break;

                    case "Limits":
                        tabBox.model = [
                                    "Current",
                                    "Temperature discharging",
                                    "Temperature charging",
                                    "Temperature cooling/heating",
                                    "Temperature Master board"
                                ]
                        break;

                    case "CAN":
                        tabBox.model = [
                                    "CAN configuration",
                                    "CAN messaging"
                                ]
                        break;

                    case "Sensors":
                        tabBox.model = [
                                    "NTC specifications battery",
                                    "NTC enable",
                                    "NTC specifications expansion Board"
                                ]
                        break;

                    default:
                        break;
                    }

                    tabBox.visible = tabBox.currentText.length !== 0

                if (tabTextOld === tabBox.currentText) {
                    updateEditors()
                }
            }	    
        }
		
		ComboBox {
			id: tabBox
			Layout.fillWidth: true

			onCurrentTextChanged: {
				updateEditors()
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

        RowLayout {
            Layout.fillWidth: true
            Button {
                Layout.preferredWidth: 100
                Layout.fillWidth: true
                text: "Write"

                onClicked: {
                    mCommands.setBMSconf(true)
                }
            }

            Button {
                Layout.preferredWidth: 100
                Layout.fillWidth: true
                text: "Read"

                onClicked: {
                    mCommands.getBMSconf()
                }
            }

            Button {
                Layout.preferredWidth: 50
                Layout.fillWidth: true
                text: "..."
                onClicked: menu.open()

                Menu {
                    id: menu
                    width: 500

                    MenuItem {
                        text: "Read Default Settings"
                        onTriggered: {
                            mCommands.getBMSconfDefault()
                        }
                    }
                }
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
}
