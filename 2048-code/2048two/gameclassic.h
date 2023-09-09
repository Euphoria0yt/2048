#ifndef GAMECLASSIC_H
#define GAMECLASSIC_H

#include <QMainWindow>
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
#include <QtMultimedia>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include"testrank.h"
#include <QVector>
#include <algorithm>



namespace Ui {
class GameClassic;
}

class GameClassic : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameClassic(QWidget *parent = nullptr);
    ~GameClassic();
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
   QPushButton *btnIntr;
   QPushButton *btnSet;
   QSound *startSound;
   QSound *Background;
   QSound * overSound;
   QPushButton *btn0;
   QPushButton *btn1;
   QPushButton *btn2;
   QPushButton *btn3;

   //排行榜
   testRank *rankw;
   QVector<int> a;

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
    void on_pushButton_clicked();



signals:
    void ChangeUiSlot();

public slots:
    void slotStart();
    void ChangeTopic0();
    void ChangeTopic1();
    void ChangeTopic2();
    void ChangeTopic3();

    void rank();        //排行榜



private:
    Ui::GameClassic *ui;


};

#endif // GAMECLASSIC_H
