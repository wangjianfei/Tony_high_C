#include <iostream>
#include <cstring>

using namespace std;

/*sturct*/class point  //c++里面的结构体里可以定义函数
{
    /*class 默认是private*/
public:  /*作用域是整个函数的任何地方*/
    /*void init()
    {
        a = 1;
        b = 2;
    }*/
    point()   /*系统默认的初始化函数 如果不写系统会自动执行一个空函数 在类
                  变量定义之后 就直接执行 不受任何影响  必须定义成public*/
    {
        a = 1;
        b = 2;
        p = (char *)new char[1024];  //new 相当于malloc()
        strcpy(p,"wangjianfei");
    }
//    ~point()  /*析构函数  在return 函数之后再执行 */
 //   {
   //     if(p)delete []p;//delete 相当于free()
     //   p = NULL;//释放指针
        /*new malloc 函数开辟的空间必须释放 指向malloc 的指针必须在free
         * 后指向NULL 以免对指针操作造成一些程序的崩溃*/
  //  }
    void show()
    {
        cout<<"num.a = "<<a<<endl<<"num.b = "<<b<<endl;
    }
    
private:
    int a;// = 1;
    int b;// = 2;
    char *p;
};

int main(int argc, const char *argv[])
{
    point num;/*point()函数在num开辟之后执行 不受任何影响 即使class中不写 
                 也会执行  执行一个point的空函数*/
 //   num.a = 1;
 //   num.b = 2;
  //  cout<<"num.a = "<<num.a<<endl<<"num.b = "<<num.b<<endl;
    num.show();
    return 0;/*~point()在return 函数之后执行 主要是释放malloc new 等开辟
              * 的空间  同时使指针指向NULL*/
}


