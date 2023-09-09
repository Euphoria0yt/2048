#include "gameset.h"
#include "ui_gameset.h"
#include<QSound>
#include<QMediaPlayer>
#include<QListWidget>

GameSet::GameSet(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameSet)
{
    ui->setupUi(this);
    this->setFixedSize(500,350);

    //去边框  同时保留窗口原有的属性
    setWindowFlags(Qt::FramelessWindowHint | windowFlags() );

    //返回主界面按钮的设置
    QPixmap pixmap;
    ui->pushButton->setGeometry(370, 32, 70, 25);
    ui->pushButton->setFont(QFont("微软雅黑", 18));
    pixmap = QPixmap(":/image/BackMain.png");
    pixmap = pixmap.scaled( ui->pushButton->width(),  ui->pushButton->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->pushButton->setIconSize(QSize( ui->pushButton->width(),  ui->pushButton->height()));
    ui->pushButton->setIcon(pixmap);
    ui->pushButton->setFlat(true);


    //背景图的设置
    QPalette PAllbackground = this->palette();
    QImage ImgAllbackground(":/image/setBackground.png");
    QImage fitimgpic=ImgAllbackground.scaled(this->width(),this->height(), Qt::IgnoreAspectRatio);
    PAllbackground.setBrush(QPalette::Window, QBrush(fitimgpic));
    this->setPalette(PAllbackground);


    //音量条
    volumeSlider = new QSlider(Qt::Horizontal,this);      //垂直进度条
    volumeSlider->setObjectName(tr("seekSlider"));
    volumeSlider->setGeometry(70,240,350,30);
    volumeSlider->setCursor(Qt::PointingHandCursor);
    volumeSlider->setRange(0,100);  //上下限
    volumeSlider->setValue(50);     //初始值


    connect(volumeSlider,SIGNAL(sliderMoved(int)),this,SLOT(VolumeChange(int)));

    //音乐器按钮
    ui->frontBt->setGeometry(115, 175,  40,40);
    pixmap = QPixmap(":/image/front.png");
    pixmap = pixmap.scaled( ui->frontBt->width(),  ui->frontBt->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->frontBt->setIconSize(QSize( ui->frontBt->width(),  ui->frontBt->height()));
    ui->frontBt->setIcon(pixmap);
    ui->frontBt->setFlat(true);
    ui->frontBt->setParent(this);

    ui->playBtn->setGeometry(185, 175,  40,40);
    pixmap = QPixmap(":/image/play.png");
    pixmap = pixmap.scaled( ui->playBtn->width(),  ui->playBtn->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->playBtn->setIconSize(QSize( ui->playBtn->width(),  ui->playBtn->height()));
    ui->playBtn->setIcon(pixmap);
    ui->playBtn->setFlat(true);
    ui->playBtn->setParent(this);

    ui->pauseBtn->setGeometry(255, 175,  40,40);
    pixmap = QPixmap(":/image/pause.png");
    pixmap = pixmap.scaled( ui->pauseBtn->width(),  ui->pauseBtn->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->pauseBtn->setIconSize(QSize( ui->pauseBtn->width(),  ui->pauseBtn->height()));
    ui->pauseBtn->setIcon(pixmap);
    ui->pauseBtn->setFlat(true);
    ui->pauseBtn->setParent(this);


    ui->nextBt->setGeometry(315, 175,40,40);
    pixmap = QPixmap(":/image/next.png");
    pixmap = pixmap.scaled( ui->nextBt->width(),  ui->nextBt->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->nextBt->setIconSize(QSize( ui->nextBt->width(),  ui->nextBt->height()));
    ui->nextBt->setIcon(pixmap);
    ui->nextBt->setFlat(true);
    ui->nextBt->setParent(this);



}

GameSet::~GameSet()
{
    delete ui;
}




void GameSet::on_pushButton_clicked()
{
    SetSound = new QSound("qrc:/music/click.wav");
    SetSound->play();
        emit ChangeUiSlot6();
}

void GameSet::on_playBtn_clicked()
{
    if(QMediaPlayer::PausedState!=m_mediaPlayer.state()){
        m_mediaPlayer.setMedia(QUrl::fromLocalFile("D:\\2048\\2048two\\music\\background.wav"));
    }
    m_mediaPlayer.play();
}

void GameSet::on_pauseBtn_clicked()
{
    if(QMediaPlayer::PausedState!=m_mediaPlayer.state()){
        m_mediaPlayer.pause();
    }
}

//音量控制
void GameSet::VolumeChange(int vol)
{
    qDebug()<<vol;
    m_mediaPlayer.setVolume(vol);
}


