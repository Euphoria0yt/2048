/********************************************************************************
** Form generated from reading UI file 'neight.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEIGHT_H
#define UI_NEIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Neight
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Neight)
    {
        if (Neight->objectName().isEmpty())
            Neight->setObjectName(QString::fromUtf8("Neight"));
        Neight->resize(800, 600);
        centralwidget = new QWidget(Neight);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 210, 93, 28));
        Neight->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Neight);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Neight->setMenuBar(menubar);
        statusbar = new QStatusBar(Neight);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Neight->setStatusBar(statusbar);

        retranslateUi(Neight);

        QMetaObject::connectSlotsByName(Neight);
    } // setupUi

    void retranslateUi(QMainWindow *Neight)
    {
        Neight->setWindowTitle(QApplication::translate("Neight", "MainWindow", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Neight: public Ui_Neight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEIGHT_H
