#include <stdio.h>

int main()
{
    int a,b,gcd,lcm;
    scanf("%d%d",&a,&b);
    gcd=b%a;
    printf("gcd is %d",gcd);
    lcm=(a*b)/gcd;
    printf("\nlcm is %d",lcm);
    return 0;
}
