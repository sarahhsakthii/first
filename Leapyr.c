#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
clrscr();
printf("enter the year:");
scanf("%d",&yr);
if(((yr%4==0)&&(yr%100!=0)||(yr%400==0))
{
printf("leap yr");
}else
{
printf("not a leap yr");
}
getch();
}

