#include<stdio.h>
void main()
{
 int i,n,a[40];
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 if(a[i]>a[i+1])
 {
 t=a[i];
 a[i]=a[i+1];
 a[i+1]=t;
 }
 printf("%d",a[i]);
 }
 getch();
 }
