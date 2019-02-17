#include<stdio.h>
int main()
{
 int n,r;
 scanf("%d",&n);
 if(n<60)
 {
 printf("%d",n);
 }
 else
 {
 r=n%60;
 n=n/60;
 printf("%d %d",n,r);
 }
 getch();
 return 0;
 }
