#include<stdio.h>
#include<conio.h>
int main()
{
 float x[100],sum=0,avg;
 int n,i;
 clrscr();
 printf("enter the val:");
 scanf("%d",&n);
 printf("enter ele:");
 for(i=0;i<n;i++)
 {
 scanf("%f",&x[i]);
 sum=sum+x[i];
 }
 avg=sum/n;
 printf("%f",avg); 
 return 0;
 }
 
