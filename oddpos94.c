#include <stdio.h>
#include <string.h>

int main()
{
    char a[50],b[50],c[50];
    int i=0,j=0,k=0,co=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        co++;
    }
    for(i=0;i<co;i++)
    {
        if(i%2==0)
        {
            for(j=0;b[j]!='\0';j++)
            {
            b[j]=a[i];
            }
            printf("%c",b[j]);
        }
        else
        {
            for(k=0;c[k]!='\0';k++)
            {
            c[k]=a[i];
            k++;
            }
            printf("%c",c[k]);
        }
    }
    return 0;
}
