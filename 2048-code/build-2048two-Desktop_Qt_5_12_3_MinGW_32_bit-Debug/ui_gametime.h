/********************************************************************************
** Form generated from reading UI file 'gametime.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMETIME_H
#define UI_GAMETIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameTime
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *GameTime)
    {
        if (GameTime->objectName().isEmpty())
            GameTime->setObjectName(QString::fromUtf8("GameTime"));
        GameTime->resize(800, 600);
        centralwidget = new QWidget(GameTime);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(340, 90, 181, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(300);
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(510, 120, 84, 24));
        GameTime->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameTime);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        GameTime->setMenuBar(menubar);

        retranslateUi(GameTime);

        QMetaObject::connectSlotsByName(GameTime);
    } // setupUi

    void retranslateUi(QMainWindow *GameTime)
    {
        GameTime->setWindowTitle(QApplication::translate("GameTime", "MainWindow", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameTime: public Ui_GameTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMETIME_H
