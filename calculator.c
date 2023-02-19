/*Simple Calculator by using Switch*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    char oper;
    printf("Please key in the mathematical expression (eg. 4 + 9): ");
    scanf("%d %c %d",&a, &oper, &b);
    switch(oper)
    {
        case '+':
            printf("The result is: %d\n",a+b);
            break;
        case '-':
            printf("The result is: %d\n",a-b);
            break;
        case '*':
            printf("The result is: %d\n",a*b);
            break;
        case '/':
            printf("The result is: %f\n",(float)a/b);
            break;
        default:
            printf("Something wrong with the expression!");
    }
    return 0;
}