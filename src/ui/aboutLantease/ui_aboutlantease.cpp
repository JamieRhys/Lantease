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
 * File: ui_aboutLantease.cpp
 * Author: Jamie-Rhys Edwards jamie_airfix@yahoo.co.uk
 * Created: 2017/05/25
 */

#include <ui/aboutLantease/ui_aboutlantease.hpp>

#include <QWidget>
#include <QLabel>
#include <QSpacerItem>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSizePolicy>
#include <QPushButton>
#include <QApplication>

#include <iostream>

Ui::AboutLantease::AboutLantease(QDialog *parent) :
QDialog(parent) {
    setupUi();
}

Ui::AboutLantease::~AboutLantease() {
    mapWidget.clear();
    mapLabel.clear();
}

void Ui::AboutLantease::setupUi() {
    if(this->objectName().isEmpty()) {
        this->setObjectName(QStringLiteral("dialog_aboutLantease"));
    }

    createWidgets();
    createLayouts();
    enableDebugLines(true);
    createLabels();
    buildAboutDialog();

    retranslateUi();

    this->layout()->setSizeConstraint(QLayout::SetFixedSize);

    std::cout << "Was enabled" << std::endl;
}

void Ui::AboutLantease::createWidgets() {
    QPointer<QWidget> widget_top = new QWidget(this);
    widget_top->setObjectName(QStringLiteral("widget_top"));
    QSizePolicy policy_top(QSizePolicy::Preferred, QSizePolicy::Fixed);
    policy_top.setHorizontalStretch(0);
    policy_top.setVerticalStretch(0);
    policy_top.setHeightForWidth(widget_top->sizePolicy().hasHeightForWidth());
    widget_top->setSizePolicy(policy_top);
    widget_top->setMinimumSize(QSize(0, 50));
    mapWidget.insert(widget_top->objectName(), widget_top);

    QPointer<QWidget> widget_center = new QWidget(this);
    widget_center->setObjectName(QStringLiteral("widget_center"));
    mapWidget.insert(widget_center->objectName(), widget_center);

    QPointer<QWidget> widget_bottom = new QWidget(this);
    widget_bottom->setObjectName(QStringLiteral("widget_bottom"));
    mapWidget.insert(widget_bottom->objectName(), widget_bottom);

    std::cout << "createWidget()" << std::endl;
}

void Ui::AboutLantease::createLayouts() {
    layout_main = new QVBoxLayout(this);
    layout_main->setObjectName(QStringLiteral("layout_main"));

    layout_top = new QHBoxLayout(mapWidget.value("widget_top"));
    layout_top->setObjectName(QStringLiteral("layout_top"));

    layout_center = new QVBoxLayout(mapWidget.value("widget_center"));
    layout_center->setObjectName("layout_center");

    layout_bottom = new QHBoxLayout(mapWidget.value("widget_bottom"));
    layout_bottom->setObjectName(QStringLiteral("layout_bottom"));

    std::cout << "createLayouts()" << std::endl;
}

void Ui::AboutLantease::createLabels() {
    QPointer<QLabel> label_title = new QLabel(mapWidget.value("widget_top"));
    label_title->setObjectName(QStringLiteral("label_title"));
}

void Ui::AboutLantease::buildAboutDialog() {
    layout_main->addWidget(mapWidget.value("widget_top"));
    layout_main->addWidget(mapWidget.value("widget_center"));
    layout_main->addWidget(mapWidget.value("widget_bottom"));

    std::cout << "buildAboutDialog()" << std::endl;
}

void Ui::AboutLantease::enableDebugLines(bool isDebug) {
    if(isDebug) {
        mapWidget.value("widget_top")->setStyleSheet("background-color:red");
        mapWidget.value("widget_center")->setStyleSheet("background-color:green");
        mapWidget.value("widget_bottom")->setStyleSheet("background-color:blue");
    }
}

void Ui::AboutLantease::retranslateUi() {
    this->setWindowTitle(QApplication::translate("dialog_aboutLantease", "About Lantease", Q_NULLPTR));
}
