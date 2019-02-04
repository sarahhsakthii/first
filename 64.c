#include<stdio.h>
void main()
{
 int n;
 clrscr();
 scanf("%d",&n);
 if(n%2!=0)
 {
 n=n-1;
 printf("%d",n);
 }
 else
 {
 printf("%d",n);
 }
 getch();
 }
