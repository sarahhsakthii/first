#include<stdio.h>
#include<conio.h>
void main()
{
 Int a,temp,c=0,rem=0,sum=0;
 clrscr();
 printf("enter the num:");
 scanf("%d",&a);
 temp=a;
 while(temp>0)
 {
 temp=temp/10;
 c++;
 }
 temp=a;
 while(temp>0)
 {
 rem=temp%10;
 sum=sum+pow(rem,c);
 temp=temp/10;
 }
 if(sum==a)
 {
 printf("amstrong");
 }
 else
 {
 printf("not Armstrong");
 }
 getch();
 }
 
