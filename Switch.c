#include<stdio.h>
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    switch(num)
    {
        case 10:
        printf("the number is equal to 10");
        break;
        case 20:
        printf("the number is equal to 20");
        break;
        case 30:
        printf("the number is equal to 30");
        break;
        default:
        printf("the number is not equal to 10,20,30");
        }
        return 0;
}
