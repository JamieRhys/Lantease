#-------------------------------------------------
#
# Project created by QtCreator 2017-05-25T21:29:57
#
#-------------------------------------------------

QT       += core gui

CONFIG   += debug c++14

INCLUDEPATH += includes

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Lantease
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    src/main/main.cpp \
    src/lantease/lantease.cpp \
    src/ui/mainWindow/ui_lantease.cpp \
    src/ui/aboutLantease/ui_aboutlantease.cpp


HEADERS += \
    includes/lantease/lantease.hpp \
    includes/ui/mainWindow/ui_lantease.hpp \
    includes/ui/aboutLantease/ui_aboutlantease.hpp

DISTFILES += \
    docs/licence.md \
    resources/logos/qt_logo.png \
    docs/CREDIT.txt

