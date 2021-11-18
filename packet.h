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
#ifndef PACKET_H
#define PACKET_H

#include <QObject>
#include <QTimer>

class Packet : public QObject
{
    Q_OBJECT
public:
    explicit Packet(QObject *parent = 0);
    void sendPacket(const QByteArray &data);

    static unsigned short crc16(const unsigned char *buf, unsigned int len);

signals:
    void dataToSend(QByteArray &data);
    void packetReceived(QByteArray &packet);

public slots:
    void processData(QByteArray data);

private slots:
    void timerSlot();

private:
    QTimer *mTimer;
    int mRxTimer;
    int mRxState;
    unsigned int mPayloadLength;
    unsigned char mCrcLow;
    unsigned char mCrcHigh;
    QByteArray mRxBuffer;
    int mByteTimeout;

};

#endif // PACKET_H
