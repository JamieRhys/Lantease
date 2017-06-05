/********************************************************************************
** Form generated from reading UI file 'lanteasemw.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANTEASEMW_H
#define UI_LANTEASEMW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *menu_exit;
    QWidget *widget_main;
    QGridLayout *gridLayout_2;
    QGridLayout *layout_widgetCentral;
    QWidget *widget_bottom;
    QVBoxLayout *verticalLayout_3;
    QWidget *verticalWidget_2;
    QVBoxLayout *widget_center;
    QWidget *verticalWidget;
    QVBoxLayout *widget_top;
    QMenuBar *menubar;
    QMenu *menu_file;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        menu_exit = new QAction(MainWindow);
        menu_exit->setObjectName(QStringLiteral("menu_exit"));
        widget_main = new QWidget(MainWindow);
        widget_main->setObjectName(QStringLiteral("widget_main"));
        gridLayout_2 = new QGridLayout(widget_main);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        layout_widgetCentral = new QGridLayout();
        layout_widgetCentral->setObjectName(QStringLiteral("layout_widgetCentral"));
        widget_bottom = new QWidget(widget_main);
        widget_bottom->setObjectName(QStringLiteral("widget_bottom"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_bottom->sizePolicy().hasHeightForWidth());
        widget_bottom->setSizePolicy(sizePolicy);
        widget_bottom->setMinimumSize(QSize(0, 50));
        verticalLayout_3 = new QVBoxLayout(widget_bottom);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        layout_widgetCentral->addWidget(widget_bottom, 3, 0, 1, 1);

        verticalWidget_2 = new QWidget(widget_main);
        verticalWidget_2->setObjectName(QStringLiteral("verticalWidget_2"));
        widget_center = new QVBoxLayout(verticalWidget_2);
        widget_center->setObjectName(QStringLiteral("widget_center"));

        layout_widgetCentral->addWidget(verticalWidget_2, 2, 0, 1, 1);

        verticalWidget = new QWidget(widget_main);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy1);
        verticalWidget->setMinimumSize(QSize(0, 50));
        widget_top = new QVBoxLayout(verticalWidget);
        widget_top->setObjectName(QStringLiteral("widget_top"));

        layout_widgetCentral->addWidget(verticalWidget, 1, 0, 1, 1);


        gridLayout_2->addLayout(layout_widgetCentral, 0, 0, 1, 1);

        MainWindow->setCentralWidget(widget_main);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu_file = new QMenu(menubar);
        menu_file->setObjectName(QStringLiteral("menu_file"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_file->menuAction());
        menu_file->addAction(menu_exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        menu_exit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        menu_file->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANTEASEMW_H
