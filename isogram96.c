#include <stdio.h>

int main()
{
    char a[30];
    int i=0;
    printf("enter the str:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[i+1])
        {
            printf("\n not an isogram");
        }
        else
        {
            printf("isopgram");
        }
    }
    return 0;
}
