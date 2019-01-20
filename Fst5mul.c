#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,mul=0;
clrscr();
printf("enter tge num:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
mul=mul*i;
printf("\n%d",mul);
}
getch();
}
