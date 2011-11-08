#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *data = NULL;
    data = getenv("QUERY_STRING");//让data指向环境变量
    printf("Content-type:text/html\n\n");//把printf重定向到html

    printf("<html>\n");
    printf("<head><title>An html page from a cgi</title></head>\n");
    printf("<body>%s</body>\n",data);
    printf("</html>\n");
    fflush(stdout);
    return 0;
}
