#include <stdio.h>
#include <string.h>

void transpose_matrix(void)
{
//  find transpose of a matrix
  int r,c,i,j,a[10][10],b[10][10];
   printf("Enter the number of row and column : ");
   scanf("%d %d",&r,&c);
   printf("Enter the first materix order : ");
   for (int i = 0; i < r; i++)
   {
      for (int j = 0; j < c; j++)
      {
         scanf("%d",&a[i][j]);
      }
   }
  for (int i = 0; i < r; i++)
   {
      for (int j = 0; j < c; j++)
      {
           printf("%d ",a[i][j]);
      }
      printf("\n");
  } 
    printf("\n");  
  // find transpose of a matrix
   for (int i = 0; i < r; i++)
   {
    for (int j = 0; j < c; j++)
    {
         b[j][i] = a[i][j];
    }
   }
   for (int i = 0; i < c; i++)
   {
      for (int j = 0; j < r; j++)
      {
           printf("%d ",b[i][j]);
      }
      printf("\n");
  }   
}
 

int main()
{
    transpose_matrix(); 
    return 0;
}