#include<stdio.h>
void main()
{
int a[100],n,i,j,temp;
printf("enter the size:");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;++i)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;++i)
{
for(j=i+1;j<n; ++j)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("Sotred array in ascending order:\n");
for(i=0;i<n;++i)
{
printf("%d",a[i]);
}
}
