#include<stdio.h>
int main()
{
    int i;
    printf("enter the age:");
    scanf("%d",&i);
    if(i>=20 && i<50)
    {
        printf("elder");
    }
    else if(i>=50)
    {
        printf("older");
    }
    else
    {
        printf("younger");
    }
    return 0;
}
