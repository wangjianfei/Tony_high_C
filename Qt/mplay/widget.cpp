#include "widget.h"
#include<QProcess>
#include<QStringList>
#include<QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    playform = new QWidget(this);
    playform->setSizePolicy(QSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred));
    playform->setAttribute(Qt::WA_OpaquePaintEvent);
    playform->move(110,100);
    playform->setMinimumSize(360,320);
}
 void Widget::show()
 {

      QProcess *process = new QProcess(this);
      QStringList args;
      args << "-slave";
      args << "widget";
      args << "-wid"<<QString::number(this->playform->winId());
      args << "1.AVI";
      process->setProcessChannelMode(QProcess::MergedChannels);
      process->start("mplayer",args);

 }

Widget::~Widget()
{
    delete []playform;
}
