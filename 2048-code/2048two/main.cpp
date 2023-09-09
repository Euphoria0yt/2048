#include "mainwindow.h"
#include <QApplication>
#include<QTextCodec>
#include<QSound>
#include<QMediaPlayer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(895,540);
    w.setWindowTitle("yt's 2048");
    w.show();
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));//解决消息框乱码


    return a.exec();
}
