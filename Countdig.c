#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0;
clrscr();
printf("enter num:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("%d",count);
getch();
}
