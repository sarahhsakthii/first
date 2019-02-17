#include<stdio.h>
#include<conio.h>
void main()
{
 char a[40];
 int i,c=0;
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
 if(a[i]=='.')
 {
 c++;
 }
 }
 printf("%d",c+1);
 getch();
 }
