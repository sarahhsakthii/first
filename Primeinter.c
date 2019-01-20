#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j,flag=0;
clrscr();
printf("enter the num:");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
for(j=2;j<=i;j++)
{
if(i%j==0)
{
break;
}
}
if(i==j)
{
printf("%d",i);
}
getch();
}
