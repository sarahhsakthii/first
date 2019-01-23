#include <stdio.h>
void main()
{
    char a[50],b[50];
    int c=0,i=0,j=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    j=0;
   for(i=c-1;i>=0;i--)
   {
       b[j]=a[i];
       j++;
   }
   printf("%s",b);

}
