#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student(int n,string nam,char s)
    {
        num = n;
        name = nam;
        sex = s;
    }
    ~Student()
    {}
protected:
    int num;
    string name;
    char sex;
};

class Student1:public Student
{
public:

}

