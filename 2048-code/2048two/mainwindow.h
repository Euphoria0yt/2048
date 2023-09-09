#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"gameclassic.h"
#include"introduce.h"
#include"gamefast.h"
#include"gamen.h"
#include"gameset.h"
#include"intr.h"
#include <QMainWindow>
#include <QKeyEvent>
#include <QPushButton>
#include <QPainter>
#include <QTime>
#include <QDebug> //用来 Debug
#include <QMessageBox>//自定义消息提示框
#include<QLabel>
#include<QFont>
#include<QIcon>
#include<QPixmap>
#include<QTimer>
#include<QPalette>
#include<QSound>
#include<QMediaPlayer>
#include<QToolBar>
#include<QAction>
#include"gametime.h"
#include"mainwindow1.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QPushButton *btnOver;
    QSound *ClassicSound;
    QSound *Background;
    QSound *TimeSound;
    QSound *Fast;
    QSound *nwSound;
    QSound *IntSound;
    QSound *SetSound;
    QSound *ExitSound;
    QMenu * topic0;
    QMenu * topic1;

    QMediaPlayer *player;

private slots:
    void on_pushButton_clicked();
    void dealslot();

    void on_pushButton_2_clicked();
    void dealslot2();

    void on_pushButton_4_clicked();
    void dealsolt4();

    void on_pushButton_6_clicked();
    void dealsolt5();

    //游戏按钮
    void on_pushButton_5_clicked();
    void dealslot6();

    void on_pushButton_3_clicked();
    void dealslot8();

private:
    Ui::MainWindow *ui;
    GameClassic wid;
    Intr wid2;
    GameFast wid4;
    GameN wid5;
    MainWindow1 wid6;
    GameTime wid8;

};

#endif // MAINWINDOW_H
