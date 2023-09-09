/********************************************************************************
** Form generated from reading UI file 'ranktime.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKTIME_H
#define UI_RANKTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RankTime
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RankTime)
    {
        if (RankTime->objectName().isEmpty())
            RankTime->setObjectName(QString::fromUtf8("RankTime"));
        RankTime->resize(800, 600);
        menubar = new QMenuBar(RankTime);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        RankTime->setMenuBar(menubar);
        centralwidget = new QWidget(RankTime);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        RankTime->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(RankTime);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RankTime->setStatusBar(statusbar);

        retranslateUi(RankTime);

        QMetaObject::connectSlotsByName(RankTime);
    } // setupUi

    void retranslateUi(QMainWindow *RankTime)
    {
        RankTime->setWindowTitle(QCoreApplication::translate("RankTime", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RankTime: public Ui_RankTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKTIME_H
