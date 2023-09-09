/********************************************************************************
** Form generated from reading UI file 'mainwindow1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW1_H
#define UI_MAINWINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow1
{
public:
    QWidget *centralwidget;
    QPushButton *btnPreMusic;
    QPushButton *btnPlay;
    QPushButton *btnPause;
    QPushButton *btnNextMusic;
    QPushButton *btnAddMusic;
    QPushButton *btnVolume;
    QListWidget *lwMusicList;
    QSlider *hSliderPlayProgress;
    QSlider *vSliderVolume;
    QPushButton *btnBack;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow1)
    {
        if (MainWindow1->objectName().isEmpty())
            MainWindow1->setObjectName(QString::fromUtf8("MainWindow1"));
        MainWindow1->resize(800, 600);
        centralwidget = new QWidget(MainWindow1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnPreMusic = new QPushButton(centralwidget);
        btnPreMusic->setObjectName(QString::fromUtf8("btnPreMusic"));
        btnPreMusic->setGeometry(QRect(90, 260, 84, 24));
        btnPlay = new QPushButton(centralwidget);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));
        btnPlay->setGeometry(QRect(190, 270, 84, 24));
        btnPause = new QPushButton(centralwidget);
        btnPause->setObjectName(QString::fromUtf8("btnPause"));
        btnPause->setGeometry(QRect(300, 270, 84, 24));
        btnNextMusic = new QPushButton(centralwidget);
        btnNextMusic->setObjectName(QString::fromUtf8("btnNextMusic"));
        btnNextMusic->setGeometry(QRect(420, 270, 84, 24));
        btnAddMusic = new QPushButton(centralwidget);
        btnAddMusic->setObjectName(QString::fromUtf8("btnAddMusic"));
        btnAddMusic->setGeometry(QRect(300, 230, 84, 24));
        btnVolume = new QPushButton(centralwidget);
        btnVolume->setObjectName(QString::fromUtf8("btnVolume"));
        btnVolume->setGeometry(QRect(430, 230, 84, 24));
        lwMusicList = new QListWidget(centralwidget);
        lwMusicList->setObjectName(QString::fromUtf8("lwMusicList"));
        lwMusicList->setGeometry(QRect(80, 190, 541, 241));
        hSliderPlayProgress = new QSlider(centralwidget);
        hSliderPlayProgress->setObjectName(QString::fromUtf8("hSliderPlayProgress"));
        hSliderPlayProgress->setGeometry(QRect(120, 200, 160, 18));
        hSliderPlayProgress->setOrientation(Qt::Horizontal);
        vSliderVolume = new QSlider(centralwidget);
        vSliderVolume->setObjectName(QString::fromUtf8("vSliderVolume"));
        vSliderVolume->setGeometry(QRect(450, 50, 18, 160));
        vSliderVolume->setOrientation(Qt::Vertical);
        btnBack = new QPushButton(centralwidget);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(370, 10, 84, 24));
        MainWindow1->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow1->setStatusBar(statusbar);

        retranslateUi(MainWindow1);

        QMetaObject::connectSlotsByName(MainWindow1);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow1)
    {
        MainWindow1->setWindowTitle(QCoreApplication::translate("MainWindow1", "MainWindow", nullptr));
        btnPreMusic->setText(QString());
        btnPlay->setText(QString());
        btnPause->setText(QString());
        btnNextMusic->setText(QString());
        btnAddMusic->setText(QString());
        btnVolume->setText(QString());
        btnBack->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow1: public Ui_MainWindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H
