/* BEGIN_COMMON_COPYRIGHT_HEADER
 * (c)LGPL2+
 *
 * LXQt - a lightweight, Qt based, desktop toolset
 * https://lxqt.org
 *
 * Copyright: 2012-2013 Razor team
 *            2014 LXQt team
 * Authors:
 *   Kuzma Shapran <kuzma.shapran@gmail.com>
 *
 * This program or library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 *
 * END_COMMON_COPYRIGHT_HEADER */

#ifndef CLOCKLABEL_H
#define CLOCKLABEL_H

#include <QCalendarWidget>
#include <QLabel>
#include <QTimer>

class LXQtPanel;

class ClockLabel : public QLabel
{
public:
    ClockLabel(LXQtPanel * panel);

protected:
    void mousePressEvent(QMouseEvent * e) override;

private:
    void updateTime();

    LXQtPanel * const mPanel;
    QCalendarWidget mCalendar;
    QTimer mTimer;
};

#endif // CLOCKLABEL_H