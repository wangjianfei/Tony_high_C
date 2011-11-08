/*析构函数*/
/*一般情况下：先构造的后析构  后构造的先析构*/
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student(int n,string nam ,char s)
    {
        num = n;
        name =  name;
        sex = s;
        cout<<"Constructor called"<<endl;
    }
    ~Student()
    {
        cout<<"destructor called"<<num<<endl;
    }
    void display()
    {
        cout<<"num:"<<num<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"sex:"<<sex<<endl;
    }

private:
    int num;
    string name;
    char sex;
};

int main(int argc, const char *argv[])
{
    Student stud1(10010 ,"wang_li",'m');
    stud1.display();
    Student stud2(10011 ,"zhangfun" ,'m');
    stud2.display();
    return 0;
}

