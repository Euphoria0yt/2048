#include "mainwindow1.h"
#include "ui_mainwindow1.h"
#include<QSound>

MainWindow1::MainWindow1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow1)
{
    ui->setupUi(this);
    this->setFixedSize(800,660);
    timer = new QTimer();
    timer->setInterval(2000);
    timer->start();
    ui->vSliderVolume->setVisible(false);


    //背景图的设置
     QPalette PAllbackground = this->palette();
     QImage ImgAllbackground(":/image/setBackground.png");
     QImage fitimgpic=ImgAllbackground.scaled(this->width(),this->height(), Qt::IgnoreAspectRatio);
     PAllbackground.setBrush(QPalette::Window, QBrush(fitimgpic));
     this->setPalette(PAllbackground);


     //返回界面按钮
     QPixmap pixmap;
     ui->btnBack->setGeometry(590, 58, 150, 50);
     ui->btnBack->setFont(QFont("微软雅黑", 18));
     pixmap = QPixmap(":/image/BackMain.png");
     pixmap = pixmap.scaled( ui->btnBack->width(),  ui->btnBack->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
     ui->btnBack->setIconSize(QSize( ui->btnBack->width(),  ui->btnBack->height()));
     ui->btnBack->setIcon(pixmap);
     ui->btnBack->setFlat(true);

     //进度条大小
     ui->hSliderPlayProgress->setGeometry(70,450,550,20);

     //设置音量初始值及大小
     ui->vSliderVolume->setValue(10);
     ui->vSliderVolume->setGeometry(690,210,20,300);

     //音乐器按钮
       ui->btnPreMusic->setGeometry(155, 500, 65,65);
       pixmap = QPixmap(":/image/front.png");
       pixmap = pixmap.scaled( ui->btnPreMusic->width(),  ui->btnPreMusic->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
       ui->btnPreMusic->setIconSize(QSize( ui->btnPreMusic->width(),  ui->btnPreMusic->height()));
       ui->btnPreMusic->setIcon(pixmap);
       ui->btnPreMusic->setFlat(true);
       ui->btnPreMusic->setParent(this);

       ui->btnPlay->setGeometry(255, 500,  65,65);
       pixmap = QPixmap(":/image/play.png");
       pixmap = pixmap.scaled( ui->btnPlay->width(),  ui->btnPlay->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
       ui->btnPlay->setIconSize(QSize( ui->btnPlay->width(),  ui->btnPlay->height()));
       ui->btnPlay->setIcon(pixmap);
       ui->btnPlay->setFlat(true);
       ui->btnPlay->setParent(this);

       ui->btnPause->setGeometry(355, 500,  65,65);
       pixmap = QPixmap(":/image/pause.png");
       pixmap = pixmap.scaled( ui->btnPause->width(),  ui->btnPause->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
       ui->btnPause->setIconSize(QSize( ui->btnPause->width(),  ui->btnPause->height()));
       ui->btnPause->setIcon(pixmap);
       ui->btnPause->setFlat(true);
       ui->btnPause->setParent(this);


       ui->btnNextMusic->setGeometry(455, 500,65,65);
       pixmap = QPixmap(":/image/next.png");
       pixmap = pixmap.scaled( ui->btnNextMusic->width(),  ui->btnNextMusic->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
       ui->btnNextMusic->setIconSize(QSize( ui->btnNextMusic->width(),  ui->btnNextMusic->height()));
       ui->btnNextMusic->setIcon(pixmap);
       ui->btnNextMusic->setFlat(true);
       ui->btnNextMusic->setParent(this);

       ui->btnAddMusic->setGeometry(670, 130,65,65);
       pixmap = QPixmap(":/image/add.png");
       pixmap = pixmap.scaled( ui->btnAddMusic->width(),  ui->btnAddMusic->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
       ui->btnAddMusic->setIconSize(QSize( ui->btnAddMusic->width(),  ui->btnAddMusic->height()));
       ui->btnAddMusic->setIcon(pixmap);
       ui->btnAddMusic->setFlat(true);
       ui->btnAddMusic->setParent(this);

       ui->btnVolume->setGeometry(670, 500,65,65);
       pixmap = QPixmap(":/image/lp.png");
       pixmap = pixmap.scaled( ui->btnVolume->width(),  ui->btnVolume->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
       ui->btnVolume->setIconSize(QSize( ui->btnVolume->width(),  ui->btnVolume->height()));
       ui->btnVolume->setIcon(pixmap);
       ui->btnVolume->setFlat(true);
       ui->btnVolume->setParent(this);


}

MainWindow1::~MainWindow1()
{
    delete ui;
}

void MainWindow1::on_btnPlay_clicked()
{
    if(QMediaPlayer:: PlayingState != m_mediaPlayer.state()){
        m_mediaPlayer.play();

    }
}

void MainWindow1::on_btnPause_clicked()
{
    if(QMediaPlayer:: PlayingState == m_mediaPlayer.state()){
        m_mediaPlayer.pause();
    }
}


void MainWindow1::on_hSliderPlayProgress_sliderMoved(int position)
{
    m_mediaPlayer.setPosition(m_mediaPlayer.duration()*position/100);
}
void MainWindow1::setSliderValue()
{
    ui->hSliderPlayProgress->setValue(m_mediaPlayer.position()*100/m_mediaPlayer.duration());
}

void MainWindow1::on_vSliderVolume_sliderMoved(int position)
{
    m_mediaPlayer.setVolume(position);
}

void MainWindow1::on_lwMusicList_itemDoubleClicked(QListWidgetItem *item)
{
    m_PlayRow = ui->lwMusicList->row(item);
    m_mediaPlayer.stop();
    m_mediaPlayer.setMedia(QUrl::fromLocalFile(m_playPath+"/"+item->text()));
    m_mediaPlayer.play();
    ui->hSliderPlayProgress->setValue(m_mediaPlayer.position());
    connect(timer, SIGNAL(timeout()), this, SLOT(setSliderValue()));
}

void MainWindow1::on_btnAddMusic_clicked()
{
    QSound *ClickSound = new QSound("qrc:/music/click.wav");
    ClickSound->play();
    QString fileName = QFileDialog::getExistingDirectory(NULL,"Select Music Dir",".",NULL);
    QDir dir(fileName);
    QStringList nameFilters;
    nameFilters << "*.mp3";
    QStringList files = dir.entryList(nameFilters, QDir::Files|QDir::Readable, QDir::Name);
    ui->lwMusicList->addItems(files);
    m_playPath = fileName;
}

void MainWindow1::on_btnPreMusic_clicked()
{
    if(m_PlayRow == 0){
        m_PlayRow = ui->lwMusicList->count() - 1;
    }
    else{
        m_PlayRow--;
    }
    QListWidgetItem *item = ui->lwMusicList->item(m_PlayRow);
    item->setSelected(true);
    m_mediaPlayer.stop();
    m_mediaPlayer.setMedia(QUrl::fromLocalFile(m_playPath+"/"+item->text()));
    m_mediaPlayer.play();
}

void MainWindow1::on_btnNextMusic_clicked()
{
    if(m_PlayRow + 1 == ui->lwMusicList->count()){
        m_PlayRow = 0;
    }
    else{
        m_PlayRow++;
    }
    QListWidgetItem *item = ui->lwMusicList->item(m_PlayRow);
    item->setSelected(true);
    m_mediaPlayer.stop();
    m_mediaPlayer.setMedia(QUrl::fromLocalFile(m_playPath+"/"+item->text()));
    m_mediaPlayer.play();
}

void MainWindow1::on_btnVolume_clicked()
{
    QSound *ClickSound = new QSound("qrc:/music/click.wav");
    ClickSound->play();
    if(ui->vSliderVolume->isVisible()){
        ui->vSliderVolume->setVisible(false);
    }else{
        ui->vSliderVolume->setVisible(true);
    }
}

void MainWindow1::on_vSliderVolume_sliderReleased()
{
     ui->vSliderVolume->setVisible(false);
}


void MainWindow1::on_btnBack_clicked()
{
    QSound *ClickSound = new QSound("qrc:/music/click.wav");
    ClickSound->play();
    emit changeUislot10();
}


