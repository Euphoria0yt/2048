#include "introduce.h"
#include "ui_introduce.h"
#include<QSound>
#include<QMediaPlayer>
#include<QLabel>

Introduce::Introduce(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Introduce)
{
    ui->setupUi(this);
    this->setFixedSize(800,660);

    //返回主界面按钮的设置
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
                    "叠加靠拢，然后一直这样，不断的叠加最终拼凑出2048这个数字就算成功。");
    label1->resize(720, 600);
    label1->move(30, -75);
    ft.setPointSize(10);
    label1->setFont(ft);
    label1->setStyleSheet("color:#FFFFFF;");
}

Introduce::~Introduce()
{
    delete ui;
}

void Introduce::on_pushButton_clicked()
{
    IntroduceSound = new QSound("qrc:/music/click.wav");
    IntroduceSound->play();
    emit ChangeUiSlot2();
}
