#include <iostream>
#include <string>

using namespace std;

class Time
{
public:
    void set_time();  //公共成员函数
    void show_time(); //公共成员函数
private:
    int hour;
    int minute;
    int sec;
};

void Time::set_time()
{
    cout<<"please input hour"<<endl;
    cin>>hour;
    cout<<"please input minute"<<endl;
    cin>>minute;
    cout<<"please input sec"<<endl;
    cin>>sec;
}

void Time::show_time()
{
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

int main(void)
{
    Time t1;
    t1.set_time();
    t1.show_time();
    Time t2;
    t2.set_time();
    t2.show_time();
    return 0;
}

/*函数写法比较繁琐 */
/*
int main(void)
{
    Time t1;
    cout<<"please input hour:"<<endl;
    cin>>t1.hour;
    cout<<"please input minute:"<<endl;
    cin>>t1.minute;
    cout<<"please input sec:"<<endl;
    cin>>t1.sec;
    cout<<t1.hour<<":"<<t1.minute<<":"<<t1.sec<<endl;

    Time t2;
    cout<<"please input hour:"<<endl;
    cin>>t2.hour;
    cout<<"please input minute:"<<endl;
    cin>>t2.minute;
    cout<<"please input sec:"<<endl;
    cin>>t2.sec;
    cout<<t2.hour<<":"<<t2.minute<<":"<<t2.sec<<endl;
    return 0;
}*/

/*下面是一个完整的关于类的练习的程序 类的函数在类内声明 在类外定义 还有一点
 * 关于类内的内置函数*/
/*class Student
{
public:
    inline void display();
    Student()
    {
        num = 10123;
        name = "wangjianfei";
        sex = 'M';
    }
private:
    int num;
    string name;
    char sex;
};

inline void Student::display()
{
    cout<<"num:  "<<num<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"sex:  "<<sex<<endl;
}
int main(int argc, const char *argv[])
{
    Student stud1;
    stud1.display();
    return 0;
}*/

