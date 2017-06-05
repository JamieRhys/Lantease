/*
 * This file is part of Lantease.
 *
 * Lantease is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Lantease is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Lantease.  If not, see <http://www.gnu.org/licenses/>.
 *
 * File: lantease.cpp
 * Author: Jamie-Rhys Edwards jamie_airfix@yahoo.co.uk
 * Created: 2017/05/25
 */

#include <QApplication>
#include <QWidget>
#include <QPointer>
#include <QDialog>

#include <lantease/lantease.hpp>
#include <ui/mainWindow/ui_lantease.hpp>
#include <ui/aboutLantease/ui_aboutlantease.hpp>

#include <iostream>

Lantease::Lantease(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::LanteaseMW)
{
    ui->setupUi(this);
}

Lantease::~Lantease() {
    ui->cleanup();
}

void Lantease::on_file_exit_clicked() {
    this->close();
}

void Lantease::on_help_aboutLantease_clicked() {
    Ui::AboutLantease win(new QDialog());
    win.show();
    win.exec();
}
