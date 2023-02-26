/*Temperature conversion*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double C,F;
    scanf("%lf",&F);
    C = (F-32)*5/9;
    printf("%lf converts into degree Celsius is %lf", F, C);
    return 0;
}
