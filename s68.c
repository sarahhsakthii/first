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
 if(c==0)
 {
 printf("no");
 }
 else
 {
 printf("yes");
 }
 getch();
 }
