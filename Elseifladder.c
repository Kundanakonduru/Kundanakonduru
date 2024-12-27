#include<stdio.h>
int main()
{
    int i;
    printf("enter the marks:");
    scanf("%d",&i);
    if(i>80)
    printf("A grade");
    else if(i>60)
    printf("B grade");
    else if(i>50)
    printf("C grade");
    else if(i>40)
    printf("D grade");
    else
    printf("E grade");
}
