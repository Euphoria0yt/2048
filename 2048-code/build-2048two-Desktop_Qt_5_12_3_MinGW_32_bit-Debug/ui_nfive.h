/********************************************************************************
** Form generated from reading UI file 'nfive.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NFIVE_H
#define UI_NFIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nfive
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Nfive)
    {
        if (Nfive->objectName().isEmpty())
            Nfive->setObjectName(QString::fromUtf8("Nfive"));
        Nfive->resize(800, 600);
        centralwidget = new QWidget(Nfive);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 140, 84, 24));
        Nfive->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Nfive);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Nfive->setMenuBar(menubar);
        statusbar = new QStatusBar(Nfive);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Nfive->setStatusBar(statusbar);

        retranslateUi(Nfive);

        QMetaObject::connectSlotsByName(Nfive);
    } // setupUi

    void retranslateUi(QMainWindow *Nfive)
    {
        Nfive->setWindowTitle(QApplication::translate("Nfive", "MainWindow", nullptr));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Nfive: public Ui_Nfive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NFIVE_H
