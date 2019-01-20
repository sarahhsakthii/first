#include<stdio.h>
#include<conio.h>
void main()
{
int n,t,rem=0,sum=0;
clrscr();
printf("enter num:");
scanf("%d",&n);
t=n;
while(t>0)
{
rem=t%10;
sum=(sum*10)+rem;
t=t/10;
}
if(sum==n)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
getch();
}
