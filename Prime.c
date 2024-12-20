#include<stdio.h>

int main()

{

int i,n,count=0;,

printf("Enter the numbers:\n");

scanf("%d",&n);

for(i=1;i<=n;i++)

{

if(n%i==0)

{

count++;

I

}

}

if(count==2)

{

printf("the given number is prime\n");

}

else

{

printf("the given number is not prime\n");

}

return 0;
}
