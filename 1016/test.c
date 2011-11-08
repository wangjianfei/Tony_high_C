#include <stdio.h>

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
/*    printf("%x\n",a);
    printf("%x\n",*a);

    printf("%x\n",a+1);
    printf("%x\n",*(a+1));*/
    //printf("%d\n",a[1][2]);
    printf("%d\n",program(add,5,3));
//    int array[3][4]={{1,2,3,4}\
                      ,{5,6,7,8},{9,10,11,12}};
    return 0;
}

