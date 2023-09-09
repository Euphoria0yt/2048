/********************************************************************************
** Form generated from reading UI file 'gameclassic.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMECLASSIC_H
#define UI_GAMECLASSIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameClassic
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GameClassic)
    {
        if (GameClassic->objectName().isEmpty())
            GameClassic->setObjectName(QString::fromUtf8("GameClassic"));
        GameClassic->resize(800, 600);
        centralwidget = new QWidget(GameClassic);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 230, 84, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(490, 50, 84, 24));
        GameClassic->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameClassic);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        GameClassic->setMenuBar(menubar);
        statusbar = new QStatusBar(GameClassic);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GameClassic->setStatusBar(statusbar);

        retranslateUi(GameClassic);

        QMetaObject::connectSlotsByName(GameClassic);
    } // setupUi

    void retranslateUi(QMainWindow *GameClassic)
    {
        GameClassic->setWindowTitle(QApplication::translate("GameClassic", "MainWindow", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameClassic: public Ui_GameClassic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMECLASSIC_H
