#ifndef RANKTIME_H
#define RANKTIME_H

#include <QMainWindow>
#include <QVector>
#include <QLabel>


namespace Ui {
class RankTime;
}

class RankTime : public QMainWindow
{
    Q_OBJECT

public:
    explicit RankTime(QWidget *parent = nullptr);
    ~RankTime();
    QVector<int> b;
    QVector<QString>z;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void settext();


private:
    Ui::RankTime *ui;
};

#endif // RANKTIME_H
