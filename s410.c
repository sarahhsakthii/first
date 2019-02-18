#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,a=0,b=1,f=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 f=a+b;
 printf("%d",f);
 a=b;
 b=f;
 }
 getch();
 }
