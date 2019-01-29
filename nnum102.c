#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50];
 int n,i,sum=0;
 clrscr();
 printf("enter size:");
 scanf("%d",&n);
 printf("enter the ele:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;a[i]!='\0';i++)
 {
 sum=sum+a[i];
 }
 printf("%d",sum);
 getch();
 }
