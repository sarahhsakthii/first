#include<stdio.h>
void main()
{
 char a[60];
 int i,c=0,co=0,z;
 clrscr();
 gets(a);
 for(i=0;a[i]!=' ';i++)
 {
 co++;
 if(a[i]==' ')
 {
 a[i]=a[i+1];
 c++;
 }
 }
 z=c+co;
 printf("%d",z);
 getch();
 }
