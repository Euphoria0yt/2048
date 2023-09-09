#ifndef INTR_H
#define INTR_H

#include <QMainWindow>
#include<QSound>
#include<QLabel>

namespace Ui {
class Intr;
}

class Intr : public QMainWindow
{
    Q_OBJECT

public:
    explicit Intr(QWidget *parent = nullptr);
    ~Intr();
    QSound *TimeSound;

private slots:
    void on_pushButton_clicked();

signals:
    void ChangeUiSlot2();

private:
    Ui::Intr *ui;
};

#endif // INTR_H
