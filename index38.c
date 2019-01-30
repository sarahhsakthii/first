#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],i,n;
 clrscr();
 printf("enter size:");
 scanf("%d",&n);
 printf("enter elk:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;a[i]!='\0';i++)
 {
 printf("%d %d",a[i],i);
 }
 getch();
 }
