#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("串口调试助手 V2.0  (designed by Kevin_8_Lee)");
    w.show();

    return a.exec();
}
