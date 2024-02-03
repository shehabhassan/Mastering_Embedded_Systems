#include <stdio.h>
#include <string.h>
 
 
 void sum_matrix(void)
 {
  // c program to sum to materix order using multidimensial arrays 
   int i,j,a[2][2],b[2][2],c[2][2];
   int sum = 0 ;
  int size  = 2; 
   printf("Enter the first materix order : ");
   for (int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 2; j++)
      { 
         scanf("%d",&a[i][j]); 
      }
   }
    printf("Enter the Second materix order : ");
   for(int i = 0; i < size; i++)
   {
      for (int j = 0; j < size; j++)
      { 
         scanf("%d",&b[i][j]); 
      }
   }
   for (int i = 0; i < size; i++)
   {
      for (int j = 0; j < size; j++)
      { 
         c[i][j] = a[i][j] + b[i][j]; 
      }
   }
   for (int i = 0; i < size; i++)
   {
      for (int j = 0; j < size; j++)
      { 
         printf("%d ",a[i][j]); 
      }
      printf("\n");
   }
   printf("\n");
   for (int i = 0; i < size; i++)
   {
      for (int j = 0; j < size; j++)
      { 
         printf("%d ",b[i][j]); 
      }
      printf("\n");
   }
   printf("\n");
   for (int i = 0; i < size; i++)
   {
      for (int j = 0; j < size; j++)
      { 
         printf("%d ",c[i][j]); 
      }
      printf("\n");
   }
 
 }
  

int main()
{
    sum_matrix(); 
    return 0;
}