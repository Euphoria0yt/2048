/********************************************************************************
** Form generated from reading UI file 'gameset.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESET_H
#define UI_GAMESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameSet
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *nextBt;
    QPushButton *frontBt;
    QPushButton *btnAddMusic;
    QListWidget *listWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *playBtn;
    QPushButton *pauseBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GameSet)
    {
        if (GameSet->objectName().isEmpty())
            GameSet->setObjectName(QString::fromUtf8("GameSet"));
        GameSet->resize(800, 600);
        centralwidget = new QWidget(GameSet);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(630, 220, 84, 24));
        nextBt = new QPushButton(centralwidget);
        nextBt->setObjectName(QString::fromUtf8("nextBt"));
        nextBt->setGeometry(QRect(40, 310, 84, 24));
        frontBt = new QPushButton(centralwidget);
        frontBt->setObjectName(QString::fromUtf8("frontBt"));
        frontBt->setGeometry(QRect(40, 220, 84, 24));
        btnAddMusic = new QPushButton(centralwidget);
        btnAddMusic->setObjectName(QString::fromUtf8("btnAddMusic"));
        btnAddMusic->setGeometry(QRect(320, 410, 84, 24));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(240, 440, 256, 192));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 370, 341, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        playBtn = new QPushButton(widget);
        playBtn->setObjectName(QString::fromUtf8("playBtn"));

        horizontalLayout->addWidget(playBtn);

        pauseBtn = new QPushButton(widget);
        pauseBtn->setObjectName(QString::fromUtf8("pauseBtn"));

        horizontalLayout->addWidget(pauseBtn);

        GameSet->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameSet);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        GameSet->setMenuBar(menubar);
        statusbar = new QStatusBar(GameSet);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GameSet->setStatusBar(statusbar);

        retranslateUi(GameSet);

        QMetaObject::connectSlotsByName(GameSet);
    } // setupUi

    void retranslateUi(QMainWindow *GameSet)
    {
        GameSet->setWindowTitle(QApplication::translate("GameSet", "MainWindow", nullptr));
        pushButton->setText(QString());
        nextBt->setText(QString());
        frontBt->setText(QString());
        btnAddMusic->setText(QApplication::translate("GameSet", "Add", nullptr));
        playBtn->setText(QString());
        pauseBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameSet: public Ui_GameSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESET_H
