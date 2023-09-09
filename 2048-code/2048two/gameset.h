#ifndef GAMESET_H
#define GAMESET_H

#include <QMainWindow>
#include<QSound>
#include <QtMultimedia>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include<QSlider>
#include <QListWidgetItem>
#include <QString>
#include <QFileDialog>


namespace Ui {
class GameSet;
}

class GameSet : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameSet(QWidget *parent = nullptr);
    ~GameSet();
    QSound *SetSound;
    QMediaPlayer m_mediaPlayer;
    QSlider *volumeSlider;




private slots:
    void on_pushButton_clicked();
    void on_playBtn_clicked();

    void on_pauseBtn_clicked();
    void VolumeChange(int);

signals:
    void ChangeUiSlot6();

private:
    Ui::GameSet *ui;


};

#endif // GAMESET_H
