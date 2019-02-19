#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],n,i,t;
 clrscr();
 printf("enter num:");
 scanf("%d",&n);
 printf("enter ele:");
 for(i=0;i<n;++i)
 {
 scanf("%d",&a[i]);
 }
 for(i=1;i<n;++i)
 {
  if(a[0]<a[i])
  {
  t=a[0];
  a[0]=a[i];
  a[i]=t;
  }
 }
 printf("%d",a[0]);
 getch();
}
