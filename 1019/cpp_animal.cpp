#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void sleep()
/*virtual 是虚函数的意思 当virtual void sleep() = 0;时是纯虚函数*/
    {cout<<"Aninal sleep"<<endl;}
protected:
    void eat()
    {cout<<"Animal eat"<<endl;}
private:
    void walk()
    {cout<<"Animal walk"<<endl;}
};
class Dog:public Animal 
/*:public Animal 是继承Animal的意思  如果Dog中继续写东西，相等于在Dog中添加
 * 了一个类 类似与一个结构体中包含了另一个结构体  用变量和指针是不一样的 画
 * 个图则可以一清二楚 可以明白它的调用关系*/
{
};
class Person:public Animal
{
public:
    void sleep()
    {
//      eat();
        cout<<"Person sleep"<<endl;
    }
};

int main(int argc, const char *argv[])
{
    Animal *an;
//    an->sleep();
    Person wjf;
    an = &wjf;
    an.sleep();
    return 0;
}

