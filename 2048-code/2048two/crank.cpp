#include "crank.h"
#include "ui_crank.h"

CRank::CRank(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CRank)
{
    ui->setupUi(this);
}

CRank::~CRank()
{
    delete ui;
}

void CRank::on_pushButton_clicked()
{
    emit ChangeUISolt8();
}
