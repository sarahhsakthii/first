#include<stdio.h>
#include<conio.h>
void main()
{
 int n,rem=0,sum=0;
 clrscr();
 printf("enter num:");
 scanf("%d",&n);
 if(n<=1000)
 {
 while(n>0)
 {
 rem=n%10;
 sum=(sum*10)+rem;
 n=n/10;
 }
 }
 printf("%d",sum);
 getch();
 }
