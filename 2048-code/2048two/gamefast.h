#ifndef GAMEFAST_H
#define GAMEFAST_H

#include <QMainWindow>
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

namespace Ui {
class GameFast;
}

class GameFast : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameFast(QWidget *parent = nullptr);
    ~GameFast();
    QSound *FastSound;

    void paintEvent(QPaintEvent *);
    void paintEvent1(QPaintEvent *);
    void keyPressEvent(QKeyEvent *event);


    void PressUp();
    void PressDown();
    void PressLeft();
    void PressRight();
    void myRand();
    void Change(int n);

    QPushButton *button;
    QPushButton *btnOver1;
    QPushButton *btnRank;
    QPushButton *btnIntr;
    QPushButton *btnSet;
    QSound *startSound;
    QSound *Background;
    QSound * overSound;
    QPushButton *btn0;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;

     int s[4][4];
     int score=0;
     bool state;
     int change=0;
     int flag;//生成随机数用的

     struct Grid{
         int i;
         int j;
     };


private slots:
    void on_pushButton_2_clicked();
    void onTimeout();
signals:
    void ChangeUiSlot4();
public slots:
    void slotStart();

private:
    Ui::GameFast *ui;
    QTimer *timer = new QTimer;
    int numFlag =0;//记录定时器执行次数
};

#endif // GAMEFAST_H
