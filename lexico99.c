#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    int i=0,j=0,temp,c=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
         if(a[j]>a[j+1])
         {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
         }
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }

    return 0;
}
