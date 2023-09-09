#include "intr.h"
#include "ui_intr.h"
#include"QSound"
#include<QLabel>

Intr::Intr(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Intr)
{
    ui->setupUi(this);
    //返回主界面按钮的设置
    this->setFixedSize(800,660);


    //去边框  同时保留窗口原有的属性
    setWindowFlags(Qt::FramelessWindowHint | windowFlags() );

    QPixmap pixmap;
    ui->pushButton->setGeometry(590, 58, 150, 50);
    ui->pushButton->setFont(QFont("微软雅黑", 18));
    pixmap = QPixmap(":/image/BackMain.png");
    pixmap = pixmap.scaled( ui->pushButton->width(),  ui->pushButton->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->pushButton->setIconSize(QSize( ui->pushButton->width(),  ui->pushButton->height()));
    ui->pushButton->setIcon(pixmap);
    ui->pushButton->setFlat(true);

    //背景图的设置
    QPalette PAllbackground = this->palette();
    QImage ImgAllbackground(":/image/Introduce.png");
    QImage fitimgpic=ImgAllbackground.scaled(this->width(),this->height(), Qt::IgnoreAspectRatio);
    PAllbackground.setBrush(QPalette::Window, QBrush(fitimgpic));
    this->setPalette(PAllbackground);

    //经典模式介绍
    QLabel* label1 = new QLabel(this);
    QFont ft;
    label1->setWordWrap(true);
    label1->setAlignment(Qt::AlignVCenter);
    label1->setText("经典模式：                                                                     "
                    "一开始方格内会出现2或者4等这两个小数字，玩家只需要上下左右其中一个方向来移动出现的数字，"
                    "所有的数字就会向滑动的方向靠拢，而滑出的空白方块就会随机出现一个数字，相同的数字相撞时会"
                    "叠加靠拢，然后一直这样，不断的叠加最终拼凑出2048这个数字就算成功。                                                                                          "
                    "限时模式：                                                                       此模式会进行5分钟的倒计时，争取在规定的时间拿到更多的分数！                                极速模式：                                                                        此模式下，每500ms会自动产生一个数字，需要玩家快速的将数字合成！                                            n维模式：                                                                        "
                    "此模式下，玩家可自行选择数组的维数进行游戏                                            游戏设置：                                                                                   可以在里面添加想听的歌曲作为背景音                                                 快捷键：                                                                       可通过0（蓝），1（粉），2（绿），3（红）按键来改变游戏主题色");
    label1->resize(660, 600);
    label1->move(30,70);
    ft.setPointSize(10);
    label1->setFont(ft);
    label1->setStyleSheet("color:#FFFFFF;");


}

Intr::~Intr()
{
    delete ui;
}

void Intr::on_pushButton_clicked()
{
    TimeSound = new QSound("qrc:/music/click.wav");
    TimeSound->play();
    emit ChangeUiSlot2();
}
