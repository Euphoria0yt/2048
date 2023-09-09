#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QMainWindow>
#include <QtMultimedia/QMediaPlayer> // 包含头文件
#include <QTimer>
#include <QListWidgetItem>
#include <QString>
#include <QFileDialog>
namespace Ui {
class MainWindow1;
}

class MainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow1(QWidget *parent=nullptr );
    ~MainWindow1();

private slots:
    void on_btnPlay_clicked();

    void on_hSliderPlayProgress_sliderMoved(int position);

    void setSliderValue();

    void on_vSliderVolume_sliderMoved(int position);

    void on_lwMusicList_itemDoubleClicked(QListWidgetItem *item);

    void on_btnAddMusic_clicked();

    void on_btnPreMusic_clicked();

    void on_btnNextMusic_clicked();

    void on_btnVolume_clicked();

    void on_vSliderVolume_sliderReleased();

    void on_btnBack_clicked();
    void on_btnPause_clicked();

signals:
    void changeUislot10();

private:
    Ui::MainWindow1 *ui;
    QMediaPlayer m_mediaPlayer; // 实例化对象
    QTimer *timer; //定时器
    QString m_playPath;
    int m_PlayRow;
};

#endif // MAINWINDOW1_H

