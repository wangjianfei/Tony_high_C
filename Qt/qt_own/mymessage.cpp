#include <QLabel>
#include <QTime>
#include <QTimer>
#include <QFont>
#include <QPalette>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <qstring.h>
#include <qfile.h>
#include <qtextstream.h>
#include <qtextcodec.h>
#include "mymessage.h"
#include <QPainter>

MyMessage::MyMessage(QWidget *parent)
:QLabel(parent)
{
    //msg = QString::fromUtf8("迪斯尼世界欢迎您！ Welcome to Disneyworld!");

    /*message背景图片*/
    QLabel *label_message_pic = new QLabel(parent);
    label_message_pic->setGeometry(0, 410, 800, 70);
    QString filename = QString::fromUtf8("./system_picture/tomandjerry.jpg");
    QPixmap *picmap = new QPixmap(filename);
    label_message_pic->setPixmap(picmap->scaled(label_message_pic->width(),label_message_pic->height()));

    /*message label*/
    i = 799;
    label_message = new QLabel(parent);
    //label_message->setText(msg);
    //label_message->setGeometry(i, 410,800,70);

   /* 设置字体：绿色、FreeMono字体、80号*/
    QPalette pe;
    pe.setColor(QPalette::WindowText,Qt::green);
    label_message->setPalette(pe);
    label_message->setFont(QFont(QString::fromUtf8("hwls"), 40));

    /*定时器*/
    QTimer *timer2 = new QTimer(parent);
    QObject::connect(timer2, SIGNAL(timeout()), this, SLOT(show_message()));
    timer2->stop();
    timer2->start(10);
}

void MyMessage::setMsg(QString my_msg)
{

        label_message->setText(my_msg);
        labWidth = label_message->fontMetrics().width(label_message->text());
}

void MyMessage::show_message()
{
    i--;
    if((i + labWidth) <= 0)
        i = 799;
    label_message->setGeometry(i, 410, labWidth, 70);

}
