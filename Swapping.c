#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter two numbers a and b:\n");
scanf("%d %d",&a,&b);
{
temp=a;
a=b;
b=temp;
}
printf("After swapping : \n");
printf("a and b is %d and %d:",a,b);
return 0;
}
