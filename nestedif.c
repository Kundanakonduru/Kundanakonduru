#include<stdio.h>
int main()
{
    int i;
    printf("enter the number:");
    scanf("%d",&i);
    if(i>=0)
    {
        if(i%2==0)
        {
        printf("The number is positive and even");    
        }
        else
        {
            printf("The number is positive and odd");
        }
    }
    else
    {
        if(i%2==0)
        {
            printf("The number is negative and even");
        }
        else
        {
            printf("the number is negative and odd");
        }
    }
    return 0;
}
