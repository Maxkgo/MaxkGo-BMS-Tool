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
       // updateEditors()
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
        case "Discharge":
                createEditorMc("LCUseDischarge")
                createEditorMc("LCUsePrecharge")
                createEditorMc("minimalPrechargePercentage")
                createEditorMc("timeoutLCPreCharge")
                createEditorMc("timeoutDischargeRetry")
                break;

        case "Charge":
                createEditorMc("chargerEnabledThreshold")
                createEditorMc("timeoutChargerDisconnected")
                createEditorMc("allowChargingDuringDischarge")
                createEditorMc("timeoutChargeRetry")
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
                    "Discharge",
                    "Charge"
                ]

                onCurrentTextChanged: {
                    var tabTextOld = tabBox.currentText

                    switch(currentText) {
                    case "Discharge":
                        tabBox.model = [
                                    ""
                                ]
                        break;

                    case "Charge":
                        tabBox.model = [
                                    ""
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
