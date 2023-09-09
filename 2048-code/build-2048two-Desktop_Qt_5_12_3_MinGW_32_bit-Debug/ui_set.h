/********************************************************************************
** Form generated from reading UI file 'set.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_H
#define UI_SET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_set
{
public:
    QWidget *centralwidget;
    QPushButton *btnPreMusic;
    QPushButton *btnPlay;
    QPushButton *btnPause;
    QPushButton *btnNextMusic;
    QPushButton *btnAddMusic;
    QPushButton *btnVolume;
    QListView *lwMusicList;
    QSlider *hSliderPlayProgress;
    QSlider *vSliderVolume;
    QMenuBar *menubar;

    void setupUi(QMainWindow *set)
    {
        if (set->objectName().isEmpty())
            set->setObjectName(QString::fromUtf8("set"));
        set->resize(526, 411);
        centralwidget = new QWidget(set);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnPreMusic = new QPushButton(centralwidget);
        btnPreMusic->setObjectName(QString::fromUtf8("btnPreMusic"));
        btnPreMusic->setGeometry(QRect(60, 290, 84, 24));
        btnPlay = new QPushButton(centralwidget);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));
        btnPlay->setGeometry(QRect(150, 290, 84, 24));
        btnPause = new QPushButton(centralwidget);
        btnPause->setObjectName(QString::fromUtf8("btnPause"));
        btnPause->setGeometry(QRect(250, 290, 84, 24));
        btnNextMusic = new QPushButton(centralwidget);
        btnNextMusic->setObjectName(QString::fromUtf8("btnNextMusic"));
        btnNextMusic->setGeometry(QRect(350, 290, 84, 24));
        btnAddMusic = new QPushButton(centralwidget);
        btnAddMusic->setObjectName(QString::fromUtf8("btnAddMusic"));
        btnAddMusic->setGeometry(QRect(250, 250, 84, 24));
        btnVolume = new QPushButton(centralwidget);
        btnVolume->setObjectName(QString::fromUtf8("btnVolume"));
        btnVolume->setGeometry(QRect(400, 250, 84, 24));
        lwMusicList = new QListView(centralwidget);
        lwMusicList->setObjectName(QString::fromUtf8("lwMusicList"));
        lwMusicList->setGeometry(QRect(40, 10, 381, 192));
        hSliderPlayProgress = new QSlider(centralwidget);
        hSliderPlayProgress->setObjectName(QString::fromUtf8("hSliderPlayProgress"));
        hSliderPlayProgress->setGeometry(QRect(60, 340, 381, 20));
        hSliderPlayProgress->setOrientation(Qt::Horizontal);
        vSliderVolume = new QSlider(centralwidget);
        vSliderVolume->setObjectName(QString::fromUtf8("vSliderVolume"));
        vSliderVolume->setGeometry(QRect(440, 90, 18, 160));
        vSliderVolume->setOrientation(Qt::Vertical);
        set->setCentralWidget(centralwidget);
        menubar = new QMenuBar(set);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 526, 25));
        set->setMenuBar(menubar);

        retranslateUi(set);

        QMetaObject::connectSlotsByName(set);
    } // setupUi

    void retranslateUi(QMainWindow *set)
    {
        set->setWindowTitle(QApplication::translate("set", "MainWindow", nullptr));
        btnPreMusic->setText(QApplication::translate("set", "PushButton", nullptr));
        btnPlay->setText(QApplication::translate("set", "PushButton", nullptr));
        btnPause->setText(QApplication::translate("set", "PushButton", nullptr));
        btnNextMusic->setText(QApplication::translate("set", "PushButton", nullptr));
        btnAddMusic->setText(QApplication::translate("set", "PushButton", nullptr));
        btnVolume->setText(QApplication::translate("set", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class set: public Ui_set {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_H
