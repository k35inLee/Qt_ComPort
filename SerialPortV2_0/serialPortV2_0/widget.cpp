#include "widget.h"
#include "ui_widget.h"


#include <string>
#include <QAction>
#include <QMessageBox>
#include <QStatusBar>
#include <QDialog>
#include <QMenuBar>
#include <QMenu>
#include <QMainWindow>
#include <qdatetime.h>  // 用于获取系统时间

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QTimer *timer1 = new QTimer(this);
    connect(timer1, SIGNAL(timeout()), this, SLOT(timerUpdate()));
    timer1->start(1000);


    this->timer = new QTimer(this);// 这个定时器用以串口定时发送功能
    QObject::connect(this->timer, &QTimer::timeout, this, &Widget::serialPortSend);
    this->serialPortDetect();       // 串口检测
    this->serialPort = NULL;
    this->setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setFixedSize(this->width(), this->height());

    // 打开超链接
    ui->label_url->setOpenExternalLinks(true);
    ui->label_url->setText("<a href=\"https://blog.csdn.net/Kevin_8_Lee/\">https://blog.csdn.net/Kevin_8_Lee/");


    pl = ui->textEdit_receive->palette();
    connect(ui->checkBox_white, SIGNAL(stateChanged(int)), this, SLOT(on_checkBox_white_stateChanged(int)));


}

Widget::~Widget()
{
    delete ui;
}



void Widget::timerUpdate(void)
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");    // 设置时间日期显示格式  年-月-日 时:分:秒  星期
    ui->textBrowser_time->setTextColor(Qt::blue);
    //ui->textBrowser_time->setTextBackgroundColor(Qt::yellow);
    ui->textBrowser_time->setText(str);
}

// Open 按钮按下 打开串口
void Widget::on_pushButton_open2close_clicked()
{
    this->serialPortOpen();
}

// 发送按钮按下  发送信息
void Widget::on_pushButton_send_clicked()
{
    if(this->serialPort!=NULL)
    {
        this->serialPortSend();
    }
}


// 串口打开的操作
void Widget::serialPortOpen()
{
    if(this->serialPort==NULL)
    {
        this->serialPort = new QSerialPort(this);

        this->serialPort->setPortName(ui->comboBox_serialName->currentText());
        this->serialPort->setBaudRate(ui->comboBox_baud->currentText().toInt());
        switch(ui->comboBox_dataBits->currentText().toInt())
        {
        case 8:
            this->serialPort->setDataBits(QSerialPort::Data8);break;
        case 7:
            this->serialPort->setDataBits(QSerialPort::Data7);break;
        case 6:
            this->serialPort->setDataBits(QSerialPort::Data6);break;
        case 5:
            this->serialPort->setDataBits(QSerialPort::Data5);break;
        default:
            break;
        }
        switch(ui->comboBox_parity->currentIndex())
        {
        case 0:
            this->serialPort->setParity(QSerialPort::NoParity);
            break;
        case 1:
            this->serialPort->setParity(QSerialPort::OddParity);
            break;
        case 2:
            this->serialPort->setParity(QSerialPort::EvenParity);
            break;
        default:
            break;
        }
        switch (ui->comboBox_stopBits->currentIndex())
        {
        case 0:
            this->serialPort->setStopBits(QSerialPort::OneStop);
            break;
        case 1:
            this->serialPort->setStopBits(QSerialPort::OneAndHalfStop);
            break;
        case 2:
            this->serialPort->setStopBits(QSerialPort::TwoStop);
            break;
        default:
            break;
        }

        if(!serialPort->open( QIODevice::ReadWrite ))
        {
            //ui->textEdit->append("open faild");
            delete serialPort;
            this->serialPort=NULL;
            ui->pushButton_open2close->setText("Open");
        }
        else
        {
            ui->pushButton_open2close->setText("Close");
            QObject::connect(this->serialPort,&QSerialPort::readyRead,this,&Widget::serialPortReceive);
        }
    }
    else
    {
        serialPort->close();
        delete serialPort;
        serialPort=NULL;
        ui->pushButton_open2close->setText("Open");
    }


}


// 串口扫描函数  扫描打开的串口
void Widget::serialPortDetect()
{
    this->detectFlag=1;
    QList<QSerialPortInfo> serialPortList(QSerialPortInfo::availablePorts());
    QSerialPort tempSerial;
    ui->comboBox_serialName->clear();
    for(int i=0;i<serialPortList.size();i++)
    {
        tempSerial.setPort(serialPortList.at(i));
        //if(tempSerial.open(QIODevice::ReadWrite))
        //{
           ui->comboBox_serialName->addItem(serialPortList.at(i).portName());
           tempSerial.close();
        //}
    }
    this->detectFlag=0;
}

