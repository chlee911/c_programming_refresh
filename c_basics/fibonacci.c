/*Fibonacci number*/
#include <stdio.h>
#include <stdlib.h>
int f(int);
int main(void)
{
    int n;
    printf("Input n:");
    scanf("%d",&n);
    printf("F(%d) = %d\n",n,f(n));
    //system("pause");
}
int f(int n)
{
    int i, sum, pre=0, fi=1;
    pre = 0;
    fi = 1;
    for(i=1;i<n;i++)
    {
        sum = pre + fi;
        pre = fi;
        fi = sum;
    }
    return fi;
}
