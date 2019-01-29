#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50];
 int i,c=0,n;
 clrscr();
 printf("enter the size:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;a[i]!='\0';i++)
 {
 if(a[i]==0||a[i]==1)
 {
 c++;
 }
 else if(a[i]>=0&&a[i]<=9)
 {
 c=0;
 }
 }
if(c==0)
{
 printf("not bin");
 }
 else
 {
 printf("bin");
 }
 getch();
}
