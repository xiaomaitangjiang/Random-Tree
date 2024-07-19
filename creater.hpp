#ifndef CREATER_HPP
#define CREATER_HPP

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class creater;
}

class creater : public QDialog
{
    Q_OBJECT

public:
    explicit creater(QWidget *parent = nullptr);
    ~creater();

private slots:
    void on_gamestart_clicked();

private:
    Ui::creater *ui;
};

#endif // CREATER_HPP
