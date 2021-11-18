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

#include "pagedebugprint.h"
#include "ui_pagedebugprint.h"
#include <QDateTime>

// Static member initialization
PageDebugPrint *PageDebugPrint::currentMsgHandler = 0;

PageDebugPrint::PageDebugPrint(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageDebugPrint)
{
    ui->setupUi(this);
    layout()->setContentsMargins(0, 0, 0, 0);
    currentMsgHandler = this;
}

PageDebugPrint::~PageDebugPrint()
{
    delete ui;
}

void PageDebugPrint::printConsole(QString str)
{
    ui->consoleBrowser->moveCursor(QTextCursor::End);
    ui->consoleBrowser->insertHtml(QDateTime::currentDateTime().
                                   toString("yyyy-MM-dd hh:mm:ss: ")
                                   + str);
    ui->consoleBrowser->moveCursor(QTextCursor::End);
}
