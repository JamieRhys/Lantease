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
 * File: main.cpp
 * Author: Jamie-Rhys Edwards jamie_airfix@yahoo.co.uk
 * Created: 2017/05/25
 */

#include <QApplication>
#include <lantease/lantease.hpp>


int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    Lantease lantease;
    lantease.show();

    return app.exec();
}
