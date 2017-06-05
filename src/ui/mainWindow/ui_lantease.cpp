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
 * File: ui_lantease.cpp
 * Author: Jamie-Rhys Edwards jamie_airfix@yahoo.co.uk
 * Created: 2017/05/25
 */

#include <ui/mainWindow/ui_lantease.hpp>

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QWidget>
#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSizePolicy>

#include <iostream>

void Ui_MainWindow::setupUi(QMainWindow *window) {
    if(window->objectName().isEmpty()) {
        window->setObjectName(QStringLiteral("MainWindow"));
    }
    this->window = window;
    window->resize(800, 600);

    buildWindowLayout();
    buildMenuBar();

    setupSignalAndSlots();

    retranslateUi();
}

void Ui_MainWindow::buildMenuBar() {
    menuBar = new QMenuBar(window);
    menuBar->setObjectName(QStringLiteral("menuBar"));
    menuBar->setGeometry(QRect(0, 0, 800, 22));
    menuBar->setNativeMenuBar(false);

    createMenuActions();
    createMenus();

    window->setMenuBar(menuBar);

    menuBar->addAction(menuMap.value("menu_file")->menuAction());
    menuBar->addAction(menuMap.value("menu_edit")->menuAction());
    menuBar->addAction(menuMap.value("menu_tools")->menuAction());
    menuBar->addAction(menuMap.value("menu_about")->menuAction());

}

void Ui_MainWindow::createMenus() {
    QPointer<QMenu> menu_file = new QMenu(menuBar);
    menu_file->setObjectName("menu_file");
    menu_file->addAction(menuActionMap.value("file_exit"));
    menuMap.insert("menu_file", menu_file);


    QPointer<QMenu> menu_edit = new QMenu(menuBar);
    menu_edit->setObjectName("menu_edit");
    menuMap.insert("menu_edit", menu_edit);

    QPointer<QMenu> menu_tools = new QMenu(menuBar);
    menu_tools->setObjectName("menu_tools");
    menuMap.insert("menu_tools", menu_tools);

    QPointer<QMenu> menu_about = new QMenu(menuBar);
    menu_about->setObjectName("menu_about");
    menu_about->addAction(menuActionMap.value("about_aboutLantease"));
    menuMap.insert("menu_about", menu_about);
}

void Ui_MainWindow::createMenuActions() {
    QPointer<QAction> file_exit = new QAction(window);
    file_exit->setObjectName(QStringLiteral("file_exit"));
    menuActionMap.insert("file_exit", file_exit);

    QPointer<QAction> about_aboutLantease = new QAction(window);
    about_aboutLantease->setObjectName(QStringLiteral("about_aboutLantease"));
    menuActionMap.insert("about_aboutLantease", about_aboutLantease);
}

void Ui_MainWindow::createWindowWidgets() {
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

    QPointer<QWidget> widget_main = new QWidget(window);
    widget_main->setObjectName(QStringLiteral("widget_main"));
    widget_main->setSizePolicy(sizePolicy);
    widgetMap.insert("widget_main", widget_main);

    QPointer<QWidget> widget_top = new QWidget(widget_main);
    widget_top->setObjectName(QStringLiteral("widget_top"));
    widget_top->setStyleSheet(QStringLiteral("background-color:green"));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(widget_top->sizePolicy().hasHeightForWidth());
    widget_top->setSizePolicy(sizePolicy);
    widget_top->setMinimumSize(0, 50);
    widgetMap.insert("widget_top", widget_top);

    QPointer<QWidget> widget_bottom = new QWidget(widget_main);
    widget_top->setObjectName(QStringLiteral("widget_bottom"));
    widget_bottom->setStyleSheet(QStringLiteral("background-color:blue"));
    widgetMap.insert("widget_bottom", widget_bottom);

}

void Ui_MainWindow::buildWindowLayout() {
    createWindowWidgets();

    QPointer<QVBoxLayout> layout_main = new QVBoxLayout(widgetMap.value("widget_main"));
    layout_main->setSpacing(6);
    layout_main->setContentsMargins(11, 11, 11, 11);
    layout_main->setObjectName("layout_main");

    QPointer<QHBoxLayout> layout_top = new QHBoxLayout(widgetMap.value("widget_top"));
    layout_top->setObjectName(QStringLiteral("layout_top"));
    layout_top->setSpacing(6);
    layout_top->setContentsMargins(11, 11, 11, 11);

    QPointer<QVBoxLayout> layout_bottom = new QVBoxLayout(widgetMap.value("widget_bottom"));
    layout_bottom->setObjectName(QStringLiteral("layout_bottom"));
    layout_bottom->setSpacing(6);
    layout_bottom->setContentsMargins(11, 11, 11, 11);

    layout_main->addWidget(widgetMap.value("widget_top"));
    layout_main->addWidget(widgetMap.value("widget_bottom"));
    window->setCentralWidget(widgetMap.value("widget_main"));
}

void Ui_MainWindow::setupSignalAndSlots() {
    connect(menuActionMap.value("file_exit"), SIGNAL(triggered()),
            window, SLOT(on_file_exit_clicked()));
    connect(menuActionMap.value("about_aboutLantease"), SIGNAL(triggered()),
            window, SLOT(on_help_aboutLantease_clicked()));
}

void Ui_MainWindow::retranslateUi() {
    window->setWindowTitle(QApplication::translate("MainWindow", "Lantease", Q_NULLPTR));

    menuMap.value("menu_file")->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    menuActionMap.value("file_exit")->setText(QApplication::translate("MainWindow", "&Exit", Q_NULLPTR));

    menuMap.value("menu_edit")->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));

    menuMap.value("menu_tools")->setTitle(QApplication::translate("MainWindow", "Tools", Q_NULLPTR));

    menuMap.value("menu_about")->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    menuActionMap.value("about_aboutLantease")->setText(QApplication::translate("MainWindow", "&About Lantease", Q_NULLPTR));
}

void Ui_MainWindow::cleanup() {
    menuMap.clear();
    menuActionMap.clear();
}
