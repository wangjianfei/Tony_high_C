#include <QDate>
#include <QTimer>
#include "date.h"


myDate::myDate(QWidget *parent)
:QLCDNumber(parent)
{
    setSegmentStyle(Filled);
    QTimer *timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(show_date()));
    timer->start();
}

void myDate::show_date()
{
    QString date = QDate::currentDate().toString("yyyy-MM-dd");
    //QString date = QDate::currentTime().toString("hh:mm:ss");
    setNumDigits(10);
    display(date);
}
