#include<stdio.h>
#include<conio.h>
void main()
{
 int t,hr,min;
 clrscr();
 printf("enter time:");
 scanf("%d",&t);
 hr=t/60;
 min=t%60;
 printf("%d: %d",hr,min);
 getch();
 }
