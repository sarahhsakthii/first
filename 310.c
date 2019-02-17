#include<stdio.h>
void main()
{
 int h1,h2,s1,s2,h,s;
 clrscr();
 scanf("%d%d%d%d",&h1,&s1,&h2,&s2);
 h=abs(h1-h2);
 s=abs(s1-s2);
 printf("%d %d",h,s);
 getch();
}
