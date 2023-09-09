#ifndef NSEVEN_H
#define NSEVEN_H

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
class Nseven;
}

class Nseven : public QMainWindow
{
    Q_OBJECT

public:
    explicit Nseven(QWidget *parent = nullptr);
    ~Nseven();
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

     int s[7][7];
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
    void ChangeUiSlot22();
public slots:
    void slotStart();

private:
    Ui::Nseven *ui;
};

#endif // NSEVEN_H
