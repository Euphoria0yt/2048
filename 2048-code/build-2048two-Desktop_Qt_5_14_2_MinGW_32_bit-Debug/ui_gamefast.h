/********************************************************************************
** Form generated from reading UI file 'gamefast.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEFAST_H
#define UI_GAMEFAST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameFast
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *GameFast)
    {
        if (GameFast->objectName().isEmpty())
            GameFast->setObjectName(QString::fromUtf8("GameFast"));
        GameFast->resize(800, 600);
        centralwidget = new QWidget(GameFast);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(570, 330, 84, 24));
        GameFast->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(GameFast);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GameFast->setStatusBar(statusbar);
        menuBar = new QMenuBar(GameFast);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        GameFast->setMenuBar(menuBar);

        retranslateUi(GameFast);

        QMetaObject::connectSlotsByName(GameFast);
    } // setupUi

    void retranslateUi(QMainWindow *GameFast)
    {
        GameFast->setWindowTitle(QCoreApplication::translate("GameFast", "MainWindow", nullptr));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameFast: public Ui_GameFast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEFAST_H
