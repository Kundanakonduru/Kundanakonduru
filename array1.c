#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    printf("Enter the array elements:\n");
    for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
    printf("Enter the array elements:\n");
    for(i=0;i<5;i++)
{
     scanf("%d",&b[i]);
}
for(i=0;i<5;i++)
{
    c[i]=a[i]+b[i];
    printf("Third array element with index %d is :%d\n",i,c[i]);
}
return 0;
}
