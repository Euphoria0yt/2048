#-------------------------------------------------
#
# Project created by QtCreator 2022-08-20T17:11:21
#
#-------------------------------------------------

QT       += core gui sql
QT       += multimedia
QT       += multimediawidgets
QT       += core gui multimedia
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 2048two
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11
CONFIG +=resources_big

SOURCES += \
        gameclassic.cpp \
        gamefast.cpp \
        gamen.cpp \
        gametime.cpp \
        intr.cpp \
        main.cpp \
        mainwindow.cpp \
        mainwindow1.cpp \
        neight.cpp \
        nfive.cpp \
        nseven.cpp \
        nsix.cpp \
        ranktime.cpp \
        testrank.cpp

HEADERS += \
        gameclassic.h \
        gamefast.h \
        gamen.h \
        gametime.h \
        intr.h \
        mainwindow.h \
        mainwindow1.h \
        neight.h \
        nfive.h \
        nseven.h \
        nsix.h \
        ranktime.h \
        testrank.h

FORMS += \
        gameclassic.ui \
        gamefast.ui \
        gamen.ui \
        gametime.ui \
        intr.ui \
        mainwindow.ui \
        mainwindow1.ui \
        neight.ui \
        nfive.ui \
        nseven.ui \
        nsix.ui \
        ranktime.ui \
        testrank.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
    image/1.png \
    image/2.png \
    image/3.png \
    image/4.png \
    image/5.png \
    image/6.png \
    image/7.png \
    image/BackMain.png \
    image/Introduce.png \
    image/MainWindow.png \
    image/add.png \
    image/back.png \
    image/blue.png \
    image/blue1.png \
    image/cla.png \
    image/dsfdfdf.png \
    image/eight.png \
    image/exit.png \
    image/f.png \
    image/fast.png \
    image/five.png \
    image/front.png \
    image/green.png \
    image/green2.png \
    image/itr.png \
    image/itrBack.png \
    image/lp.png \
    image/next.png \
    image/nw.png \
    image/pause.png \
    image/pink.png \
    image/pink2.png \
    image/play.png \
    image/rankBackground.png \
    image/red.png \
    image/red2.png \
    image/set.png \
    image/setBackground.png \
    image/seven.png \
    image/six1.png \
    image/six2.png \
    image/time.png \
    image/voice.png \
    image/volume.png \
    image/w.png \
    image/win.png \
    image/wjGame.png
