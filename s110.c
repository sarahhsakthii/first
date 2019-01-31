#include<stdio.h>
#include<conio.h>
void main()
{
 int n,rem=0,sum=1;
 clrscr();
 printf("enter num:");
 scanf("%d",&n);
 while(n>0)
 {
 rem=n%10;
 sum=sum*rem;
 n=n/10;
 }
 printf("%d",sum);
 getch();
 }
