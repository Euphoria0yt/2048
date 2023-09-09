/********************************************************************************
** Form generated from reading UI file 'introduce.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRODUCE_H
#define UI_INTRODUCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Introduce
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *Introduce)
    {
        if (Introduce->objectName().isEmpty())
            Introduce->setObjectName(QString::fromUtf8("Introduce"));
        Introduce->resize(800, 600);
        centralwidget = new QWidget(Introduce);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(710, 170, 84, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 250, 84, 24));
        Introduce->setCentralWidget(centralwidget);

        retranslateUi(Introduce);

        QMetaObject::connectSlotsByName(Introduce);
    } // setupUi

    void retranslateUi(QMainWindow *Introduce)
    {
        Introduce->setWindowTitle(QApplication::translate("Introduce", "MainWindow", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QApplication::translate("Introduce", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Introduce: public Ui_Introduce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRODUCE_H
