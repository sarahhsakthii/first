#include<stdio.h>
void main()
{
 char a[50];
 int i,c=0;
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
 if(a[i]>='0'&&a[i]<='9')
 {
 c++;
 }
 else
 {
 c=0;
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
