#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

int rscallback(void *p,int argc,char **argv,char **argvv)
{
    int i ;
    *(int *)p=0;
    for(i = 0;i<argc;i++)
    {
        printf("%s=%s",argvv[i],argv[i]?argv[i]:"NULL");
    }
    putchar('\n');
    return 0;
}

int main(void)
{
    sqlite3 *db;
    char *err=0;
    int ret=0;
    int empty = 1;
    ret = sqlite3_open("test.db",&db);
    printf("%d\n",ret);
    if(ret != SQLITE_OK)
    {
        fputs(sqlite3_errmsg(db),stderr);
        fputs("\n",stderr);
        exit(1);
    }

    ret = sqlite3_exec(db,"select *from employee;",rscallback,&empty,&err);
    if(ret != SQLITE_OK)
    {
        fputs(err,stderr);
        fputs("\n",stderr);
        sqlite3_close(db);
        exit(1);
    }
    
    if(empty)
    {
        fputs("table employee is empty\n",stderr);
        exit(1);
    }
    sqlite3_close(db);
    return 0;
}

