#include<stdio.h>
void main()
{
 char a[70];
 int i,s;
 clrscr();
 gets(a);
 s=strlen(a);
 if(s%2!=0)
 {
 a[s/2]='*';
 puts(a);
 }
 else if(s%2==0)
 {
 a[s/2]='*';
 a[s/2-1]='*';
 printf("%s",a);
 }
 getch();
 }
