#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,n;
clrscr();
printf("enter Intervals");
scanf("%d%d",&a,&b);
for(n=a+1;n<b;n++)
{
if(n%2!=0)
{
printf("%d",n);
}
}
getch();
}
