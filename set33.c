#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],n,i,temp;
 clrscr();
 printf("enter num:");
 scanf("%d",&n);
 printf("enter ele:");
 for(i=0;i<n;++i)
 {
 scanf("%d",&a[i]);
 }
 for(i=1;i<n;i++)
 {
  if(a[0]>a[i])
  {
  temp=a[0];
  a[0]=a[i];
  a[i]=temp;
  }
 }
 printf("\nsmall%d",a[0]);
 getch();
 }
