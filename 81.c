#include<stdio.h>
#include<string.h>
void main()
{
 char a[80];
 int i,s,c=0,l=0;
 clrscr();
 gets(a);
 s=strlen(a);
 for(i=0;i<s;i++)
 {
 if(a[i]!=a[s-i-1])
 {
 c++;
 }
 else if(a[i]==a[s-1-i])
 {
 l++;
 }
 }
 if(c>0)
 {
 printf("not");
 }
 else if(l>0)
 {
 printf("str palin");
 }
 getch();
 }
