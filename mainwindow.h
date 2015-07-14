#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "win_qextserialport.h"
#include "qcustomplot.h"
#include <QCloseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_button_open_clicked();
    void on_button_filter_clicked();
    void readMyCom();

    void on_button_close_clicked();

    void on_hSlider_pid_a_valueChanged(int value);

    void on_hSlider_pid_b_valueChanged(int value);

    void on_hSlider_pid_c_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    Win_QextSerialPort *myCom = NULL;
    QVector<double> *x, *y;
    QVector<double> *xt, *yt;

    void setupPlot(QCustomPlot *customPlot);
    void plotUpdate(QCustomPlot *customPlot, double target, double feedback);
    void select_serial_port();
    void send_parameter(float val, char head2);
    void read_saved_pid_parameter();
    void save_pid_parameter();
    void closeEvent(QCloseEvent *event);
};

#endif // MAINWINDOW_H
