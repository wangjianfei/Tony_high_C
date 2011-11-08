/*有子对象的派生类的构造函数*/

#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    Student(int n,string nam)
    {
        num = n;
        name = nam;
    }
    void display()
    {
        cout<<"num:"<<num<<endl<<"name:"<<name<<endl;
    }
protected:
    int num;
    string name;

};

class Student1:public Student
{
public:
    /*参数顺序没有关系，一般以后面的顺序写成一致 ，比较清晰*/
    Student1(int n2,int a,int n1,string nam1,string nam2,string ad)\
    :Student(n1,nam1),monitor(n2,nam2),age(a),addr(ad){}
    void show()
    {
        cout<<"This is a student"<<endl;
        display();
        cout<<"age:"<<age<<endl;
        cout<<"addr:"<<addr<<endl;
    }
    void show_monitor()
    {
        cout<<endl<<"Class monitor is:"<<endl;
        monitor.display();
    }
private:
    Student monitor;
    int age;
    string addr;
};

int main(int argc, const char *argv[])
{
    Student1 stud1(10010,19,10011,"wang","li","beijing");
    stud1.show();
    stud1.show_monitor();
    return 0;
}



