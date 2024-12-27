#include<stdio.h>
int main()
{
char a,b;
printf("enter the character:");
scanf("%c",&a);
b=('a','e','i','o','u');
if(a==b)
{
printf("The character is vowel");
}
else
{
printf("The character is consnent");
}
return 0;
}
