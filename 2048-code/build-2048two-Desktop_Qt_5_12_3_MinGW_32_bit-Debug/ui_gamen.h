/********************************************************************************
** Form generated from reading UI file 'gamen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEN_H
#define UI_GAMEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameN
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *four;
    QPushButton *six;
    QPushButton *five;
    QPushButton *seven;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GameN)
    {
        if (GameN->objectName().isEmpty())
            GameN->setObjectName(QString::fromUtf8("GameN"));
        GameN->resize(800, 600);
        centralwidget = new QWidget(GameN);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 10, 84, 24));
        four = new QPushButton(centralwidget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(80, 60, 84, 24));
        six = new QPushButton(centralwidget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setGeometry(QRect(80, 240, 84, 24));
        five = new QPushButton(centralwidget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setGeometry(QRect(460, 60, 84, 24));
        seven = new QPushButton(centralwidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setGeometry(QRect(470, 250, 84, 24));
        GameN->setCentralWidget(centralwidget);
        four->raise();
        six->raise();
        five->raise();
        seven->raise();
        pushButton->raise();
        menubar = new QMenuBar(GameN);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        GameN->setMenuBar(menubar);
        statusbar = new QStatusBar(GameN);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GameN->setStatusBar(statusbar);

        retranslateUi(GameN);

        QMetaObject::connectSlotsByName(GameN);
    } // setupUi

    void retranslateUi(QMainWindow *GameN)
    {
        GameN->setWindowTitle(QApplication::translate("GameN", "MainWindow", nullptr));
        pushButton->setText(QString());
        four->setText(QString());
        six->setText(QString());
        five->setText(QString());
        seven->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameN: public Ui_GameN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEN_H
