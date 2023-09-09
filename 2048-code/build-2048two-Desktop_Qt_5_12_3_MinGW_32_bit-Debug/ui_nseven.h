/********************************************************************************
** Form generated from reading UI file 'nseven.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NSEVEN_H
#define UI_NSEVEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nseven
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Nseven)
    {
        if (Nseven->objectName().isEmpty())
            Nseven->setObjectName(QString::fromUtf8("Nseven"));
        Nseven->resize(800, 600);
        centralwidget = new QWidget(Nseven);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 130, 84, 24));
        Nseven->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Nseven);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Nseven->setMenuBar(menubar);
        statusbar = new QStatusBar(Nseven);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Nseven->setStatusBar(statusbar);

        retranslateUi(Nseven);

        QMetaObject::connectSlotsByName(Nseven);
    } // setupUi

    void retranslateUi(QMainWindow *Nseven)
    {
        Nseven->setWindowTitle(QApplication::translate("Nseven", "MainWindow", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Nseven: public Ui_Nseven {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NSEVEN_H
