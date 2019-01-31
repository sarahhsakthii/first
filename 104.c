#include<stdio.h>
void main()
{
 int n,k,i;
 int a[40];
 clrscr();
 printf("entr 2 val:");
 scanf("%d%d",&n,&k);
 printf("enter ele :");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 if(a[i]==k)
 {
 printf("%d",a[i]);
 }
 }
 getch();
 }
