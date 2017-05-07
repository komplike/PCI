QT += core
QT -= gui

CONFIG += c++11

TARGET = cli
CONFIG += console
CONFIG -= appbundle

TEMPLATE = app

SOURCES += cli.cpp \
    card.cpp \
    table.cpp \
    game.cpp \
    pile.cpp \
    save.cpp

HEADERS += \
    card.h \
    table.h \
    game.h \
    save.h
