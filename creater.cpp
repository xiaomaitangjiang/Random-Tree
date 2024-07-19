#include "creater.hpp"
#include "ui_creater.h"

creater::creater(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::creater)
{
    ui->setupUi(this);
}

creater::~creater()
{
    delete ui;
}

void creater::on_gamestart_clicked()
{
    QMessageBox::information(this,"游戏？","这里应该有个游戏，但创作者有点懒",QMessageBox::Yes);
}

