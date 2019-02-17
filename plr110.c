#include<stdio.h>
#include<conio.h>
void main()
{
 char a[50],b[50];
 int i,j,c=0,m,n;
 gets(a);
 gets(b);
 for(i=1;a[i]!='\0';i++)
 {
 m=a[i-1]-a[i];
 n=b[i-1]-b[i];
 if(m!=n)
 {
 c++;
 }
 }
 if(c==1)
 {
 printf("yes");
 }
 else
 {
 printf("no");
 }
 getch();
 }
