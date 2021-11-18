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

import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

import Ennoid.bmsinterface 1.0
import Ennoid.commands 1.0
import Ennoid.configparams 1.0

Item {
    property ConfigParams mbmsConfig: VescIf.bmsConfig()

    function createProgressBar(parent, name, conf) {
        if (conf.hasParam(name)) {

                var component = Qt.createComponent("RtProgressBarDouble.qml");
                return component.createObject(parent, {"params": conf, "paramName": name});

        } else {
            console.log("Parameter " + name + " not found.")
        }

        return null
    }

    function createProgressBar(parent, name) {
        return createProgressBar(parent, name, mbmsConfig)
    }


    function createSeparator(parent, text) {
        var component = Qt.createComponent("ParamEditSeparator.qml");
        return component.createObject(parent, {"sepName": text});
    }

    function createSpacer(parent) {
        return Qt.createQmlObject(
                    'import QtQuick 2.7; import QtQuick.Layouts 1.3; Rectangle {Layout.fillHeight: true}',
                    parent,
                    "spacer1")
    }
}
