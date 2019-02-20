#include <stdio.h>

int main()
{
    char a[50];
    int i,c=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
    	if(a[i]=='s')
    	{
    	 printf("holiday");
    	 break;
    	}
    	else
    	{
    		printf("not aholiday");
    		break;
    	}
    }
    
    return 0;
}
   
