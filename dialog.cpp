#include "dialog.hpp"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent,QString front,QString abrove)
    : QDialog(parent)
    , ui(new Ui::Dialog)
    ,show_front(front)
    ,show_abrove(abrove)
{
    ui->setupUi(this);

    ui->label_2->setText(show_front);
    setWindowTitle(show_abrove);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_button_Box_accepted()
{
    back=ui->seed_Edit->text();
}


void Dialog::on_button_Box_rejected()
{
    QCoreApplication::exit();
}

