#include "set.h"
#include "ui_set.h"

set::set(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::set)
{
    ui->setupUi(this);
    timer = new QTimer();
    timer->setInterval(2000);
    timer->start();
    ui->vSliderVolume->setVisible(false);
}


set::~set()
{
    delete ui;
}

void set::on_btnPlay_clicked()
{
    if(QMediaPlayer:: PlayingState == m_mediaPlayer.state()){
        m_mediaPlayer.pause();
        ui->btnPlay->setText("Play");
    }
    else{
        m_mediaPlayer.play();
        ui->btnPlay->setText("Pause");
    }
}


void set::on_hSliderPlayProgress_sliderMoved(int position)
{
    m_mediaPlayer.setPosition(m_mediaPlayer.duration()*position/100);
}
void set::setSliderValue()
{
    ui->hSliderPlayProgress->setValue(m_mediaPlayer.position()*100/m_mediaPlayer.duration());
}

void set::on_vSliderVolume_sliderMoved(int position)
{
    m_mediaPlayer.setVolume(position);
}

void set::on_lwMusicList_itemDoubleClicked(QListWidgetItem *item)
{
    m_PlayRow = ui->lwMusicList->row(item);
    m_mediaPlayer.stop();
    m_mediaPlayer.setMedia(QUrl::fromLocalFile(m_playPath+"/"+item->text()));
    m_mediaPlayer.play();
    ui->hSliderPlayProgress->setValue(m_mediaPlayer.position());
    ui->btnPlay->setText("Pause");
    connect(timer, SIGNAL(timeout()), this, SLOT(setSliderValue()));
}

void set::on_btnAddMusic_clicked()
{
    QString fileName = QFileDialog::getExistingDirectory(NULL,"Select Music Dir",".",NULL);
    QDir dir(fileName);
    QStringList nameFilters;
    nameFilters << "*.mp3";
    QStringList files = dir.entryList(nameFilters, QDir::Files|QDir::Readable, QDir::Name);
    ui->lwMusicList->addItems(files);
    m_playPath = fileName;
}

void set::on_btnPreMusic_clicked()
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

void set::on_btnNextMusic_clicked()
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

void set::on_btnVolume_clicked()
{
    if(ui->vSliderVolume->isVisible()){
        ui->vSliderVolume->setVisible(false);
    }else{
        ui->vSliderVolume->setVisible(true);
    }
}

void set::on_vSliderVolume_sliderReleased()
{
     ui->vSliderVolume->setVisible(false);
}

