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
 * File: ui_lantease.hpp
 * Author: Jamie-Rhys Edwards jamie_airfix@yahoo.co.uk
 * Created: 2017/05/25
 */

#include <QVariant>
#include <QPointer>
#include <QHash>
#include <QString>
#include <QObject>

class QMenu;
class QMenuBar;
class QMainWindow;
class QAction;
class QWidget;

class Ui_MainWindow : public QObject {
private:
    Q_OBJECT

    QHash<QString, QPointer<QMenu>>         menuMap;
    QHash<QString, QPointer<QAction>>       menuActionMap;
    QHash<QString, QPointer<QWidget>>       widgetMap;

    QPointer<QMainWindow>                   window;

    QPointer<QMenuBar>                      menuBar;

public:
    void setupUi(QMainWindow *window);

    QHash<QString, QPointer<QAction>> getMenuActionMap() {
        return menuActionMap;
    }

    void cleanup();

private:
    void buildMenuBar();
    void createMenus();
    void createMenuActions();
    void createWindowWidgets();
    void buildWindowLayout();
    void setupSignalAndSlots();
    void retranslateUi();

signals:
};

namespace Ui {
    class LanteaseMW : public Ui_MainWindow {
        Q_OBJECT
    };
}
