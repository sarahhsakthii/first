#include<stdio.h>
int main()
{
	char a[30];
	int i,n;
	scanf("%d",&n);
	gets(a);
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
