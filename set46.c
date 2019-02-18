#include<stdio.h>
#include<conio.h>
void main()
{
 char a[50];
 int i,c=0;
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
 if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'||a[i]>='0'&&a[i]<='9')
 {
 }
 else
 {
 c++;
 }
 }
 printf("%d",c);
 getch();
 }
