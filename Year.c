#include<stdio.h>
int main()
{
int i;
printf("Enter the year");
scanf("%d",&i);
if(i%4==0)
{
printf("The given year is leap year");
}
else
{
printf("the given year is not leap year");
}
return 0;
}
