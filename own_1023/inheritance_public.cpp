#include <iostream>
using namespace std;

class Student
{
public:
    void get_value()
    {
        cin>>num>>name>>sex;
    }
    void display()
    {
        cout<<"num:"<<num<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"sex:"<<sex<<endl;
    }
private:
    int num;
    int name;
    int sex;
};

class Student1:public Student
{
public:
    void get_value_1()
    {
        cin>>age>>addr;
    }
    void display_1()
    {
        cout<<"age:"<<age<<endl;
        cout<<"addr:"<<addr<<endl;
    }
private:
    int age;
    int addr;
};

int main(int argc, const char *argv[])
{
    Student1 stud;
    stud.get_value();
    stud.get_value_1();
    stud.display();
    stud.display_1();

    return 0;
}

