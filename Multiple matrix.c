#include<stdio.h>
#include<math.h>
#define N 20
int main()
{
    int a[N][N],b[N][N],c[N][N],i,j,k,sum,n,m,p,q;
    printf("Enter the no.of  rows and columns of the first matrix:\n");
    scanf("%d%d",&n,&m);
    printf("Enter the elements of the first matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the no.of  rows and columns of the second matrix:\n");
    scanf("%d%d",&p,&q);
     printf("Enter the elements of the second matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The first matrix is:\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
         printf("\n");
    }
     printf("The second matrix is:\n");
     for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(m!=p)
    {
        printf("Not possible");
    }
    else
    {
   
 for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            sum=0;
            for(k=0;k<n;k++)
            {
                 sum=sum+(a[i][k]*b[k][j]);
                 
            }
           c[i][j]=sum;
        
        }
        
    }
    
     printf("multiplication of the matrices is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
           
                printf("%d\t",c[i][j]);
        }
            printf("\n");
          
        
       
    }
    }
    return 0;
}
