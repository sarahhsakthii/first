#include<stdio.h>
void main()
{
 int m,n,t,p,c=0,i;
 scanf("%d%d",&m,&n);
 t=m*n;
 for(i=1;i<=t/2;i++)
 {
 p=i*i;
 if(p==t)
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
