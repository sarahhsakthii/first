#include<stdio.h>
#include<conio.h>
void main()
{
char a[40],b[50];
int i,flag=0,m,n;
clrscr();
gets(a);
gets(b);
for(i=1;a[i]!='\0';i++)
{
m=a[i-1]-a[i];
n=b[i-1]-b[i];
if(m!=n)
{
 flag=1;
 break;
 }
}
 if(flag==0)
 {
 printf("isomorphic");
 }
 else
 {
 printf("no");
 }
 getch();
}
