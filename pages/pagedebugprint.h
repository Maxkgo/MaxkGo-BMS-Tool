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

#ifndef PAGEDEBUGPRINT_H
#define PAGEDEBUGPRINT_H

#include <QWidget>

namespace Ui {
class PageDebugPrint;
}

class PageDebugPrint : public QWidget
{
    Q_OBJECT

public:
    explicit PageDebugPrint(QWidget *parent = 0);
    ~PageDebugPrint();

    static PageDebugPrint* currentMsgHandler;

public slots:
    void printConsole(QString str);

private:
    Ui::PageDebugPrint *ui;
};

#endif // PAGEDEBUGPRINT_H
