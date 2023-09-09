#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gameclassic.h"
#include"introduce.h"
#include"gamefast.h"
#include"gamen.h"
#include"gameset.h"
#include"intr.h"
#include<qpushbutton.h>
#include<QPixmap>
#include<QSound>
#include<QMediaPlayer>
#include<QMenuBar>
#include<QMenu>
#include<QAction>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //去边框  同时保留窗口原有的属性
    setWindowFlags(Qt::FramelessWindowHint | windowFlags() );


    this->setWindowTitle("经典模式");
    connect(&wid,&GameClassic::ChangeUiSlot,this,&MainWindow::dealslot);
    connect(&wid2,&Intr::ChangeUiSlot2,this,&MainWindow::dealslot2);
    connect(&wid4,&GameFast::ChangeUiSlot4,this,&MainWindow::dealsolt4);
    connect(&wid5,&GameN::ChangeUiSlot5,this,&MainWindow::dealsolt5);
    connect(&wid8,&GameTime::ChangeUislot8,this,&MainWindow::dealslot8);

    connect(&wid6,&MainWindow1::changeUislot10,this,&MainWindow::dealslot6);

    QPixmap pixmap;

    //设置背景图
    pixmap = QPixmap(":/image/MainWindow.png").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);

    //经典模式按钮
    ui->pushButton->setGeometry(110, 300, 150,50);
    ui->pushButton->setFont(QFont("微软雅黑", 18));
    pixmap = QPixmap(":/image/cla.png");
    pixmap = pixmap.scaled(ui->pushButton->width(), ui->pushButton->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->pushButton->setIconSize(QSize(ui->pushButton->width(), ui->pushButton->height()));
    ui->pushButton->setIcon(pixmap);
    ui->pushButton->setFlat(true);
    ui->pushButton->setParent(this);

    //计时模式按钮
    ui->pushButton_3->setGeometry(290, 300, 150,50);
    ui->pushButton_3->setFont(QFont("微软雅黑", 18));
    pixmap = QPixmap(":/image/time.png");
    pixmap = pixmap.scaled( ui->pushButton_3->width(),  ui->pushButton_3->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->pushButton_3->setIconSize(QSize( ui->pushButton_3->width(),  ui->pushButton_3->height()));
    ui->pushButton_3->setIcon(pixmap);
    ui->pushButton_3->setFlat(true);
    ui->pushButton_3->setParent(this);



    //极速模式按钮
    ui->pushButton_4->setGeometry(470, 300, 150,50);
    ui->pushButton_4->setFont(QFont("微软雅黑", 18));
    pixmap = QPixmap(":/image/fast.png");
    pixmap = pixmap.scaled( ui->pushButton_4->width(),  ui->pushButton_4->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->pushButton_4->setIconSize(QSize( ui->pushButton_4->width(),  ui->pushButton_4->height()));
    ui->pushButton_4->setIcon(pixmap);
    ui->pushButton_4->setFlat(true);
    ui->pushButton_4->setParent(this);

    //n维模式按钮
    ui->pushButton_6->setGeometry(650, 300, 150,50);
    ui->pushButton_6->setFont(QFont("微软雅黑", 18));
    pixmap = QPixmap(":/image/nw.png");
    pixmap = pixmap.scaled( ui->pushButton_6->width(),  ui->pushButton_6->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->pushButton_6->setIconSize(QSize( ui->pushButton_6->width(),  ui->pushButton_6->height()));
    ui->pushButton_6->setIcon(pixmap);
    ui->pushButton_6->setFlat(true);
    ui->pushButton_6->setParent(this);

    //游戏介绍按钮
    ui->pushButton_2->setGeometry(200, 370,  150,50);
    ui->pushButton_2->setFont(QFont("微软雅黑", 18));
    pixmap = QPixmap(":/image/itr.png");
    pixmap = pixmap.scaled( ui->pushButton_2->width(),  ui->pushButton_2->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->pushButton_2->setIconSize(QSize( ui->pushButton_2->width(),  ui->pushButton_2->height()));
    ui->pushButton_2->setIcon(pixmap);
    ui->pushButton_2->setFlat(true);
    ui->pushButton_2->setParent(this);


    //游戏设置按钮
    ui->pushButton_5->setGeometry(380, 370,  150,50);
    ui->pushButton_5->setFont(QFont("微软雅黑", 18));
    pixmap = QPixmap(":/image/set.png");
    pixmap = pixmap.scaled( ui->pushButton_5->width(),  ui->pushButton_5->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->pushButton_5->setIconSize(QSize( ui->pushButton_5->width(),  ui->pushButton_5->height()));
    ui->pushButton_5->setIcon(pixmap);
    ui->pushButton_5->setFlat(true);
    ui->pushButton_5->setParent(this);

    //退出游戏按钮
    btnOver = new QPushButton;
    btnOver->setGeometry(560, 370,  150,50);
    btnOver->setFont(QFont("微软雅黑", 18));
    pixmap = QPixmap(":/image/exit.png");
    pixmap = pixmap.scaled(btnOver->width(), btnOver->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    btnOver->setIconSize(QSize(btnOver->width(), btnOver->height()));
    btnOver->setIcon(pixmap);
    btnOver->setFlat(true);
    btnOver->setParent(this);
    connect(btnOver, &QPushButton::clicked, this, &QWidget::close);

}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ClassicSound = new QSound("qrc:/music/click.wav");
    ClassicSound->play();

    this->hide();
    wid.show();
}

void MainWindow::dealslot()
{
    SetSound = new QSound("qrc:/music/click.wav");
    SetSound->play();
    this->show();
    wid.hide();
}

void MainWindow::on_pushButton_2_clicked()
{
    SetSound = new QSound("qrc:/music/click.wav");
    SetSound->play();
    this->hide();
    wid2.show();
}

void MainWindow::dealslot2()
{
    IntSound = new QSound("qrc:/music/click.wav");
    IntSound->play();
    this->show();
    wid2.hide();
}



void MainWindow::on_pushButton_4_clicked()
{
    Fast = new QSound("qrc:/music/click.wav");
    Fast->play();
    this->hide();
    wid4.show();
}

void MainWindow::dealsolt4()
{
    SetSound = new QSound("qrc:/music/click.wav");
    SetSound->play();
    this->show();
    wid4.hide();
}

void MainWindow::on_pushButton_6_clicked()
{
    nwSound = new QSound("qrc:/music/click.wav");
    nwSound->play();
    this->hide();
    wid5.show();
}

void MainWindow::dealsolt5()
{
    SetSound = new QSound("qrc:/music/click.wav");
    SetSound->play();
   this->show();
    wid5.hide();
}

//返回界面函数
void MainWindow::on_pushButton_5_clicked()
{
    SetSound = new QSound("qrc:/music/click.wav");
    SetSound->play();
    this->hide();
    wid6.show();
}

void MainWindow::dealslot6()
{
    SetSound = new QSound("qrc:/music/click.wav");
    SetSound->play();
    this->show();
    wid6.hide();
}


void MainWindow::on_pushButton_3_clicked()
{
    QSound *startSound = new QSound("qrc:/music/click.wav");
    startSound->play();
    this->hide();
    wid8.show();
}

void MainWindow::dealslot8()
{
    QSound *startSound = new QSound("qrc:/music/click.wav");
    startSound->play();
    this->show();
    wid8.hide();
}
