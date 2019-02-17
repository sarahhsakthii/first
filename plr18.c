#include<stdio.h>
#include<conio.h>
void main()
{
 char a[70];
 int i;
 clrscr();
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
 if(a[0]>96)
 {
 a[0]=a[0]-32;
 }
 if(a[i]==' ')
 {
 if(a[i+1]>96)
 {
 a[i+1]=a[i+1]-32;
 }
 }
 }
 puts(a);
 getch();
 }
