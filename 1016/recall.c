
#include <stdio.h>


struct stu
{
    int num;
    struct stu *next;
};
 
typedef int (*func)(int a,int b);

int add(int a,int b)
{
    return (a+b);
}
int sub(int a,int b)
{
    return (a-b);
}

int program(func x, int a,int b)
{
    return (*x)(a,b);
}

int main(int argc, const char *argv[])
{
    stu data;
    data.num = 5;
    printf("%d\n",data.num);
    printf("%d\n",program(add,5,3));
    printf("%d\n",program(sub,5,3));
    return 0;
}

