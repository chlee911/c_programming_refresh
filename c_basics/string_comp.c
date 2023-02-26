/*string comparison*/
#include <stdio.h>
#include <stdlib.h>
int Mystrcmp(char *, char *);
int main(void)
{
    int result;
    char word1[] = "I like C";
    char word2[] = "This is fun";
    result = Mystrcmp(word1, word2);
    if(!result)
        printf("word1 equals word2 \n");
    else
        printf("word1 does not equal word2 \n");
}
int Mystrcmp(char *str1, char *str2)
{
    int i;
    for(i=0;!(*(str1+i)=='\0'&& *(str2+i)=='\0');i++)
        if(*(str1+i) != *(str2+i)) return -1;
    return 0;
}