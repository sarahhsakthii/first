#include<stdio.h>
void main()
{
 int a[50],n,b,i,c=0;
 clrscr();
 scanf("%d%d",&n,&b);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 if(a[i]==b)
 {
 c++;
 }
 }
 printf("%d",c);
 getch();
 }
