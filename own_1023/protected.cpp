#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    void display();
//protected:
    int num;
    string name;
    char sex;
};

void Student::display()
{
    cout<<"num:"<<num<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"sex:"<<sex<<endl;
}

class Student1:protected Student
{
public:
    void display1();
private:
    int age;
    string addr;
};

void Student1::display1()
{
    cout<<"num:"<<num<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"sex:"<<sex<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"addr:"<<addr<<endl;

}

int main(void)
{
    Student1 stud1;
    stud1.display1();
    return 0;
}













