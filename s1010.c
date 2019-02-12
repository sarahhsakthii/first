#include<stdio.h>
int main()
    {
    int a[50],m=1,n,r;
    scanf("%d",&n);
    while(n>0)
    {
    r=n%10;
    m=m*r;
    n=n/10;
    }
    printf("%d",m);
return 0;
}
