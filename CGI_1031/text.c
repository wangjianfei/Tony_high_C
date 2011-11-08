#include <stdio.h>

int main(void)
{
    printf("Content-type:text/html\n\n");
    printf("<html>\n");
    printf("<head><title>welcome to c CGI</title></head>\n<body>");
    printf("You are welcome!<br/>\n");
    printf("<body>\n<html>");
    
    return 0;
}
