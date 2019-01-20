#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter three val:");
scanf("%d%d%d,&a,&b,&c);
if((a>b)&&(a>c))
{
printf("%dis large",a);
}
else
{
if((b>a)&&(b>c))
{
printf("%dis large",b);
}
else
{
printf("%d is large",c);
}
}
getch();
}


