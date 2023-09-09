#include "gamen.h"
#include "ui_gamen.h"
#include<QSound>
#include<QMediaPlayer>
#include<QSound>
#include<QMediaPlayer>
#include<QPropertyAnimation>
#include<QSound>
#include<QMediaPlayer>
#include<QToolBar>
#include<QMouseEvent>
#include<QAction>
#include<stdio.h>


GameN::GameN(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameN)
{
    ui->setupUi(this);
    this->setFixedSize(800,660);
    //去边框  同时保留窗口原有的属性
    setWindowFlags(Qt::FramelessWindowHint | windowFlags() );
    //返回主界面按钮
    QPixmap pixmap;
    ui->pushButton->setGeometry(400, 0, 400, 70);
    pixmap = QPixmap(":/image/six1.png");
    pixmap = pixmap.scaled(ui->pushButton->width(), ui->pushButton->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->pushButton->setIconSize(QSize(ui->pushButton->width(), ui->pushButton->height()));
    ui->pushButton->setIcon(pixmap);
    ui->pushButton->setFlat(true);
    ui->pushButton->setParent(this);

    //选择n维模式按钮
    ui->four->setGeometry(0, 0, 400, 330);
    pixmap = QPixmap(":/image/five.png");
    pixmap = pixmap.scaled(ui->four->width(), ui->four->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->four->setIconSize(QSize(ui->four->width(), ui->four->height()));
    ui->four->setIcon(pixmap);
    ui->four->setFlat(true);
    ui->four->setParent(this);

    ui->five->setGeometry(400, 70, 400, 260);
    pixmap = QPixmap(":/image/six2.png");
    pixmap = pixmap.scaled(ui->five->width(), ui->five->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->five->setIconSize(QSize(ui->five->width(), ui->five->height()));
    ui->five->setIcon(pixmap);
    ui->five->setFlat(true);
    ui->five->setParent(this);

    ui->six->setGeometry(0, 330, 400, 330);
    pixmap = QPixmap(":/image/seven.png");
    pixmap = pixmap.scaled(ui->six->width(), ui->six->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->six->setIconSize(QSize(ui->six->width(), ui->six->height()));
    ui->six->setIcon(pixmap);
    ui->six->setFlat(true);
    ui->six->setParent(this);

    ui->seven->setGeometry(400, 330, 400, 330);
    pixmap = QPixmap(":/image/eight.png");
    pixmap = pixmap.scaled(ui->seven->width(), ui->seven->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->seven->setIconSize(QSize(ui->seven->width(), ui->seven->height()));
    ui->seven->setIcon(pixmap);
    ui->seven->setFlat(true);
    ui->seven->setParent(this);

    connect(&wid20,&Nfive::ChangeUislot20,this,&GameN::dealslot20);
    connect(&wid21,&Nsix::ChangeUiSlot21,this,&GameN::dealslot21);
    connect(&wid22,&Nseven::ChangeUiSlot22,this,&GameN::dealslot22);
    connect(&wid23,&Neight::ChangeUislot20,this,&GameN::dealslot23);


}
GameN::~GameN()
{

    delete ui;
}

void GameN::on_pushButton_clicked()
{
    QSound * FastSound = new QSound("qrc:/music/click.wav");
    FastSound->play();

    NSound = new QSound("qrc:/music/click.wav");
    NSound->play();
    emit ChangeUiSlot5();
}


void GameN::on_four_clicked()
{
    QSound * FastSound = new QSound("qrc:/music/click.wav");
    FastSound->play();

    this->hide();
    wid20.show();
}

void GameN::dealslot20()
{
    QSound * FastSound = new QSound("qrc:/music/click.wav");
    FastSound->play();

   this->show();
    wid20.hide();
}

void GameN::on_five_clicked()
{
    QSound * FastSound = new QSound("qrc:/music/click.wav");
    FastSound->play();

    this->hide();
    wid21.show();
}

void GameN::dealslot21()
{
    this->show();
     wid21.hide();
}

void GameN::on_six_clicked()
{
    QSound * FastSound = new QSound("qrc:/music/click.wav");
    FastSound->play();

    this->hide();
    wid22.show();
}

void GameN::dealslot22()
{
    QSound * FastSound = new QSound("qrc:/music/click.wav");
    FastSound->play();

    this->show();
     wid22.hide();
}

void GameN::on_seven_clicked()
{
    QSound * FastSound = new QSound("qrc:/music/click.wav");
    FastSound->play();

    this->hide();
    wid23.show();
}

void GameN::dealslot23()
{
    QSound * FastSound = new QSound("qrc:/music/click.wav");
    FastSound->play();

    this->show();
     wid23.hide();
}
