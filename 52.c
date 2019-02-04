#include<stdio.h>
void main()
{
 char a[30],b[50];
 int i,c,co;
 clrscr();
 scanf("%s",a);
 scanf("%s",b);
 for(i=0;a[i]!='\0';i++)
 {
 c++;
 }
 for(i=0;b[i]!='\0';i++)
 {
 co++;
 }
 if(c>co)
 {
 printf("%s",a);
 }
 else if(c<co)
 {
 printf("%s",b);
 }
 else if(c==co)
 {
 printf("%s",a);
 }
 getch();
 }
