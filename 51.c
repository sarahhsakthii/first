#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 char a[50];
 clrscr();
 printf("enter numof times:");
 scanf("%d",&n);
 scanf("%s",a);
 for(i=0;i<n;i++)
 {
 printf("%s",a);
 }
 getch();
 }
