#include <stdio.h>
void main()
{
int n,rem, p=0, num;
printf("enter the number:");
scanf("%d",&n);
num=n;
while(n!=0)
{
rem=n%10;
p = p*10+rem;
n = n/10;
 }
if(num==p)
{
printf("The given number is palindrome" );
}
 else
{
printf("Not a palindrome");
 }
 }
