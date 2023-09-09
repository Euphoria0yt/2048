#include "nsix.h"
#include "ui_nsix.h"

Nsix::Nsix(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Nsix)
{
    ui->setupUi(this);
    this->setFixedSize(800,660);
   //去边框  同时保留窗口原有的属性
   setWindowFlags(Qt::FramelessWindowHint | windowFlags() );



   //初始化
   for (int i = 0; i < 6; i++)
   {
       for (int j = 0; j < 6; j++) {
           s[i][j] = 0;
       }
   }

   //开始游戏按钮
   button = new QPushButton(this);
   button->setGeometry(560, 150, 200, 60);
   button->setFont(QFont("微软雅黑", 18));
   QPixmap pixmap;
   pixmap = QPixmap(":/image/1.png");
   pixmap = pixmap.scaled(button->width(), button->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
   button->setIconSize(QSize(button->width(), button->height()));
   button->setIcon(pixmap);
   button->setFlat(true);
   connect(button, SIGNAL(clicked()), this, SLOT(slotStart()));

   //排行榜界面按钮
   btnRank = new QPushButton;
   btnRank->setGeometry(560, 220, 200, 60);
   btnRank->setFont(QFont("微软雅黑", 18));
   pixmap = QPixmap(":/image/3.png");
   pixmap = pixmap.scaled(btnRank->width(), btnRank->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
   btnRank->setIconSize(QSize(btnRank->width(), btnRank->height()));
   btnRank->setIcon(pixmap);
   btnRank->setFlat(true);
   btnRank->setParent(this);

   //返回主界面按钮
   ui->pushButton->setGeometry(560, 290, 200, 60);
   ui->pushButton->setFont(QFont("微软雅黑", 18));
   pixmap = QPixmap(":/image/back.png");
   pixmap = pixmap.scaled(ui->pushButton->width(), ui->pushButton->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
   ui->pushButton->setIconSize(QSize(ui->pushButton->width(), ui->pushButton->height()));
   ui->pushButton->setIcon(pixmap);
   ui->pushButton->setFlat(true);
   ui->pushButton->setParent(this);





   //退出游戏按钮
   btnOver1 = new QPushButton;
   btnOver1->setGeometry(560, 360, 200, 60);
   btnOver1->setFont(QFont("微软雅黑", 18));
   pixmap = QPixmap(":/image/6.png");
   pixmap = pixmap.scaled(btnOver1->width(), btnOver1->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
   btnOver1->setIconSize(QSize(btnOver1->width(), btnOver1->height()));
   btnOver1->setIcon(pixmap);
   btnOver1->setFlat(true);
   btnOver1->setParent(this);
   connect(btnOver1, &QPushButton::clicked, this, &QWidget::close);





   //随机函数
   qsrand(uint(QTime(0, 0, 0).secsTo(QTime::currentTime())));


   QLabel* label1 = new QLabel(this);
   QFont ft;
   label1->setText("2048");
   label1->resize(180, 100);
   label1->move(40, 15);
   ft.setPointSize(50);
   label1->setFont(ft);


   QLabel* label2 = new QLabel(this);
   label2->setText("合并数字达到2048！");
   label2->resize(180, 50);
   label2->move(43, 85);
   ft.setPointSize(10);
   label2->setFont(ft);
   label1->setStyleSheet("color:#000000;");//2048设置颜色
   label2->setStyleSheet("color:#000000;");

}

Nsix::~Nsix()
{
    delete ui;
}

void Nsix::on_pushButton_clicked()
{
    QSound * FastSound = new QSound("qrc:/music/click.wav");
    FastSound->play();

        emit ChangeUiSlot21();
}

void Nsix::keyPressEvent(QKeyEvent* event)
{
    if (!state) {
        return;
    }
    switch (event->key()) {
    case Qt::Key_W:
        PressUp();
        break;

    case Qt::Key_S:
        PressDown();
        break;

    case Qt::Key_A:
        PressLeft();
        break;

    case Qt::Key_D:
        PressRight();
        break;
    case Qt::Key_0:
        change = 0;
        break;
    case Qt::Key_1:
        change = 1;
        break;
    case Qt::Key_2:
        change = 2;
        break;
    case Qt::Key_3:
        change = 3;
        break;

    default:
        return;//忽略其他按钮
    }

    myRand();
    update();
}
void Nsix::paintEvent(QPaintEvent*)
{
    QPainter p(this);
    p.setBrush(Qt::red);
    p.setFont(QFont("微软雅黑", 20, 700, false));
    QString strscore;
    p.drawText(QPoint(340, 60), "score: " + QString::number(score));

    switch (change)
    {
    case 0:



        //格子的实现
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                p.setPen(Qt::transparent);//?
                if (s[i][j] == 0) {
                    p.setBrush(QColor(135, 206, 235));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                }
                else if (s[i][j] == 2) {
                    p.setBrush(QColor(175, 238, 238));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::black);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    //在方块中 绘制Text， 并且文本位置位于中部
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(2), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 4) {
                    p.setBrush(QColor(173, 216, 230));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(4), QTextOption(Qt::AlignCenter));

                }
                else if (s[i][j] == 8) {
                    p.setBrush(QColor(0, 191, 255));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(8), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 16) {
                    p.setBrush(QColor(30, 144, 255));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(16), QTextOption(Qt::AlignCenter));                }
                else if (s[i][j] == 32) {
                    p.setBrush(QColor(100, 149, 237));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(32), QTextOption(Qt::AlignCenter));
                    }
                else if (s[i][j] == 64) {
                    p.setBrush(QColor(135, 206, 250));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(64), QTextOption(Qt::AlignCenter));
                    }
                else if (s[i][j] == 128) {
                    p.setBrush(QColor(70, 130, 160));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(128), QTextOption(Qt::AlignCenter));
                   }
                else if (s[i][j] == 256) {
                    p.setBrush(QColor(72, 209, 204));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(256), QTextOption(Qt::AlignCenter));
                   }
                else if (s[i][j] == 512) {
                    p.setBrush(QColor(64, 224, 208));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(512), QTextOption(Qt::AlignCenter));
                    }
                else if (s[i][j] == 1024) {
                    p.setBrush(QColor(0, 205, 209));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(1024), QTextOption(Qt::AlignCenter));
                    }
                else if (s[i][j] == 2048) {
                    p.setBrush(QColor(0, 255, 255));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(2048), QTextOption(Qt::AlignCenter));
                    QSound *WinSound=new QSound("qrc:/music/win.wav");
                    WinSound->play();
                    }
                else {
                    p.setBrush(Qt::darkBlue);
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(s[i][j]), QTextOption(Qt::AlignCenter));
                }
            }
        }
        int max,i,j;
        max=s[0][0];//让第一个数默认为最大数，后边的数依次比较即可！
        for(i=0;i<6;++i)//将数组中的数据一一取出进行比较！
         for(j=0;j<6;++j)
         {
            if(s[i][j]>max)max=s[i][j];

         }
        if(max==2)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(175, 238, 238));
            this->setPalette(palette);
        }
        else if(max==4)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(173, 216, 230));
            this->setPalette(palette);
        }
        else if(max==8)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(0, 191, 255));
            this->setPalette(palette);
        }
        else if(max==16)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(30, 144, 255));
            this->setPalette(palette);
        }
        else if(max==32)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(100, 149, 237));
            this->setPalette(palette);
        }
        else if(max==64)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(135, 206, 250));
            this->setPalette(palette);
        }
        else if(max==128)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(70, 130, 160));
            this->setPalette(palette);
        }
        else if(max==256)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(72, 209, 204));
            this->setPalette(palette);
        }
        else if(max==512)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(64, 224, 208));
            this->setPalette(palette);
        }
        else if(max==1024)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(0, 205, 209));
            this->setPalette(palette);
        }
        else if(max==2048)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(0, 255, 255));
            this->setPalette(palette);
            QSound *WinSound=new QSound("qrc:/music/win.wav");
            WinSound->play();

        }

        break;
    case 1:

        //格子的实现
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                p.setPen(Qt::transparent);//?
                if (s[i][j] == 0) {
                    p.setBrush(QColor(255, 250, 240));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                }
                else if (s[i][j] == 2) {
                    p.setBrush(QColor(253, 245, 230));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::black);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    //在方块中 绘制Text， 并且文本位置位于中部
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(2), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 4) {
                    p.setBrush(QColor(250, 240, 230));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(4), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 8) {
                    p.setBrush(QColor(255, 239, 213));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(8), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 16) {
                    p.setBrush(QColor(255, 235, 205));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(16), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 32) {
                    p.setBrush(QColor(255, 228, 196));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(32), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 64) {
                    p.setBrush(QColor(255, 218, 185));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(64), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 128) {
                    p.setBrush(QColor(255, 222, 173));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(128), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 256) {
                    p.setBrush(QColor(255, 228, 181));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(256), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 512) {
                    p.setBrush(QColor(255, 248, 220));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(512), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 1024) {
                    p.setBrush(QColor(255, 255, 240));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(1024), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 2048) {
                    p.setBrush(QColor(255, 250, 205));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(2048), QTextOption(Qt::AlignCenter));
                    QSound *WinSound=new QSound("qrc:/music/win.wav");
                    WinSound->play();
                }
                else {
                    p.setBrush(Qt::darkBlue);
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(s[i][j]), QTextOption(Qt::AlignCenter));
                }
            }
        }
        int max1,i1,j1;
        max1=s[0][0];//让第一个数默认为最大数，后边的数依次比较即可！
        for(i1=0;i1<6;++i1)//将数组中的数据一一取出进行比较！
         for(j1=0;j1<6;++j1)
         {
            if(s[i1][j1]>max1)max1=s[i1][j1];

         }
        if(max1==2)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(253, 245, 230));
            this->setPalette(palette);
        }
        else if(max1==4)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(250, 240, 230));
            this->setPalette(palette);
        }
        else if(max1==8)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(255, 239, 213));
            this->setPalette(palette);
        }
        else if(max1==16)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(255, 235, 205));
            this->setPalette(palette);
        }
        else if(max1==32)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(255, 228, 196));
            this->setPalette(palette);
        }
        else if(max1==64)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(255, 218, 185));
            this->setPalette(palette);
        }
        else if(max1==128)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(255, 222, 173));
            this->setPalette(palette);
        }
        else if(max1==256)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(255, 228, 181));
            this->setPalette(palette);
        }
        else if(max1==512)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(255, 248, 220));
            this->setPalette(palette);
        }
        else if(max1==1024)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(255, 255, 240));
            this->setPalette(palette);
        }
        else if(max1==2048)
        {
            QPalette palette;
            palette.setColor(QPalette::Window,QColor(255, 250, 205));
            this->setPalette(palette);
            QSound *WinSound=new QSound("qrc:/music/win.wav");
            WinSound->play();
        }


        break;
    case 2:

        //格子的实现
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                p.setPen(Qt::transparent);//?
                if (s[i][j] == 0) {
                    p.setBrush(QColor(0, 250, 154));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                }
                else if (s[i][j] == 2) {
                    p.setBrush(QColor(127, 255, 170));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::black);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    //在方块中 绘制Text， 并且文本位置位于中部
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(2), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 4) {
                    p.setBrush(QColor(0, 255, 127));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(4), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 8) {
                    p.setBrush(QColor(60, 179, 113));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(8), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 16) {
                    p.setBrush(QColor(144, 238, 144));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(16), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 32) {
                    p.setBrush(QColor(152, 251, 152));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(32), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 64) {
                    p.setBrush(QColor(143, 188, 143));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(64), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 128) {
                    p.setBrush(QColor(50, 205, 50));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(128), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 256) {
                    p.setBrush(QColor(0, 255, 0));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(256), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 512) {
                    p.setBrush(QColor(34, 149, 34));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(512), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 1024) {
                    p.setBrush(QColor(0, 100, 0));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(1024), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 2048) {
                    p.setBrush(QColor(173, 255, 47));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(2048), QTextOption(Qt::AlignCenter));
                    QSound *WinSound=new QSound("qrc:/music/win.wav");
                    WinSound->play();

                }
                else {
                    p.setBrush(Qt::darkBlue);
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(s[i][j]), QTextOption(Qt::AlignCenter));
                }
            }
        }
        int max2,i2,j2;
                max2=s[0][0];//让第一个数默认为最大数，后边的数依次比较即可！
                for(i2=0;i2<4;++i2)//将数组中的数据一一取出进行比较！
                 for(j2=0;j2<4;++j2)
                 {
                    if(s[i2][j2]>max2)max2=s[i2][j2];

                 }
                if(max2==2)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(0, 255, 127));
                    this->setPalette(palette);
                }
                else if(max2==4)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(60, 179, 113));
                    this->setPalette(palette);
                }
                else if(max2==8)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(144, 238, 144));
                    this->setPalette(palette);
                }
                else if(max2==16)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(255, 235, 205));
                    this->setPalette(palette);
                }
                else if(max2==32)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(152, 251, 152));
                    this->setPalette(palette);
                }
                else if(max2==64)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(143, 188, 143));
                    this->setPalette(palette);
                }
                else if(max2==128)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(50, 205, 50));
                    this->setPalette(palette);
                }
                else if(max2==256)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(0, 255, 0));
                    this->setPalette(palette);
                }
                else if(max2==512)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(34, 149, 34));
                    this->setPalette(palette);
                }
                else if(max2==1024)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(0, 100, 0));
                    this->setPalette(palette);
                }
                else if(max2==2048)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(173, 255, 47));
                    this->setPalette(palette);
                }


        break;
    case 3:

        //格子的实现
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                p.setPen(Qt::transparent);//?
                if (s[i][j] == 0) {
                    p.setBrush(QColor(240, 128, 128));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                }
                else if (s[i][j] == 2) {
                    p.setBrush(QColor(255, 0, 0));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::black);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    //在方块中 绘制Text， 并且文本位置位于中部
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(2), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 4) {
                    p.setBrush(QColor(255, 69, 0));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(4), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 8) {
                    p.setBrush(QColor(205, 92, 92));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(8), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 16) {
                    p.setBrush(QColor(165, 42, 42));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(16), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 32) {
                    p.setBrush(QColor(178, 34, 34));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(32), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 64) {
                    p.setBrush(QColor(139, 0, 0));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(64), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 128) {
                    p.setBrush(QColor(128, 0, 0));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(128), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 256) {
                    p.setBrush(QColor(255, 99, 71));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(256), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 512) {
                    p.setBrush(QColor(250, 128, 128));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(512), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 1024) {
                    p.setBrush(QColor(255, 127, 80));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(1024), QTextOption(Qt::AlignCenter));
                }
                else if (s[i][j] == 2048) {
                    p.setBrush(QColor(255, 160, 122));
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(2048), QTextOption(Qt::AlignCenter));
                    QSound *WinSound=new QSound("qrc:/music/win.wav");
                    WinSound->play();
                }
                else {
                    p.setBrush(Qt::darkBlue);
                    p.drawRect(i * 84 + 40, j * 84 + 140, 77, 77);
                    p.setPen(Qt::white);
                    p.setFont(QFont("微软雅黑", 20, 700, false));
                    p.drawText(QRectF(i * 84 + 40, j * 84 + 140, 77, 77), QString::number(s[i][j]), QTextOption(Qt::AlignCenter));
                }
            }
        }
        int max3,i3,j3;
                max3=s[0][0];//让第一个数默认为最大数，后边的数依次比较即可！
                for(i3=0;i3<6;++i3)//将数组中的数据一一取出进行比较！
                 for(j3=0;j3<6;++j3)
                 {
                    if(s[i3][j3]>max3)max3=s[i3][j3];

                 }
                if(max3==2)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(255, 0, 0));
                    this->setPalette(palette);
                }
                else if(max3==4)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(255, 69, 0));
                    this->setPalette(palette);
                }
                else if(max3==8)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(205, 92, 92));
                    this->setPalette(palette);
                }
                else if(max3==16)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(165, 42, 42));
                    this->setPalette(palette);
                }
                else if(max3==32)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(178, 34, 34));
                    this->setPalette(palette);
                }
                else if(max3==64)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(139, 0, 0));
                    this->setPalette(palette);
                }
                else if(max3==128)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(128, 0, 0));
                    this->setPalette(palette);
                }
                else if(max3==256)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(255, 99, 71));
                    this->setPalette(palette);
                }
                else if(max3==512)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(250, 128, 128));
                    this->setPalette(palette);
                }
                else if(max3==1024)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(255, 127, 80));
                    this->setPalette(palette);
                }
                else if(max3==2048)
                {
                    QPalette palette;
                    palette.setColor(QPalette::Window,QColor(255, 160, 122));
                    this->setPalette(palette);
                }

        break;
    }

}
void Nsix::slotStart()
{
    //开始游戏按钮的音乐
    startSound = new QSound("qrc:/music/click.wav");
    startSound->play();

    //设置点击开始游戏后出现的对话框
    QMessageBox box;
    //设置文本框的大小
    box.setStyleSheet("QLabel{"
                          "min-width:400px;"
                          "min-height:80px; "
                          "font-size:20px;"
                          "}");

    box.setText(QString::fromLocal8Bit("通过WASD控制方块上下左右移动！"));
    box.setWindowTitle(QString::fromLocal8Bit("游戏规则"));
    box.setButtonText(QMessageBox::Ok , QString::fromLocal8Bit("确定"));
    box.exec();

    //数组清零
    score = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            s[i][j] = 0;
        }
    }

    //重新游戏按钮
    button->setFont(QFont("微软雅黑", 18));
    QPixmap pixmap;
    pixmap = QPixmap(":/image/2.png");
    pixmap = pixmap.scaled(button->width(), button->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    button->setIconSize(QSize(button->width(), button->height()));
    button->setIcon(pixmap);
    button->setFlat(true);

    int randi = qrand() % 4;
    int randj = qrand() % 4;
    s[randi][randj] = 2;

    state = true;
    update();
}


