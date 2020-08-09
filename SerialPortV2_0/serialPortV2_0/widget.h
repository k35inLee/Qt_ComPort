#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QMenuBar>
#include <windows.h>
#include <QDebug>
#include <QString>
#include <QDateTime>
#include <QLabel>
#include <QDesktopServices>
#include <QUrl>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_open2close_clicked();

    void on_pushButton_send_clicked();

    void on_pushButton_clearRec_clicked();

    void on_pushButton_clearSend_clicked();

    void on_pushButton_clear_log_clicked();

    void on_pushButton_detect_serial_clicked();

    void on_comboBox_baud_currentIndexChanged(const QString &arg1);

    void on_comboBox_serialName_currentIndexChanged(const QString &arg1);

    void on_comboBox_dataBits_currentIndexChanged(int index);

    void on_comboBox_stopBits_currentIndexChanged(int index);

    void on_comboBox_parity_currentIndexChanged(int index);

    void on_checkBox_timer_send_stateChanged(int arg1);

    void timerUpdate(void);

    void on_checkBox_white_stateChanged(int arg1);

private:
    Ui::Widget *ui;


    QSerialPort *serialPort;
    QTimer *timer;
    QAction *openAction;
    QMenuBar *menuBar;

    bool detectFlag = 0;

    int sendNumber=0;
    int receiveNumber=0;

    QPalette pl;

    void serialPortOpen();
    void serialPortDetect();
    void serialPortSend();
    void serialPortReceive();
    void openfile();


};

#endif // WIDGET_H
