#include<stdio.h>
int main()
{
int n, rem, rev=0;
printf("enter the numbers:\n");
scanf("%d",&n);
while(n>0)
{
rem-n%10;
rev-rev*10+rem;
n=n/10;
}
printf("The reverse of the numbers is %d",rev);
return 0;
}
