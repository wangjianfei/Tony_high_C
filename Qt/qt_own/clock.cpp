#include <QTime>
#include <QTimer>
#include "clock.h"

myClock::myClock(QWidget *parent)
:QLCDNumber(parent)
{
    setSegmentStyle(Filled);
    QTimer *timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(show_time()));
    timer->start();
}

void myClock::show_time()
{
    //QString time = QDate::currentDate().toString("yyyy-MM-dd");
    QString time = QTime::currentTime().toString("hh:mm:ss");
    setNumDigits(8);
    display(time);
}
