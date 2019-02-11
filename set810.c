#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],n,i,temp;
 clrscr();
 printf("enter num:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 if(i%2!=0)
 {
  printf("%d ",a[i]);
  }
  }
 getch();
}
