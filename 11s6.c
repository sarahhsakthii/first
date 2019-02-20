#include<stdio.h>
void main()
{
 int a[50];
 int i,n,k,j=1;
 clrscr();
 scanf("%d%d",&n,&k);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 if(a[k]%2!=0)
 {
  printf("%d",a[k]);
  break;
  }
  else
  {
  for(j=k+j;j<n;j++)
  {
  if(a[j]%2!=0)
  {
  printf("%d",a[j]);
  break;
  }
  }
  }
 }
  getch();
  }
