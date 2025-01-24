#include<stdio.h>
void main()
{
    int n,i,p,a[10],f;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter the deleted position:");
    scanf("%d",&p);
    if(p<n)
    {
        for(i=(p+1);p<n;i++)
        {
            a[i-1]=a[i];
            }
        n--;
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
    }
    else
    {
        printf("array consist %d element thay are:",n);
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
            }
    }
    }
