#include<stdio.h>
int main()
{
   int a[10],n,sum=0,i;
   printf("Enter the size:");
   scanf("%d",&n);
   printf("Enter the elements:");
   for(i=0;i<5;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       sum=sum+a[i];
   }
   printf("%d\t",sum);
   return 0;
}
