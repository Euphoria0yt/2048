#ifndef CRANK_H
#define CRANK_H

#include <QMainWindow>

namespace Ui {
class CRank;
}

class CRank : public QMainWindow
{
    Q_OBJECT

public:
    explicit CRank(QWidget *parent = nullptr);
    ~CRank();

private slots:
    void on_pushButton_clicked();
signals:
    void ChangeUISolt8();

private:
    Ui::CRank *ui;
};

#endif // CRANK_H
