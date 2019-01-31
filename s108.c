#include<stdio.h>
void main()
{
 int a[30];
 int n,i;
 clrscr();
 printf("enter n :");
 scanf("%d",&n);
 printf("enter ele:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 if(a[i+1]<a[i])
 {
 printf("\n%din index %d",a[i],i);
 }
 }
 getch();
 }
