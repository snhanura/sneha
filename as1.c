#include<stdio.h>
void main()
{

int n;
printf("enter the number");
scanf("%d",&n);
if(n==0)
{
printf("the given number is zero");
}
else if(n<0)
{
printf("the given number is negative");
}
else
{
printf("the given number is positive");
}
getch();
}
