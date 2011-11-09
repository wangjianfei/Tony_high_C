#ifndef _MYCLOCK_H_
#define _MYCLOCK_H_

#include<QLCDNumber>

class myClock:public QLCDNumber
{
Q_OBJECT
public:
    myClock(QWidget *parent = 0);
    ~myClock();
private slots:
    void show_time();
};

#endif
