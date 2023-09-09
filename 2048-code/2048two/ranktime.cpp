#include "ranktime.h"
#include "ui_ranktime.h"
#include <QDebug>
#include <QPainter>

RankTime::RankTime(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RankTime)
{
    ui->setupUi(this);

    b.resize(10);
    z.resize(10);
    this->setFixedSize(340,320);
    this->setStyleSheet("QMainWindow {background-image:url(:/picture/rankimage.png)}");
    this->setWindowTitle("Rank");
}

RankTime::~RankTime()
{
    delete ui;
}

void RankTime::settext()
{
    QFont ft;
    ft.setPointSize(15);

    label_1 = new QLabel(this);
    label_2 = new QLabel(this);
    label_3 = new QLabel(this);
    label_4 = new QLabel(this);
    label_5 = new QLabel(this);
    label_6 = new QLabel(this);
    label_7 = new QLabel(this);
    label_8 = new QLabel(this);
    label_9 = new QLabel(this);
    label_10 = new QLabel(this);

    label_1->setGeometry(40,75,600,60);
    label_2->setGeometry(40,115,600,60);
    label_3->setGeometry(40,155,600,60);
    label_4->setGeometry(40,195,600,60);
    label_5->setGeometry(40,235,600,60);
    label_6->setGeometry(200,75,600,60);
    label_7->setGeometry(200,115,600,60);
    label_8->setGeometry(200,155,600,60);
    label_9->setGeometry(200,195,600,60);
    label_10->setGeometry(200,235,600,60);

    label_1->setFont(ft);
    label_1->setStyleSheet("color:#FFFFFF;");
    label_2->setFont(ft);
    label_2->setStyleSheet("color:#FFFFFF;");
    label_3->setFont(ft);
    label_3->setStyleSheet("color:#FFFFFF;");
    label_4->setFont(ft);
    label_4->setStyleSheet("color:#FFFFFF;");
    label_5->setFont(ft);
    label_5->setStyleSheet("color:#FFFFFF;");
    label_6->setFont(ft);
    label_6->setStyleSheet("color:#FFFFFF;");
    label_7->setFont(ft);
    label_7->setStyleSheet("color:#FFFFFF;");
    label_8->setFont(ft);
    label_8->setStyleSheet("color:#FFFFFF;");
    label_9->setFont(ft);
    label_9->setStyleSheet("color:#FFFFFF;");
    label_10->setFont(ft);
    label_10->setStyleSheet("color:#FFFFFF;");

    label_1->setText("一."+z[0]);
    label_2->setText("二."+z[1]);
    label_3->setText("三."+z[2]);
    label_4->setText("四."+z[3]);
    label_5->setText("五."+z[4]);
    label_6->setText("六."+z[5]);
    label_7->setText("七."+z[6]);
    label_8->setText("八."+z[7]);
    label_9->setText("九."+z[8]);
    label_10->setText("十."+z[9]);


    //背景图的设置
    QPalette PAllbackground = this->palette();
    QImage ImgAllbackground(":/image/rankBackground.png");
    QImage fitimgpic=ImgAllbackground.scaled(this->width(),this->height(), Qt::IgnoreAspectRatio);
    PAllbackground.setBrush(QPalette::Window, QBrush(fitimgpic));
    this->setPalette(PAllbackground);



    qDebug()<<z[0]<<z[1]<<z[2];
}
