#include<stdio.h>
int main()
{
int a=0,b=1,i,n,c;
printf("enter the number:");
scanf("%d",&n);
printf("%d%d",a,b);
for(i=2;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d",c);
}
return 0;
}
