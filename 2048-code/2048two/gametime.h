#ifndef GAMETIME_H
#define GAMETIME_H

#include <QMainWindow>
#include <QMainWindow>
#include <QPushButton>
#include <QTime>
#include <QTimer>
#include <QPainter>
#include <QKeyEvent>
#include <QMessageBox>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QVector>
#include <algorithm>
#include "ranktime.h"
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
#include<QSound>
#include<QMediaPlayer>
#include<QToolBar>
#include<QAction>
#include<QKeyEvent>
#include<QProgressBar>

namespace Ui {
class GameTime;
}

class GameTime : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameTime(QWidget *parent = nullptr);
    ~GameTime();
    void paintEvent(QPaintEvent *);
    void keyPressEvent(QKeyEvent *event);
    void paintEvent1(QPaintEvent *);

    QPushButton *button;
    QPushButton *button_2;
    QPushButton *button_3;

    RankTime *rankw;
    QVector<int> a;



    int s[4][4];
    int score = 0;  //总得分
    int max = 0;
    bool state;     //判断游戏是否结束

    int change =0;


    //wasd操作的函数
    void PressUp();
    void PressDown();
    void PressRight();
    void PressLeft();
    void Change(int n);

    //随机生成函数
    void myRand();

    struct Ns{
        int i;
        int j;
    };
public slots:
    void slotStart();
    void rank();        //排行榜
    void onTimeOut();//定时器的槽函数


private slots:
    void on_pushButton_clicked();
signals:
    void ChangeUislot8();

private:
    Ui::GameTime *ui;
    QTimer *tim;


};

#endif // GAMETIME_H