// 串口发送对应槽函数
void Widget::serialPortSend()
{
    if(ui->checkBox_hex_send->checkState()==Qt::Unchecked)
    {
        this->serialPort->write(ui->textEdit_send->toPlainText().toLocal8Bit());
        this->sendNumber+=ui->textEdit_send->toPlainText().toLocal8Bit().size();
    }
    else
    {
        this->serialPort->write(QByteArray::fromHex( ui->textEdit_send->toPlainText().toLocal8Bit() ));
        this->sendNumber+=QByteArray::fromHex( ui->textEdit_send->toPlainText().toLocal8Bit() ).size();
    }

    ui->label_send_number->setText(QString::number(this->sendNumber));
}


// 串口接收对应的处理函数
void Widget::serialPortReceive()
{
    QByteArray temp(this->serialPort->readAll());
    QString tempStr;
    if(ui->checkBox_hex_show->checkState()==Qt::Unchecked)
    {
        tempStr=QString::fromLocal8Bit(temp);
    }
    else
    {
        tempStr=temp.toHex();
    }

    if(!temp.isEmpty())
    {
        ui->textEdit_receive->moveCursor(QTextCursor::End);
        ui->textEdit_receive->insertPlainText(tempStr);
        // 上面两句跟下面的append效果一样
        //on_checkBox_white_stateChanged(Qt::Checked);
        //ui->textEdit_receive->append(tempStr);

    }
    this->receiveNumber+=temp.size();
    ui->label_receive_number->setText(QString::number(this->receiveNumber));
    temp.clear();
    tempStr.clear();
}


// 清除接收按钮对应的槽函数
void Widget::on_pushButton_clearRec_clicked()
{
    ui->textEdit_receive->clear();
}


// 清除发送按钮 对应槽函数
void Widget::on_pushButton_clearSend_clicked()
{
    ui->textEdit_send->clear();
}

// 串口名字下标选择
void Widget::on_comboBox_serialName_currentIndexChanged(const QString &arg1)
{
    if(this->serialPort&&!this->detectFlag)
    {
        this->serialPort->close();
        delete serialPort;
        this->serialPort=NULL;
        //this->serialPort->setPortName(arg1);
        this->serialPortOpen();
    }
}


// 波特率 选项框的备选项设计
void Widget::on_comboBox_baud_currentIndexChanged(const QString &arg1)
{
    if(this->serialPort)
    {
        this->serialPort->setBaudRate(arg1.toInt());
    }
}


// 数据位选项框备选项
void Widget::on_comboBox_dataBits_currentIndexChanged(int index)
{
    if(this->serialPort)
    {
        switch(index)
        {
        case 0:
            this->serialPort->setDataBits(QSerialPort::Data8);break;
        case 1:
            this->serialPort->setDataBits(QSerialPort::Data7);break;
        case 2:
            this->serialPort->setDataBits(QSerialPort::Data6);break;
        case 3:
            this->serialPort->setDataBits(QSerialPort::Data5);break;
        default:
            break;
        }
    }
}



// 停止位 选项框的备选项
void Widget::on_comboBox_stopBits_currentIndexChanged(int index)
{
    if(this->serialPort)
    {
        switch (index)
        {
        case 0:
            this->serialPort->setStopBits(QSerialPort::OneStop);
            break;
        case 1:
            this->serialPort->setStopBits(QSerialPort::OneAndHalfStop);
            break;
        case 2:
            this->serialPort->setStopBits(QSerialPort::TwoStop);
            break;
        default:
            break;
        }
    }
}


// 奇偶校验位 选项框的备选项
void Widget::on_comboBox_parity_currentIndexChanged(int index)
{
    if(this->serialPort)
    {
        switch(index)
        {
        case 0:
            this->serialPort->setParity(QSerialPort::NoParity);
            break;
        case 1:
            this->serialPort->setParity(QSerialPort::OddParity);
            break;
        case 2:
            this->serialPort->setParity(QSerialPort::EvenParity);
            break;
        default:
            break;
        }
    }
}

// 清除统计的Send 和 Receive 数量
void Widget::on_pushButton_clear_log_clicked()
{
    this->sendNumber=0;
    this->receiveNumber=0;
    ui->label_receive_number->setText(QString::number(0));
    ui->label_send_number->setText(QString::number(0));
}


// 勾选定时发送
void Widget::on_checkBox_timer_send_stateChanged(int arg1)
{
    if(this->serialPort)
    {
        if(arg1==Qt::Checked)
        {
            this->timer->start(ui->lineEdit_send_time->text().toInt());
        }
        if(arg1==Qt::Unchecked)
        {
            this->timer->stop();
        }
    }
}



// 扫描串口按钮按下
void Widget::on_pushButton_detect_serial_clicked()
{
    this->serialPortDetect();
}

void Widget::on_checkBox_white_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked)
    {
        pl.setBrush(QPalette::Base, QBrush(QColor(255,255,255)));
        ui->textEdit_receive->setPalette(pl);
        ui->textEdit_receive->setTextColor(Qt::black);
    }
    else
    {
        pl.setBrush(QPalette::Base, QBrush(QColor(0,0,0)));
        ui->textEdit_receive->setPalette(pl);
        ui->textEdit_receive->setTextColor(Qt::green);
    }
}


