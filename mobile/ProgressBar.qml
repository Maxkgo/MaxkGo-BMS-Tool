/*
    Copyright 2018 Benjamin Vedder	benjamin@vedder.se

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

import QtQuick 2.0
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

import Ennoid.commands 1.0

Item {
    id:progressBar
    height: 20
    Layout.fillWidth: true
    property string prefix: ""
    property string unit: ""
    property double barValue: 0
    property double barFrom: 0
    property double barTo: 0

        ColumnLayout {
            id: column
            anchors.fill: parent
            anchors.topMargin: 0
            anchors.margins: 5

            ProgressBar {
                id: bar
                Layout.leftMargin: 35
                implicitHeight: 10
                Layout.preferredWidth: 300
                scale:1
                Layout.fillHeight: false
                from: barFrom
                value: barValue
                to: barTo
                Label {
                    id: label
                    color: "#ffffff"
                    text: bar.value + unit
                    anchors.leftMargin: 10
                    anchors.left: parent.right
                    anchors.verticalCenter: parent.verticalCenter
                }
                Label {
                    id: label2
                    color: "#ffffff"
                    text: prefix
                    anchors.right: parent.left
                    anchors.verticalCenter: parent.verticalCenter
                }

        }
    }
}
