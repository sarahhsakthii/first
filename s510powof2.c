#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int n,x=1,i,pow=2,c=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     x=x*pow;
     if(x==n)
     {
         c++;
         break;
     }
     if(x>n)
     {
         break;
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
 return 0;
 }
 
