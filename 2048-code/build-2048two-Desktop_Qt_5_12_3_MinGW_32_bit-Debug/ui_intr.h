/********************************************************************************
** Form generated from reading UI file 'intr.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTR_H
#define UI_INTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Intr
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Intr)
    {
        if (Intr->objectName().isEmpty())
            Intr->setObjectName(QString::fromUtf8("Intr"));
        Intr->resize(800, 600);
        centralwidget = new QWidget(Intr);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(540, 150, 84, 24));
        Intr->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Intr);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Intr->setMenuBar(menubar);
        statusbar = new QStatusBar(Intr);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Intr->setStatusBar(statusbar);

        retranslateUi(Intr);

        QMetaObject::connectSlotsByName(Intr);
    } // setupUi

    void retranslateUi(QMainWindow *Intr)
    {
        Intr->setWindowTitle(QApplication::translate("Intr", "MainWindow", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Intr: public Ui_Intr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTR_H
