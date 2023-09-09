#ifndef INTRODUCE_H
#define INTRODUCE_H

#include <QMainWindow>
#include<QSound>
#include<QMediaPlayer>

namespace Ui {
class Introduce;
}

class Introduce : public QMainWindow
{
    Q_OBJECT

public:
    explicit Introduce(QWidget *parent = nullptr);
    ~Introduce();
    QSound *IntroduceSound;

private slots:
    void on_pushButton_clicked();

signals:
    void ChangeUiSlot2();
private:
    Ui::Introduce *ui;
};

#endif // INTRODUCE_H
