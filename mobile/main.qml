/*
    Copyright 2017 - 2018 Benjamin Vedder	benjamin@vedder.se

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
import Qt.labs.settings 1.0 as QSettings

import Ennoid.bmsinterface 1.0
import Ennoid.commands 1.0
import Ennoid.configparams 1.0
import Ennoid.utility 1.0

ApplicationWindow {
    id: appWindow
    property Commands mCommands: VescIf.commands()
    property ConfigParams mbmsConfig: VescIf.bmsConfig()
    property ConfigParams mInfoConf: VescIf.infoConfig()

    visible: true
    width: 500
    height: 850
    title: qsTr("ENNOID-BMS Tool")

    Component.onCompleted: {
       // Utility.checkVersion(VescIf)


    }

    Controls {
        id: controls
        parentWidth: appWindow.width
        parentHeight: appWindow.height - footer.height - tabBar.height
    }

    Drawer {
        id: drawer
        width: 0.5 * appWindow.width
        height: appWindow.height - footer.height - tabBar.height
        y: tabBar.height
        dragMargin: 20

        ColumnLayout {
            anchors.fill: parent
            anchors.margins: 10
            spacing: 0

            Image {
                id: image
                Layout.preferredWidth: Math.min(parent.width, parent.height)
                Layout.preferredHeight: (300 * Layout.preferredWidth) / 1549
                Layout.alignment: Qt.AlignHCenter | Qt.AlignBottom
                source: "qrc:/res/logo_white.png"
            }

            Button {
                id: reconnectButton

                Layout.fillWidth: true
                text: "Reconnect"
                enabled: false
                flat: true

                onClicked: {
                    VescIf.reconnectLastPort()
                }
            }

            Button {
                Layout.fillWidth: true
                text: "Disconnect"
                enabled: connBle.disconnectButton.enabled
                flat: true

                onClicked: {
                    VescIf.disconnectPort()
                }
            }


            Item {
                // Spacer
                Layout.fillWidth: true
                Layout.fillHeight: true
            }

            Button {
                Layout.fillWidth: true
                text: "About"
                flat: true

                onClicked: {
                    VescIf.emitMessageDialog(
                                "About",
                                Utility.aboutText(),
                                true, true)
                }
            }

            Button {
                Layout.fillWidth: true
                text: "Changelog"
                flat: true

                onClicked: {
                    VescIf.emitMessageDialog(
                                "EBMS Tool Changelog",
                                Utility.vescToolChangeLog(),
                                true, false)
                }
            }

            Button {
                Layout.fillWidth: true
                text: "License"
                flat: true

                onClicked: {
                    VescIf.emitMessageDialog(
                                mInfoConf.getLongName("gpl_text"),
                                mInfoConf.getDescription("gpl_text"),
                                true, true)
                }
            }
        }
    }

    SwipeView {
        id: swipeView
        currentIndex: tabBar.currentIndex
        anchors.fill: parent

        Page {
            ConnectBle {
                id: connBle
                anchors.fill: parent
                anchors.margins: 10

                onRequestOpenControls: {
                    controls.openDialog()
                }

            }
        }


        Page {
            RowLayout {
                anchors.fill: parent
                spacing: 0

                Rectangle {
                    color: "#4f4f4f"
                    width: 16
                    Layout.fillHeight: true
                    Layout.alignment: Qt.AlignHCenter |  Qt.AlignVCenter

                    PageIndicator {
                        count: rtSwipeView.count
                        currentIndex: rtSwipeView.currentIndex
                        anchors.centerIn: parent
                        rotation: 90
                    }
                }

                SwipeView {
                    id: rtSwipeView
                    enabled: true
                    clip: true

                    Layout.fillWidth: true
                    Layout.fillHeight: true
                    orientation: Qt.Vertical

                    Page {
                        RtData {
                            anchors.fill: parent
                        }
                    }

                    /*Page {
                        RtDataSetup {
                            anchors.fill: parent
                        }
                    }*/
                }
            }
        }

        Page {
            ConfigPageGeneral {
                id: confPageGeneral
                anchors.fill: parent
                anchors.leftMargin: 10
                anchors.rightMargin: 10
            }
        }

        Page {
            ConfigPageCell {
                id: confPageCell
                anchors.fill: parent
                anchors.leftMargin: 10
                anchors.rightMargin: 10
            }
        }

        Page {
            ConfigPageSwitch {
                id: confPageSwitch
                anchors.fill: parent
                anchors.leftMargin: 10
                anchors.rightMargin: 10
            }
         }

         Page {
             ConfigPageSignal {
                 id: confPageSignal
                 anchors.fill: parent
                 anchors.leftMargin: 10
                 anchors.rightMargin: 10
                }
         }

         Page {
            ConfigPageDisplay {
                id: confPageDisplay
                anchors.fill: parent
                anchors.leftMargin: 10
                anchors.rightMargin: 10
            }
        }

        Page {
            FwUpdate {
                anchors.fill: parent
            }
        }

        Page {
            Terminal {
                anchors.fill: parent
                anchors.leftMargin: 10
                anchors.rightMargin: 10
                anchors.topMargin: 10
            }
        }
    }

    header: Rectangle {
        color: "#5f5f5f"
        height: tabBar.height

        RowLayout {
            anchors.fill: parent
            spacing: 0

            ToolButton {
                Layout.preferredHeight: tabBar.height
                Layout.preferredWidth: tabBar.height - 10

                Image {
                    id: manuButton
                    anchors.centerIn: parent
                    width: tabBar.height * 0.5
                    height: tabBar.height * 0.5
                    opacity: 0.5
                    source: "qrc:/res/icons/Settings-96.png"
                }

                onClicked: {
                    if (drawer.visible) {
                        drawer.close()
                    } else {
                        drawer.open()
                    }
                }
            }

            TabBar {
                id: tabBar
                currentIndex: swipeView.currentIndex
                Layout.fillWidth: true
                implicitWidth: 0
                clip: true

                background: Rectangle {
                    opacity: 1
                    color: "#4f4f4f"
                }

                property int buttons: 9
                property int buttonWidth: 120

                TabButton {
                    text: qsTr("Connection")
                    width: Math.max(tabBar.buttonWidth, tabBar.width / tabBar.buttons)
                }
                TabButton {
                    text: qsTr("RT")
                    width: Math.max(tabBar.buttonWidth, tabBar.width / tabBar.buttons)
                }
                TabButton {
                    text: qsTr("General")
                    width: Math.max(tabBar.buttonWidth, tabBar.width / tabBar.buttons)
                }
                TabButton {
                    text: qsTr("Cell cfg")
                    width: Math.max(tabBar.buttonWidth, tabBar.width / tabBar.buttons)
                }
                TabButton {
                    text: qsTr("Switch")
                    width: Math.max(tabBar.buttonWidth, tabBar.width / tabBar.buttons)
                }
                TabButton {
                    text: qsTr("Signal")
                    width: Math.max(tabBar.buttonWidth, tabBar.width / tabBar.buttons)
                }
                TabButton {
                    text: qsTr("Display")
                    width: Math.max(tabBar.buttonWidth, tabBar.width / tabBar.buttons)
                }
                TabButton {
                    text: qsTr("Firmware")
                    width: Math.max(tabBar.buttonWidth, tabBar.width / tabBar.buttons)
                }
                TabButton {
                    text: qsTr("Terminal")
                    width: Math.max(tabBar.buttonWidth, tabBar.width / tabBar.buttons)
                }
            }
        }
    }

    footer: Rectangle {
        id: connectedRect
        color: "#4f4f4f"

        Text {
            id: connectedText
            color: "white"
            text: VescIf.getConnectedPortName()
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
        }

        width: parent.width
        height: 20
    }

    Timer {
        id: statusTimer
        interval: 1600
        running: false
        repeat: false
        onTriggered: {
            connectedText.text = VescIf.getConnectedPortName()
            connectedRect.color = "4f4f4f"
        }
    }

    Timer {
        id: uiTimer
        interval: 1000
        running: true
        repeat: true
        onTriggered: {
            if (!statusTimer.running && connectedText.text !== VescIf.getConnectedPortName()) {
                connectedText.text = VescIf.getConnectedPortName()
            }
        }
    }

    Timer {
        id: confTimer
        interval: 1000
        running: true
        repeat: true

        property bool mcConfRx: false

        onTriggered: {
            if (VescIf.isPortConnected()) {
                if (!mcConfRx) {
                    mCommands.getBMSconf()
                }
            }
        }
    }

    Timer {
        id: rtTimer
        interval: 50
        running: true
        repeat: true

        onTriggered: {
            if (VescIf.isPortConnected() && tabBar.currentIndex == 1) {
                // Sample RT data when the RT page is selected
                interval = 50
                mCommands.getValues()
            }
        }
    }

    Dialog {
        id: vescDialog
        standardButtons: Dialog.Ok
        modal: true
        focus: true
        closePolicy: Popup.CloseOnEscape

        width: parent.width - 20
        height: Math.min(implicitHeight, parent.height - 40)
        x: (parent.width - width) / 2
        y: (parent.height - height) / 2
        parent: ApplicationWindow.overlay

        ScrollView {
            anchors.fill: parent
            clip: true
            contentWidth: parent.width - 20

            Text {
                id: vescDialogLabel
                color: "#ffffff"
                linkColor: "lightblue"
                verticalAlignment: Text.AlignVCenter
                anchors.fill: parent
                wrapMode: Text.WordWrap
                textFormat: Text.RichText
                onLinkActivated: {
                    Qt.openUrlExternally(link)
                }
            }
        }
    }

    Connections {
        target: VescIf
        onPortConnectedChanged: {
            connectedText.text = VescIf.getConnectedPortName()
            if (VescIf.isPortConnected()) {
                reconnectButton.enabled = true
            }
        }

        onStatusMessage: {
            connectedText.text = msg
            connectedRect.color = isGood ? "green" : "red"
            statusTimer.restart()
        }

        onMessageDialog: {
            vescDialog.title = title
            vescDialogLabel.text =(richText ? "<style>a:link { color: lightblue; }</style>" : "") + msg
            vescDialogLabel.textFormat = richText ? Text.RichText : Text.AutoText
            vescDialog.open()
        }

        onFwRxChanged: {
            if (rx) {
                if(limited){
                    swipeView.setCurrentIndex(5)
                }else {
                    mCommands.getBMSconf()
                }
            }
        }
    }

    Connections {
        target: mbmsConfig

        onUpdated: {
            confTimer.mcConfRx = true
        }
    }
}
