#include <stdio.h>

int main()
{
    int l,b;
    float area;
    printf("enter len and breadth:");
    scanf("%d%d",&l,&b);
    area=l*b;
    printf("%.5f",area);
    return 0;
}
