/*Polynomial function*/
#include <stdio.h>
#include <stdlib.h>
int S(int, int);
int main(void)
{
    int i, f[5], x, ans=0;
    for(i=0;i<5;i++)
    {
        printf("Please key in the coefficient of %dth term ",i);
        scanf("%d",&f[i]);
    }
    printf("Please key in the value of variable x ");
    scanf("%d",&x);
    for(i=0;i<5;i++)
    {
        ans = ans + S(x,i)*f[i];
    }
    printf("f(%d) = %d\n",x, ans);
}
int S(int x, int n)
{
    int i, tmp=x;
    if(n==0) return 1;
    for(i=1;i<n;i++)
        x = x*tmp;
    return x;
}
