#include<stdio.h>
#include<conio.h>
void main()
{
int n[50],k[50],i=0,c=0,sum=0;
clrscr();
printf("enter fst arr elements:");
scanf("%d",&n[i]);
Printf("enter sec arr ele:");
scanf("%d",&k[i]);
for(i=0;n[i]!='\0';i++)
{
c++;
}
for(i=0;i<c;i++)
{
sum=sum+k[i];
}
printf("%d",sum);
getch();
}
