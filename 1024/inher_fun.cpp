#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Animal
{
public:
    Animal(int a = 1,const char *na = "hello",char s = 'a')
    {
        cout<<"animal constructure"<<endl;
        age = a;
        name = new char[strlen(na)+1];
        strcpy(name,na);
        sex = s;
    }
#if 1
    Animal(Animal &t) /*拷贝默认构造函数，参数为Animal，如果不写 系统提供默认
    如果数据中有指针，必须对此函数进行编写 有一个深拷贝和浅拷贝是指指针的
    拷贝，深拷贝是指拷贝出另一块内存 和前者内容一样 ，浅拷贝是指直接考的
    地址，两个指向同一块内存*/
    {
        cout<<"animal copyconstructure"<<endl;
        age = t.age;
        
        name = new char[strlen(t.name)+1];
        strcpy(name,t.name);
        
        cout << "animal test" << strlen(t.name) + 1 << name <<endl;
        
        sex = t.sex;
    }
#endif    
    ~Animal()
    {
        if(name) delete []name;
        name = NULL;
        cout<<"animal desconstructure"<<endl;
    }
    void show()
    {
        cout<<" age is  "<<age<<endl;
        cout<<" name is  "<<name<<endl;
        cout<<" sex is   "<<sex<<endl;
    }
private:
    int age;
    char *name;
    char sex;
};

class Person:public Animal
{
public:
    Person(const char *p,int a,const char *na,char s,int n):Animal(a,na,s)
    {
        cout << "person constructure!" << endl;
        str = new char[strlen(p)+1];
        strcpy(str,p);
        num = n;
    }
 #if 1
    Person(Person &t):Animal(t)
    {  
        cout << "person copyconstructure!" << endl;
        str = new char[strlen(t.str)+1];
        strcpy(str,t.str);
        cout << "t.str" << strlen(t.str) + 1 << str<< endl;
        num = t.num;
    
    }
#endif    
    ~Person()
    {
    //    if(str)
        delete []str;
        str = NULL;
        cout<<"preson desconstructure"<<endl;
    }
    void show1()
    {
        cout<<" num is  "<<num<<endl;
        cout<<"str = "<<str<<endl;
    }
private:
    int num;
    char *str;
};


int main(int argc, const char *argv[])
{
/*    char a[]="wang";
    Animal an(5,a,'m');
    Animal bn(an);//和bn = an 一样
    bn.show();*/
    Person wjf1("yaqian",5,"wang",'m',10010);
    Person wjf(wjf1);
    wjf.show();
    wjf.show1();
    
    return 0;
}

