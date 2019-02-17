#include<stdio.h>
#include<conio.h>
void main()
{
 char a[50];
 int b[50],n,i=0,r,t=0;
 gets(a);
 n=strlen(a);
 for(i=0;a[i]!='\0';i++)
 {
 if(a[i]=='I')
 b[i]=1;
 else if(a[i]=='V')
 b[i]=5;
 else if(a[i]=='X')
 b[i]=10;
 else if(a[i]=='L')
 b[i]=50;
 else if(a[i]=='C')
 b[i]=100;
 else if(a[i]=='D')
 b[i]=500;
 }
 for(i=0;i<n;i+=2)
 {
 if(b[i]>b[i+1])
 {
 r=b[i]+b[i+1];
 }
 else
 {
 r=b[i+1]-b[i];
 }
 t=r+t;
 }
 printf("%d",r);
 getch();
 }
