#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n; ;n++)
    {
        if(n%10==0)
        {
            printf("%d",n);
            break;
        }
        
    }

    return 0;
}
