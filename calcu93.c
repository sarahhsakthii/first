#include <stdio.h>

int main()
{
    int n1,n2,a,b;
    printf("enter two num:");
    scanf("%d%d",&n1,&n2);
    printf("enter choice:");
    scanf("%d",&a);
    switch (a)
    {
        case 1 :b=n1/n2;
                break;
        case 2 :b=n1%n2;
                break;
    }
    printf("%d",b);
    return 0;
}
