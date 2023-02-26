/*Convey pointer into function*/
#include <stdio.h>
#include <stdlib.h>
void vset(int, int);
void rset(int*,int);
int main(void)
{
    int x=0, *p; 
    p = &x; //give the memory address of x to pointer p
    vset(x,1);
    printf("x = %d \n",x);
    printf("p = %d \n",p);
    rset(p,1);
    printf("x = %d \n",x);
    printf("p = %d \n",p);
}
void vset(int x, int y)
{
    x = y;
}
void rset(int *p, int y)
{
    *p = y;
}