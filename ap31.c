#include<stdio.h>
#include<conio.h>
void main()
{
 int n,a,d,ap;
 clrscr();
 printf("enter 3 val:");
 scanf("%d%d%d",&n,&a,&d);
 ap=(n/2)*(2*a+((n-1)*d));
 printf("%d",ap);
 getch();
 }
