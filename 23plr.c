#include<stdio.h>
int main()
{
	int n,r=0,t,s=0;
	scanf("%d",&n);
	while(n>0)
	{
	r=n%10;
	t=r*r;
	s=t+s;
	n=n/10;
	}
	printf("%d",s);
}
