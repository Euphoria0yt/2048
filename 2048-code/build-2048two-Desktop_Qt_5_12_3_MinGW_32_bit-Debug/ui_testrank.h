/********************************************************************************
** Form generated from reading UI file 'testrank.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTRANK_H
#define UI_TESTRANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testRank
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *testRank)
    {
        if (testRank->objectName().isEmpty())
            testRank->setObjectName(QString::fromUtf8("testRank"));
        testRank->resize(800, 600);
        centralwidget = new QWidget(testRank);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 200, 84, 24));
        testRank->setCentralWidget(centralwidget);
        menubar = new QMenuBar(testRank);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        testRank->setMenuBar(menubar);
        statusbar = new QStatusBar(testRank);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        testRank->setStatusBar(statusbar);

        retranslateUi(testRank);

        QMetaObject::connectSlotsByName(testRank);
    } // setupUi

    void retranslateUi(QMainWindow *testRank)
    {
        testRank->setWindowTitle(QApplication::translate("testRank", "MainWindow", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class testRank: public Ui_testRank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTRANK_H
