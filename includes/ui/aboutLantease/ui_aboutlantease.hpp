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
 * File: ui_aboutLantease.hpp
 * Author: Jamie-Rhys Edwards jamie_airfix@yahoo.co.uk
 * Created: 2017/06/03
 */

#ifndef UI_ABOUTLANTEASE_HPP
#define UI_ABOUTLANTEASE_HPP

#include <QDialog>
#include <QMap>
#include <QPointer>

class QWidget;
class QLabel;
class QSpacerItem;
class QVBoxLayout;
class QHBoxLayout;
class QPushButton;

namespace Ui {
    class AboutLantease : public QDialog {
    private:
        Q_OBJECT

        QMap<QString, QPointer<QLabel>>                     mapLabel;
        QMap<QString, QPointer<QWidget>>                    mapWidget;
        QPointer<QVBoxLayout>                               layout_main;
        QPointer<QHBoxLayout>                               layout_top;
        QPointer<QVBoxLayout>                               layout_center;
        QPointer<QHBoxLayout>                               layout_bottom;

    public:
        explicit AboutLantease(QDialog *parent = 0);
        ~AboutLantease();
        void setupUi();

    private:
        void createWidgets();
        void createLayouts();
        void createLabels();

        void enableDebugLines(bool isDebug = false);

        void buildAboutDialog();

        void retranslateUi();

    };
}

#endif // UI_ABOUTLANTEASE_HPP
