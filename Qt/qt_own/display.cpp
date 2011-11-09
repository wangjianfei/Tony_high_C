#include"display.h"
#include<QStringList>
#include<QProcess>


mydisplay::mydisplay(QWidget *parent):QWidget(parent)
{
    playform = new QWidget(this);
    playform->setGeometry(0, 0, 560, 400);
    process = new QProcess(this);
    connect(process,SIGNAL(started()),this,SLOT(started()));
}

void mydisplay::dis_show(const QString filename)
{

    QStringList args;
    args << tr("-slave");
    args << "-quiet";
    args << tr("-wid")<<QString::number(playform->winId());
    args << filename;
   // process->setProcessChannelMode(QProcess::MergedChannels);
    process->start(tr("/usr/bin/mplayer"),args);
    emit started();
}


