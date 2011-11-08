#include <stdio.h>
#include <stdlib.h>

typedef struct birth
{
    int year;
    int month;
    int day;
}Birth;

struct stu_info
{
    Birth b;/*如果定义变量 则stu_info和Birth的初始地址一样*/
    int num;
};

int main(int argc, const char *argv[])
{
    struct stu_info *p = malloc(sizeof(struct stu_info));
    char str[]="abcde";
    p->b.year = 2011;
    p->b.month = 10;
    p->b.day = 10;
    p->num = 1001;

    printf("%d\n",p->b.year);
    printf("%d\n",((Birth *)p)->year);
    /*stu_info 和 Birthday的起始地址是相同的地址 所以对其进行强类型转换之后
     * 仍然指向year*/
    printf("%d\n",p->b.year);
    printf("%d\n",p->num);

    free(p);

    return 0;
}

