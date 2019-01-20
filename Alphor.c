#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter the char:);
scanf("%c",ch);
if((ch=='A'&&'Z')||(ch=='a'&&'z'))
{ 
printf("%c is an alphabet",ch)
}else 
{
printf("%c is not an alphabet",ch)
}
getch();
}
