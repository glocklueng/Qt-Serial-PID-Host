#-------------------------------------------------
#
# Project created by QtCreator 2015-07-14T19:13:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = serial_plot_template_project
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp \
    qextserialbase.cpp \
    win_qextserialport.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h \
    qextserialbase.h \
    win_qextserialport.h

FORMS    += mainwindow.ui
