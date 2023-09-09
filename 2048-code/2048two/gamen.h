#ifndef GAMEN_H
#define GAMEN_H

#include <QMainWindow>
#include<QSound>
#include<QMediaPlayer>
#include<QSound>
#include<QMediaPlayer>
#include<QPushButton>
#include <QMainWindow>
#include <QKeyEvent>
#include <QPushButton>
#include <QPainter>
#include <QTime>
#include <QDebug> //用来 Debug
#include <QMessageBox>//自定义消息提示框
#include<QLabel>
#include<QFont>
#include<QIcon>
#include<QPixmap>
#include<QTimer>
#include<QPalette>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QPropertyAnimation>
#include<QSound>
#include<QMediaPlayer>
#include<QMouseEvent>
#include<vector>
#include<stdio.h>
#include"nfive.h"
#include"nsix.h"
#include"nseven.h"
#include"neight.h"
using namespace std;
namespace Ui {
class GameN;
}

class GameN : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameN(QWidget *parent = nullptr);
    ~GameN();
    QSound *NSound;


private slots:
    void on_pushButton_clicked();
    void on_four_clicked();
    void dealslot20();

    void on_five_clicked();
    void dealslot21();

    void on_six_clicked();
    void dealslot22();

    void on_seven_clicked();
    void dealslot23();

signals:
    void ChangeUiSlot5();


private:
    Ui::GameN *ui;
    Nfive wid20;
    Nsix wid21;
    Nseven wid22;
    Neight wid23;
};

#endif // GAMEN_H
