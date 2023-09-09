/********************************************************************************
** Form generated from reading UI file 'crank.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRANK_H
#define UI_CRANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRank
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CRank)
    {
        if (CRank->objectName().isEmpty())
            CRank->setObjectName(QString::fromUtf8("CRank"));
        CRank->resize(800, 600);
        centralwidget = new QWidget(CRank);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(600, 80, 84, 24));
        CRank->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CRank);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        CRank->setMenuBar(menubar);
        statusbar = new QStatusBar(CRank);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CRank->setStatusBar(statusbar);

        retranslateUi(CRank);

        QMetaObject::connectSlotsByName(CRank);
    } // setupUi

    void retranslateUi(QMainWindow *CRank)
    {
        CRank->setWindowTitle(QApplication::translate("CRank", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("CRank", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CRank: public Ui_CRank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRANK_H
