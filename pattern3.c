#include<stdio.h>
int main () 
{
    
    int i,j,n='A';
    char ch=n;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%c\t",n++);
           
        }
        printf("\n");
    }
    return 0;
}
