#include<stdio.h>
#include<conio.h>
void main()
{
 int n,r,t=0;
 clrscr();
 scanf("%d",&n);
 while(1)
 {
 r=n%2;
 t=r+t;
 n=n/2;
 }
 printf("%d",t);
 getch();
 }
