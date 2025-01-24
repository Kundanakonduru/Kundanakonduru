#include<stdio.h>
void main()
{
    int a[10],b[10],n,i,p,c;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    
    }
    printf("Enter no of positions to shift:");
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        c=(i+p)%n;
        b[c]=a[i];
        }
        printf("The new array is:");
        for(i=0;i<n;i++)
        {
            printf("%d",b[i]);
        }
}
