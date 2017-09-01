#include<stdio.h>
void main()
{
clrscr();
int n;
printf("enter the number");
scanf("%d",&n);
if(n==0)
{
printf("the given number is zero");
}
elseif(n<0)
{
printf("the given number is negative");
}
else
{
printf("the given number is positive");
}
getch();
}
