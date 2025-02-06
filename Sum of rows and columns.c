#include<stdio.h>
int main()
{
  int a[3][3],i,j,sr,sc;
  printf("Enter the elements of the matrix:");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }
  printf("The sum of the each row and column:\n");
  for(i=0;i<3;i++)
  {
      sr=sc=0;
      for(j=0;j<3;j++)
      {
          sr=sr+a[i][j];
          sc=sc+a[j][i];
      }
      printf("sr=%d\nsc=%d",sr,sc);
      printf("\n");
  }
  
  
  
  return 0;
}
