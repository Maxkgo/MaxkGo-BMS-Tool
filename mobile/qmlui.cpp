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

#include "qmlui.h"
#include "fwhelper.h"

#include <QQuickStyle>

QmlUi::QmlUi(QObject *parent) : QObject(parent)
{
    mEngine = new QQmlApplicationEngine(this);
}

bool QmlUi::startQmlUi()
{
    qmlRegisterSingletonType<BMSInterface>("Ennoid.bmsinterface", 1, 0, "VescIf", BMSinterface_singletontype_provider);
    qmlRegisterSingletonType<Utility>("Ennoid.utility", 1, 0, "Utility", utility_singletontype_provider);
    qmlRegisterType<BleUart>("Ennoid.bleuart", 1, 0, "BleUart");
    qmlRegisterType<Commands>("Ennoid.commands", 1, 0, "Commands");
    qmlRegisterType<ConfigParams>("Ennoid.configparams", 1, 0, "ConfigParams");
    qmlRegisterType<FwHelper>("Ennoid.fwhelper", 1, 0, "FwHelper");

    mEngine->load(QUrl(QLatin1String("qrc:/mobile/main.qml")));
    return !mEngine->rootObjects().isEmpty();
}

QObject *QmlUi::BMSinterface_singletontype_provider(QQmlEngine *engine, QJSEngine *scriptEngine)
{
    (void)engine;
    (void)scriptEngine;

    BMSInterface *vesc = new BMSInterface();

    vesc->bmsConfig()->loadParamsXml("://res/config.xml");
    vesc->infoConfig()->loadParamsXml("://res/info.xml");

    return vesc;
}

QObject *QmlUi::utility_singletontype_provider(QQmlEngine *engine, QJSEngine *scriptEngine)
{
    (void)engine;
    (void)scriptEngine;

    Utility *util = new Utility();

    return util;
}
