#include<stdio.h>
void main()
{
 char a[50];
 int n,i,s,t;
 scanf("%s",a);
 scanf("%d",&n);
 s=strlen(a);
 t=s-n;
 for(i=t;i<=s;i++)
 {
 printf("%c",a[i]);
 }
 getch();
 }
