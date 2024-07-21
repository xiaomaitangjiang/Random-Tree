 #include "mainwindow.h"
 #include "randomCreate.hpp"
 #include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->linenum_show->setGeometry(120,10,210,190);
    ui->linenum_show->setAlignment(Qt::AlignCenter);
    ui->linenum_show->setText("注意：输入过大的数字可能会造成程序卡顿");
    ui->lineEdit->setMaxLength(8);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_stop_button_clicked()
{

    delete_num_change();

    if(state_start)
    {
        killTimer(time1Id);
        state_start=0;
        stop_times++;
        unsigned int numout=random_out(0,0,0,1);
        if(numout!=0)
        {
            ui->linenum_show->setText(QString::number(numout));
            ui->passlist->addItem(QString::number(numout));
        }
        else
        {
            num_exhaust=1;
            ui->linenum_show->setText("没有更多数字了");
        }
    }
}


void MainWindow::on_start_button_clicked()
{

    delete_num_change();

    numstring =ui->lineEdit->text();


    long int num_check= numstring.toInt(&(out.success));

    if(num_check<0)
    {out.small=1;}
    else if(num_check>99999998)
    {out.large=1;}

    if(!(out.success)||!((out.large==0)&&(out.small==0))||num_exhaust)
    {
        if(out.large==1)
        {ui->linenum_show->setText("数字过大");}
        else if(out.small==1)
        {ui->linenum_show->setText("不能输入负数");}
        else if(num_exhaust)
        {ui->linenum_show->setText("没有更多数字了");}
        else
        {ui->linenum_show->setText("请输入数字");}
    }
    else
    {
        bool sucess=1;
        num_in = numstring.toInt(&(out.success));
        random_create_thread(num_in,0,seed,(pass_num.toUInt(&sucess)));
        speed=speed<=0 ? 4:speed;
        time1Id = this->startTimer(speed*50);
        state_start=1;
    }


}


void MainWindow::on_action_speed_triggered()
{
    if(time1Id!=0)
    {
        killTimer(time1Id);
        time1Id=0;
    }
    bool sucess=1;
    seed=0;
    Dialog *dialog =new Dialog(this,"速度","自定义速度");
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->exec();
    speed=dialog->back.toInt(&sucess);
    if(!sucess)
        QMessageBox::warning(this,"警告","速度设置错误");
}


void MainWindow::on_action_seed_triggered()
{
    if(time1Id!=0)
    {
        killTimer(time1Id);
        time1Id=0;
    }
    stop_times=0;
    num_exhaust=0;
    random_out(0,1);
    out.success=1;
    out.large=0;
    out.small=0;
    ui->passlist->clear();
    ui->linenum_show->clear();
    ui->lineEdit->clear();
    pass_num="0";

    bool sucess=1;
    seed=0;
    Dialog *dialog =new Dialog(this,"种子","自定义种子");
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->exec();
    seed=dialog->back.toInt(&sucess);
    if(!sucess)
        if(dialog->back.startsWith("pass"))   //pass数字 实现
        {
            pass_num=dialog->back.remove(0,4);

        }
        else
        {QMessageBox::warning(this,"警告","种子设置错误");}

}


void MainWindow::on_action_characters_select_triggered()
{
    bool Selected;
    font = QFontDialog::getFont(&Selected,this);
    if(Selected)
    {
        ui->linenum_show->setFont(font);
    }
}


void MainWindow::on_aboutcreater_action_triggered()
{
    creater *dialog =new creater(this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->show();
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    if(event->timerId()==time1Id)
    {
        static vector<unsigned int> &roundList=random_create_thread(0);
        unsigned int round_num=random_out(roundList,stop_times);
        if(round_num!=0)
        {ui->linenum_show->setText(QString::number(round_num));}
    }
    else
    {return;}
}



void MainWindow::delete_num_change()
{
    if(numstring!=ui->lineEdit->text()&&(!first))
    {
        if(time1Id!=0&&state_start!=1)
        {
            killTimer(time1Id);
            time1Id=0;
        }
        stop_times=0;
        num_exhaust=0;
        random_out(0,1);
        out.success=1;
        out.large=0;
        out.small=0;
        ui->passlist->clear();
        ui->linenum_show->clear();
        pass_num="0";
    }
    first=false;

}
