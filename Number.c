#include<stdio.h>
int main()
{
int i;
printf("enter the number:");
scanf("%d",&i);
if(i==0)
{
printf("The number is Zero");
}
else if(i>0)
{
printf("The number is positive");
}
else
{
printf("The number is Negative");
}
return 0;
}
