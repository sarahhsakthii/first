#include <stdio.h>

int main()
{
    char a[30];
    int i=0,c=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]=='A'&&'Z')||(a[i]=='a'&&'z'))
        {
            a[i]='$';
        }
        else
        {
            printf("%d",a[i]);
        }
    
    }
    printf("%d",a[i]);
    return 0;
}
