#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,t;
 scanf("%d%d",&a,&b);
 clrscr();
 t=a;
 a=b;
 b=t;
 printf("%d %d",a,b);
 getch();
 }
