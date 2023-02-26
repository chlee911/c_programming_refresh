/*Write a puts() function to print out a string with using pointer*/
#include <stdio.h>
#include <stdlib.h>
void Myputs(char *);
int main(void)
{
    char *str = "pointer is fun!";
    Myputs(str);
    return 0;
}
void Myputs(char *s)
{
    while(*s != '\0')
    {
        printf("%c",*s);
        s++;
    }
    printf("\n");
}
