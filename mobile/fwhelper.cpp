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

#include "fwhelper.h"
#include <QDirIterator>

FwHelper::FwHelper(QObject *parent) : QObject(parent)
{

}

QVariantMap FwHelper::getHardwares(QString hw)
{
    QVariantMap hws;

    QDirIterator it("://res/firmwares");
    while (it.hasNext()) {
        QFileInfo fi(it.next());
        QStringList names = fi.fileName().split("_o_");

        if (fi.isDir() && (hw.isEmpty() || names.contains(hw, Qt::CaseInsensitive))) {
            QString name = names.at(0);
            for(int i = 1;i < names.size();i++) {
                name += " & " + names.at(i);
            }

            hws.insert(name, fi.absoluteFilePath());
        }
    }

    return hws;
}

QVariantMap FwHelper::getFirmwares(QString hw)
{
    QVariantMap fws;

    QDirIterator it(hw);
    while (it.hasNext()) {
        QFileInfo fi(it.next());
        fws.insert(fi.fileName(), fi.absoluteFilePath());
    }

    return fws;
}

QVariantMap FwHelper::getBootloaders(QString hw)
{
    QVariantMap bls;

    QDirIterator it("://res/bootloaders");
    while (it.hasNext()) {
        QFileInfo fi(it.next());
        QStringList names = fi.fileName().replace(".bin", "").split("_o_");

        if (!fi.isDir() && (hw.isEmpty() || names.contains(hw, Qt::CaseInsensitive))) {
            QString name = names.at(0);
            for(int i = 1;i < names.size();i++) {
                name += " & " + names.at(i);
            }

            bls.insert(name, fi.absoluteFilePath());
        }
    }

    if (bls.isEmpty()) {
        QFileInfo generic("://res/bootloaders/generic.bin");
        if (generic.exists()) {
            bls.insert("generic", generic.absoluteFilePath());
        }
    }

    return bls;
}

bool FwHelper::uploadFirmware(QString filename, BMSInterface *dieBieMS, bool isBootloader, bool checkName)
{
    // TODO: Should this be removed on android?
    if (filename.startsWith("file:/")) {
        filename.remove(0, 6);
    }

    QFile file;
    file.setFileName(filename);
    QFileInfo fileInfo(filename);

    if (checkName) {
        if (!(fileInfo.fileName().startsWith("ENNOID")) || !fileInfo.fileName().endsWith(".bin")) {
            dieBieMS->emitMessageDialog(tr("Upload Error"),tr("The selected file name seems to be invalid."),false, false);
            return false;
        }
    }

    if (!file.open(QIODevice::ReadOnly)) {
        dieBieMS->emitMessageDialog(tr("Upload Error"),
                                tr("Could not open file. Make sure that the path is valid."),
                                false);
        qDebug() << fileInfo.fileName() << fileInfo.absolutePath();
        return false;
    }

    if (file.size() > 400000) {
        dieBieMS->emitMessageDialog(tr("Upload Error"),
                                tr("The selected file is too large to be a firmware."),
                                false);
        return false;
    }

    QByteArray data = file.readAll();
    dieBieMS->commands()->startFirmwareUpload(data, isBootloader);

    return true;
}
