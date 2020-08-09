/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton_clear_log;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *Label;
    QComboBox *comboBox_serialName;
    QLabel *Label_2;
    QComboBox *comboBox_baud;
    QLabel *Label_3;
    QComboBox *comboBox_dataBits;
    QLabel *Label_4;
    QComboBox *comboBox_stopBits;
    QLabel *Label_5;
    QComboBox *comboBox_parity;
    QLabel *label;
    QPushButton *pushButton_open2close;
    QPushButton *pushButton_detect_serial;
    QPushButton *pushButton_clearRec;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLabel *label_receive_number;
    QLabel *label_send_number;
    QLabel *label_7;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_send;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_clearSend;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_timer_send;
    QLabel *label_x;
    QLineEdit *lineEdit_send_time;
    QLabel *label_9;
    QCheckBox *checkBox_hex_send;
    QCheckBox *checkBox_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_hex_show;
    QCheckBox *checkBox_white;
    QGroupBox *groupBox_9;
    QLabel *label_url;
    QGroupBox *groupBox;
    QTextBrowser *textBrowser_time;
    QGroupBox *groupBox_2;
    QTextBrowser *textEdit_receive;
    QGroupBox *groupBox_3;
    QTextEdit *textEdit_send;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(747, 602);
        pushButton_clear_log = new QPushButton(Widget);
        pushButton_clear_log->setObjectName(QString::fromUtf8("pushButton_clear_log"));
        pushButton_clear_log->setGeometry(QRect(460, 480, 121, 51));
        formLayoutWidget = new QWidget(Widget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(500, 40, 176, 233));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        Label = new QLabel(formLayoutWidget);
        Label->setObjectName(QString::fromUtf8("Label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, Label);

        comboBox_serialName = new QComboBox(formLayoutWidget);
        comboBox_serialName->setObjectName(QString::fromUtf8("comboBox_serialName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox_serialName);

        Label_2 = new QLabel(formLayoutWidget);
        Label_2->setObjectName(QString::fromUtf8("Label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, Label_2);

        comboBox_baud = new QComboBox(formLayoutWidget);
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->setObjectName(QString::fromUtf8("comboBox_baud"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_baud);

        Label_3 = new QLabel(formLayoutWidget);
        Label_3->setObjectName(QString::fromUtf8("Label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, Label_3);

        comboBox_dataBits = new QComboBox(formLayoutWidget);
        comboBox_dataBits->addItem(QString());
        comboBox_dataBits->addItem(QString());
        comboBox_dataBits->addItem(QString());
        comboBox_dataBits->addItem(QString());
        comboBox_dataBits->setObjectName(QString::fromUtf8("comboBox_dataBits"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox_dataBits);

        Label_4 = new QLabel(formLayoutWidget);
        Label_4->setObjectName(QString::fromUtf8("Label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, Label_4);

        comboBox_stopBits = new QComboBox(formLayoutWidget);
        comboBox_stopBits->addItem(QString());
        comboBox_stopBits->addItem(QString());
        comboBox_stopBits->addItem(QString());
        comboBox_stopBits->setObjectName(QString::fromUtf8("comboBox_stopBits"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox_stopBits);

        Label_5 = new QLabel(formLayoutWidget);
        Label_5->setObjectName(QString::fromUtf8("Label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, Label_5);

        comboBox_parity = new QComboBox(formLayoutWidget);
        comboBox_parity->addItem(QString());
        comboBox_parity->addItem(QString());
        comboBox_parity->addItem(QString());
        comboBox_parity->setObjectName(QString::fromUtf8("comboBox_parity"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_parity);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label);

        pushButton_open2close = new QPushButton(formLayoutWidget);
        pushButton_open2close->setObjectName(QString::fromUtf8("pushButton_open2close"));

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton_open2close);

        pushButton_detect_serial = new QPushButton(formLayoutWidget);
        pushButton_detect_serial->setObjectName(QString::fromUtf8("pushButton_detect_serial"));

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButton_detect_serial);

        pushButton_clearRec = new QPushButton(formLayoutWidget);
        pushButton_clearRec->setObjectName(QString::fromUtf8("pushButton_clearRec"));

        formLayout->setWidget(7, QFormLayout::FieldRole, pushButton_clearRec);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(250, 480, 201, 58));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFrameShape(QFrame::WinPanel);

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        label_receive_number = new QLabel(layoutWidget1);
        label_receive_number->setObjectName(QString::fromUtf8("label_receive_number"));
        label_receive_number->setFrameShape(QFrame::Panel);

        gridLayout_2->addWidget(label_receive_number, 1, 1, 1, 1);

        label_send_number = new QLabel(layoutWidget1);
        label_send_number->setObjectName(QString::fromUtf8("label_send_number"));
        label_send_number->setFrameShape(QFrame::Panel);

        gridLayout_2->addWidget(label_send_number, 0, 1, 1, 1);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFrameShape(QFrame::WinPanel);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        layoutWidget3 = new QWidget(Widget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(500, 380, 95, 77));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_send = new QPushButton(layoutWidget3);
        pushButton_send->setObjectName(QString::fromUtf8("pushButton_send"));

        verticalLayout->addWidget(pushButton_send);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_clearSend = new QPushButton(layoutWidget3);
        pushButton_clearSend->setObjectName(QString::fromUtf8("pushButton_clearSend"));

        verticalLayout->addWidget(pushButton_clearSend);

        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 481, 227, 50));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_timer_send = new QCheckBox(layoutWidget);
        checkBox_timer_send->setObjectName(QString::fromUtf8("checkBox_timer_send"));

        gridLayout->addWidget(checkBox_timer_send, 0, 0, 1, 1);

        label_x = new QLabel(layoutWidget);
        label_x->setObjectName(QString::fromUtf8("label_x"));

        gridLayout->addWidget(label_x, 0, 1, 1, 1);

        lineEdit_send_time = new QLineEdit(layoutWidget);
        lineEdit_send_time->setObjectName(QString::fromUtf8("lineEdit_send_time"));

        gridLayout->addWidget(lineEdit_send_time, 0, 2, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 3, 1, 1);

        checkBox_hex_send = new QCheckBox(layoutWidget);
        checkBox_hex_send->setObjectName(QString::fromUtf8("checkBox_hex_send"));

        gridLayout->addWidget(checkBox_hex_send, 1, 0, 1, 1);

        checkBox_3 = new QCheckBox(layoutWidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout->addWidget(checkBox_3, 1, 1, 1, 2);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(500, 270, 209, 91));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(layoutWidget2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        checkBox_hex_show = new QCheckBox(layoutWidget2);
        checkBox_hex_show->setObjectName(QString::fromUtf8("checkBox_hex_show"));

        verticalLayout_2->addWidget(checkBox_hex_show);

        checkBox_white = new QCheckBox(layoutWidget2);
        checkBox_white->setObjectName(QString::fromUtf8("checkBox_white"));

        verticalLayout_2->addWidget(checkBox_white);

        groupBox_9 = new QGroupBox(Widget);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 540, 391, 51));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        groupBox_9->setFont(font);
        label_url = new QLabel(groupBox_9);
        label_url->setObjectName(QString::fromUtf8("label_url"));
        label_url->setGeometry(QRect(10, 30, 321, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_url->setFont(font1);
        label_url->setStyleSheet(QString::fromUtf8("font: 10pt \"Adobe Devanagari\";"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(420, 540, 271, 51));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        groupBox->setFont(font2);
        textBrowser_time = new QTextBrowser(groupBox);
        textBrowser_time->setObjectName(QString::fromUtf8("textBrowser_time"));
        textBrowser_time->setGeometry(QRect(20, 20, 241, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setWeight(50);
        textBrowser_time->setFont(font3);
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 481, 341));
        QFont font4;
        font4.setPointSize(10);
        groupBox_2->setFont(font4);
        textEdit_receive = new QTextBrowser(groupBox_2);
        textEdit_receive->setObjectName(QString::fromUtf8("textEdit_receive"));
        textEdit_receive->setGeometry(QRect(0, 20, 481, 321));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 360, 481, 111));
        textEdit_send = new QTextEdit(groupBox_3);
        textEdit_send->setObjectName(QString::fromUtf8("textEdit_send"));
        textEdit_send->setGeometry(QRect(0, 20, 481, 81));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButton_clear_log->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\350\256\260\345\275\225", nullptr));
        Label->setText(QApplication::translate("Widget", "\344\270\262\345\217\243:   ", nullptr));
        Label_2->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        comboBox_baud->setItemText(0, QApplication::translate("Widget", "115200", nullptr));
        comboBox_baud->setItemText(1, QApplication::translate("Widget", "19200", nullptr));
        comboBox_baud->setItemText(2, QApplication::translate("Widget", "9600", nullptr));

        Label_3->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        comboBox_dataBits->setItemText(0, QApplication::translate("Widget", "8", nullptr));
        comboBox_dataBits->setItemText(1, QApplication::translate("Widget", "7", nullptr));
        comboBox_dataBits->setItemText(2, QApplication::translate("Widget", "6", nullptr));
        comboBox_dataBits->setItemText(3, QApplication::translate("Widget", "5", nullptr));

        Label_4->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        comboBox_stopBits->setItemText(0, QApplication::translate("Widget", "1", nullptr));
        comboBox_stopBits->setItemText(1, QApplication::translate("Widget", "1.5", nullptr));
        comboBox_stopBits->setItemText(2, QApplication::translate("Widget", "2", nullptr));

        Label_5->setText(QApplication::translate("Widget", "\345\245\207\345\201\266\346\240\241\351\252\214  ", nullptr));
        comboBox_parity->setItemText(0, QApplication::translate("Widget", "\346\227\240", nullptr));
        comboBox_parity->setItemText(1, QApplication::translate("Widget", "\345\245\207\346\240\241\351\252\214", nullptr));
        comboBox_parity->setItemText(2, QApplication::translate("Widget", "\345\201\266\346\240\241\351\252\214", nullptr));

        label->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\346\223\215\344\275\234", nullptr));
        pushButton_open2close->setText(QApplication::translate("Widget", "Open", nullptr));
        pushButton_detect_serial->setText(QApplication::translate("Widget", "\346\211\253\346\217\217\344\270\262\345\217\243", nullptr));
        pushButton_clearRec->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\346\216\245\346\224\266\345\214\272", nullptr));
        label_8->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">Receive:</span></p></body></html>", nullptr));
        label_receive_number->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\">   0</p></body></html>", nullptr));
        label_send_number->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        label_7->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">Send          :</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_send->setToolTip(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\217\221\351\200\201\346\225\260\346\215\256</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_send->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_clearSend->setToolTip(QApplication::translate("Widget", "<html><head/><body><p>\346\270\205\347\251\272\345\217\221\351\200\201\347\274\223\345\206\262\345\214\272</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_clearSend->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
        checkBox_timer_send->setText(QApplication::translate("Widget", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        label_x->setText(QApplication::translate("Widget", "\345\221\250\346\234\237:", nullptr));
        lineEdit_send_time->setText(QApplication::translate("Widget", "0", nullptr));
        label_9->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">ms</span></p></body></html>", nullptr));
        checkBox_hex_send->setText(QApplication::translate("Widget", "16\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        checkBox_3->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\226\260\350\241\214", nullptr));
        checkBox->setText(QApplication::translate("Widget", "\346\227\266\351\227\264\346\210\263(\346\234\252\345\274\200\345\217\221)", nullptr));
        checkBox_hex_show->setText(QApplication::translate("Widget", "16\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        checkBox_white->setText(QApplication::translate("Widget", "\347\231\275\345\272\225\351\273\221\345\255\227(\346\233\264\346\215\242\345\211\215\346\270\205\351\231\244\346\216\245\346\224\266)", nullptr));
        groupBox_9->setTitle(QApplication::translate("Widget", "\346\210\221\347\232\204\345\215\232\345\256\242", nullptr));
#ifndef QT_NO_TOOLTIP
        label_url->setToolTip(QApplication::translate("Widget", "<html><head/><body><p>\347\202\271\345\207\273\346\211\223\345\274\200\346\210\221\347\232\204\345\215\232\345\256\242</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_url->setWhatsThis(QApplication::translate("Widget", "<html><head/><body><p>\347\202\271\345\207\273\346\211\223\345\274\200\346\210\221\347\232\204\345\215\232\345\256\242</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        label_url->setText(QApplication::translate("Widget", "https://blog.csdn.net/Kevin_8_Lee/", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "\347\263\273\347\273\237\346\227\266\351\227\264", nullptr));
        textBrowser_time->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\351\273\221\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:11pt; font-weight:600;\"><br /></p></body></html>", nullptr));
        groupBox_2->setTitle(QApplication::translate("Widget", "\346\225\260\346\215\256\346\216\245\346\224\266\345\214\272", nullptr));
        groupBox_3->setTitle(QApplication::translate("Widget", "\345\217\221\351\200\201\345\214\272", nullptr));
        textEdit_send->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">\346\254\242\350\277\216\344\275\277\347\224\250\357\274\201</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
