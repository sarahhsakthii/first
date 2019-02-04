#include<stdio.h>
void main()
{
 char a[20],b[50],c[80];;
 int s,i=0,j,k;
 clrscr();
 gets(a);
 gets(b);
 s=strlen(a);
 for(i=0;a[i]!='\0';i++)
 {
 c[i]=a[i];
 for(k=i;b[k]!='\0';k++)
 {
 c[k]=b[j];
 j++;
  }
  printf("%s",a);

  }
  getch();
  }

