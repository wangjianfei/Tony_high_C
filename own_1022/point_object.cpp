#include <iostream>

using namespace std;

class Time
{
public:
    Time(int ,int ,int );
    int hour;
    int minute;
    int sec;
    void get_time();
private:
};

Time::Time(int h,int m,int s)
{
    hour = h;
    minute = m;
    sec = s;
}

void Time::get_time()
{
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

int main(int argc, const char *argv[])
{
    Time t1(10,10,10);    
    int *p1 = &t1.hour;
    cout<<*p1<<endl;
    t1.get_time();
    Time *p2 = &t1;//定义指向Time类对象的指针变量p2,并使p2指向t1
    p2->get_time();
    void (Time::*p3)(); //定义指向Time类共用成员函数的指针变量p3
    /*注意：与C语言函数指针的定义有一点区别 */
    p3 = &Time::get_time;
    (t1.*p3)();
    return 0;
}

