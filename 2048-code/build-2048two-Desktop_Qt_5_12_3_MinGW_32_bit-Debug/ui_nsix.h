/********************************************************************************
** Form generated from reading UI file 'nsix.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NSIX_H
#define UI_NSIX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nsix
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Nsix)
    {
        if (Nsix->objectName().isEmpty())
            Nsix->setObjectName(QString::fromUtf8("Nsix"));
        Nsix->resize(800, 600);
        centralwidget = new QWidget(Nsix);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 100, 84, 24));
        Nsix->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Nsix);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Nsix->setMenuBar(menubar);
        statusbar = new QStatusBar(Nsix);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Nsix->setStatusBar(statusbar);

        retranslateUi(Nsix);

        QMetaObject::connectSlotsByName(Nsix);
    } // setupUi

    void retranslateUi(QMainWindow *Nsix)
    {
        Nsix->setWindowTitle(QApplication::translate("Nsix", "MainWindow", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Nsix: public Ui_Nsix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NSIX_H
