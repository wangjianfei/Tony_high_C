#include "stdio.h"


typedef int num[10];

int main(int argc, const char *argv[])
{
/*    char *p = NULL;
    char a = 'b';
    int b = 321;
    p = &a;
    printf("%d\n",*p);
    p= &b;
    printf("%d\n",*p);*/
//    while(1);
    num a;
    for(int i = 0;i < 10;i++)
    {
        a[i] = i;
        printf("%-5d",a[i]);

    }
    printf("\n");
    return 0;
}

