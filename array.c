#include<stdio.h>
int main()
{
    int i,even=0,odd=0,a[10];
    printf("Enter array elements:");
    for(i=0;i<=10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        }
    printf("Even elements are :%d\n",even);
    printf("odd elements are:%d\n",odd);
    return 0;
}