void Nsix::PressUp() {
    //移动
    for (int i = 0; i < 6; i++) {
        for (int j = 1; j < 6; j++) {
            if (s[i][j] == 0)continue;
            for (int p = 0; p < j; p++) {
                //查看前面是否有空格子可移动
                if (s[i][p] == 0) {
                    s[i][p] = s[i][j];
                    s[i][j] = 0;
                    break;
                }
            }
        }
    }
    //相加
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            if (s[i][j] == s[i][j + 1]) {
                s[i][j] = 2 * s[i][j];
                s[i][j + 1] = 0;
                score += s[i][j];
                for (int p = j + 2; p < 6; p++) {
                    s[i][p - 1] = s[i][p];
                }
            }
        }
    }
}
void Nsix::PressDown() {
    //移动
    for (int i = 0; i < 6; i++) {
        for (int j = 2; j >= 0; j--) {
            if (s[i][j] == 0)continue;
            for (int p = 3; p > j; p--) {
                //查看前面是否有空格子可移动
                if (s[i][p] == 0) {
                    s[i][p] = s[i][j];
                    s[i][j] = 0;
                    break;
                }
            }
        }
    }
    //相加
    for (int i = 0; i < 6; i++) {
        for (int j = 3; j > 0; j--) {
            if (s[i][j] == s[i][j - 1]) {
                s[i][j] = 2 * s[i][j];
                s[i][j - 1] = 0;
                score += s[i][j];
                for (int p = j - 2; p >= 0; p--) {
                    s[i][p + 1] = s[i][p];
                }
            }
        }
    }
}
void Nsix::PressLeft() {
    //移动
    for (int j = 0; j < 6; j++) {
        for (int i = 1; i < 6; i++) {
            if (s[i][j] == 0) {
                continue;
            }
            for (int p = 0; p < i; p++) {
                //查看前面是否有空格可移入
                if (s[p][j] == 0) {
                    s[p][j] = s[i][j];
                    s[i][j] = 0;
                    break;
                }
            }
        }
    }
    //相加
    for (int j = 0; j < 6; j++) {
        for (int i = 0; i < 3; i++) {
            if (s[i][j] == s[i + 1][j]) {
                s[i][j] = s[i][j] * 2;
                score += s[i][j];
                s[i + 1][j] = 0;
                for (int p = i + 2; p < 6; p++) {
                    s[p - 1][j] = s[p][j];
                }
            }
        }
    }
}
void Nsix::PressRight() {
    //移动
    for (int j = 0; j < 6; j++) {
        for (int i = 2; i >= 0; i--) {
            if (s[i][j] == 0) {
                continue;
            }
            for (int p = 3; p > i; p--) {
                //查看前面是否有空格可移入
                if (s[p][j] == 0) {
                    s[p][j] = s[i][j];
                    s[i][j] = 0;
                    break;
                }
            }
        }
    }
    //相加
    for (int j = 0; j < 6; j++) {
        for (int i = 3; i >= 0; i--) {
            if (s[i][j] == s[i - 1][j]) {
                s[i][j] = s[i][j] * 2;
                s[i - 1][j] = 0;
                score += s[i][j];
                for (int p = i - 2; p >= 0; p--) {
                    s[p + 1][j] = s[p][j];
                }
            }
        }
    }
}
void Nsix::myRand() {
    int i = 0, j = 0;
    //找出格子
    struct Grid n[35];
    int emp = 0;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (s[i][j] == 0) {
                n[emp].i = i;
                n[emp].j = j;
                emp++;
            }
        }
    }

    //判断游戏是否结束
    if (emp == 0)
    {
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 5; j++) {
                if (s[i][j] == s[i][j + 1]) {
                    return;
                }
            }
        }
        for (j = 0; j < 6; j++)
        {
            for (i = 0; i < 5; i++) {
                if (s[i][j] == s[i + 1][j]) {
                    return;
                }
            }
        }
        overSound=new QSound("qrc:/music/GameOver.wav");
        overSound->play();
        QMessageBox::about(this, "游戏结束", "score：" + QString::number(score) + " ");


        return;
    }

    //产生随机数
    int rand = qrand() % emp;
    flag=qrand()%2;
    if(flag==0)
    {
        s[n[rand].i][n[rand].j] = 2;
    }
    else
    {
        s[n[rand].i][n[rand].j] = 4;
    }

}
