#include<stdio.h>

int main()

int i, sum=0,n;

printf("Enter the positive number:");

scanf("%d",&n);

for(i=0;i<=n;i++)

{

sum+=i;

}

printf("%d\t",sum);

return 0;

}
