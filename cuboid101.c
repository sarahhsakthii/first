#include<stdio.h>
#include<conio.h>
void main()
{
 int l,b,h,surarea,vol;
 clrscr();
 printf("enter the len,bre,height:");
 scanf("%d%d%d",&l,&b,&h);
 surarea=2*(l*b+b*h+h*l);
 vol=l*b*h;
 printf("%d",surarea);
 printf("\n%d",vol);
 getch();
 }
