#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student(int n ,string nam,float s):num(n),name(nam),score(s){}
    void display();
protected:
    int num;
    string name;
    float score;
};

/*Student::Student(int n,string nam,float s)
{
    num = n;
    name = nam;
    score = s;
}*/
#if 1
void Student::display()
{
    cout<<"num"<<num<<"\nname"<<name<<"\nscore"<<score<<"\n";
}
#endif
class Graduate:public Student
{
public:
    Graduate(int ,string,float,float);
    void display();
private:
    float pay;
};

Graduate::Graduate(int n,string nam,float s,float p):Student(n,nam,s)
{
    pay = p;
}

void Graduate::display()
{
    cout<<"num"<<num<<"\nname"<<name<<"\nscore"<<score<<"\npay"<<pay<<endl;;
}


int main(int argc, const char *argv[])
{
    Student stud1(1001,"Li",87);
    Graduate grad1(2001,"Wang",98.5,560);
    Student *pt = &stud1;
    pt->display();
    pt = &grad1;
    pt->display();
    return 0;
}














