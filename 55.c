#include<stdio.h>
void main()
{
 int n,c=0,r;
 clrscr();
 scanf("%d",&n);
 while(n>0)
 {
 r=n%10;
 n=n/10;
 c++;
 }
 printf("%d",c);
 getch();
 }
