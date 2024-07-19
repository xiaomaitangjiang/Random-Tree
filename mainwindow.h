#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QFont>
#include <QRegularExpression>
#include <QFontDialog>
#include <QMessageBox>
#include <QString>
#include "dialog.hpp"
#include "creater.hpp"
#include "randomCreate.hpp"

using std::vector;


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void timerEvent(QTimerEvent *event);

    void on_stop_button_clicked();

    void on_start_button_clicked();

    void on_action_speed_triggered();

    void on_action_seed_triggered();

    void on_action_characters_select_triggered();

    void on_aboutcreater_action_triggered();

    void delete_num_change();

private:
    Ui::MainWindow *ui;
    struct numIn_state
    {
        bool success;
        bool large;
        bool small;
    };
    numIn_state out={1,0,0};
    QFont font;
    int seed=0;
    int speed=0;
    int time1Id;
    unsigned int num_in;
    bool num_exhaust=0;
    bool state_start=0;
    bool first=1;
    unsigned int stop_times=0;
    QString pass_num="none";
    QString numstring;

};
#endif // MAINWINDOW_H
