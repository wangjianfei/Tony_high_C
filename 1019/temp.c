#include <stdio.h>
/*用的是主函数中a,b的地址对其初始化  可以实现a,b的值得交换*/
/*void swap(int *a,int *b)

{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}*/

/*用的是主函数中a,b的地址对其初始化  但在本函数中实现的是地址之间的交换 ，
 * a,b的值并没有交换*/
/*void swap(int *a,int *b)
{
    int *temp = NULL;
    temp = a;
    a = b;
    b = temp;

}*/
void swap(int a,int b)//用的是主函数中的a,b给其初始化
{
    int temp;
    temp = a;
    a = b;
    b = temp;

}
int main(int argc, const char *argv[])
{
    int a = 3;
    int b = 5;
   /* swap(&a,&b);*/
   swap(a,b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}

