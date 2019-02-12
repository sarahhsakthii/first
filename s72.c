#include <stdio.h>

int main()
{
	char a[40];
	int i,n,c=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	  if(a[i]=='0'||a[i]=='1')
		{
		    c=0;
		 }
		 else 
		 {
		     c++;
		 }
	}
		 if(c==0)
		 {
		     printf("yes");
		}
		else
		{
		    printf("no");
		}
	return 0;
}
