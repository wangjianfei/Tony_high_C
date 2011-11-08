#include <iostream>

using namespace std;

class Date;
class Time
{
public:
    Time(int,int ,int);
    void display(Date &);
private:
    int hour;
    int minute;
    int sec;
};

class Date
{
public:
    Date(int,int ,int);
    friend void Time::display(Date &);
/*友元类函数的一些用法  friend 写在整个函数声明的前面*/
private:
    int month;
    int day;
    int year;
};

Time::Time(int h,int m,int s)
{
    hour = h;
    minute = m;
    sec = s;
}

void Time::display(Date &d)
{
/*注意写时必须加上对象名 如：d.day*/
    cout<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

Date::Date(int m,int d,int y)
{
    month = m;
    day = d;
    year = y;
}

int main(int argc, const char *argv[])
{
    Time t1(10,13,56);
    Date d1(10,22,2011);
    t1.display(d1);
    return 0;
}

