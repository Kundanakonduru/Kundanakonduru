#include<stdio.h>
int main()
{
    int a[5],i,max;
    printf("Enter the array Elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
      }
    printf(" The maximum element of the array is:%d",max);
    return 0;
}
