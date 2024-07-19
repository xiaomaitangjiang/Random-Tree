#ifndef DIALOG_HPP
#define DIALOG_HPP

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent=nullptr,QString front="none",QString abrove="none");
    ~Dialog();

private slots:
    void on_button_Box_accepted();

    void on_button_Box_rejected();

private:
    Ui::Dialog *ui;

public:
    QString back=0;
    QString show_front;
    QString show_abrove;
};

#endif // DIALOG_HPP
