#include<stdio.h>
#include<conio.h>
void maun()
{
int a,b,i,temp,rem=0,sum=0;
clrscr();
printf("enter the num:");
scanf("%d%d",&a,&b);
for(i=a+1;i,<b;i++)
{
temp=i;
sum=0;
while(temp!=0)
{
rem=temp%10;
sum=sum+rem*rem*rem;
temp=temp/10;
}
if(sum==i)
{
printf("\n%d",i);
}
}
getch();
}
