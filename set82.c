#include<stdio.h>
#include<string.h>
void main()
{
 char a[80];
 int i,s,c=0,flag=0;
 clrscr();
 gets(a);
 s=strlen(a);
 for(i=0;i<s;i++)
 {
 if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
 {
 flag=1;
 }
 }
 if(flag==1)
 {
 printf("yes");
 }
 else
 {
 printf("no");
 }
 getch();
 }
