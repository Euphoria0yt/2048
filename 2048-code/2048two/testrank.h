#ifndef TESTRANK_H
#define TESTRANK_H
#include <QMainWindow>
#include <QVector>
#include <QLabel>


namespace Ui {
class testRank;
}

class testRank : public QMainWindow
{
    Q_OBJECT

public:
    explicit testRank(QWidget *parent = nullptr);
    ~testRank();
    QVector<int> b;
    QVector<QString>z;
    void settext();
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



private slots:
//    void on_pushButton_clicked();
signals:
//    void ChangeUiSlot9();


private:
    Ui::testRank *ui;
};

#endif //TESTRANK_H
