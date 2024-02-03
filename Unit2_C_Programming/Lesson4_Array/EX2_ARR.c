#include <stdio.h>
#include <string.h>

  // EX 2 AVERAGE OF ARRAY AND SUM OF ARRAY
  void average_sum(void)
  {
   int n , arr[100];
   int i, sum = 0, average = 0;
   printf("please Enter number from 1 to 100 \n");
   scanf("%d",&n);
   printf("please Enter %d number \n",n);
   for(int i =0;i<n;i++) 
   scanf("%d",&arr[i]);
   for(int i =0;i<n;i++) 
   sum+=arr[i];
   average = sum/n;    
   printf("sum = %d\n",sum);
   printf("average = %d\n",average);
   }
int main()
{ 
    average_sum();
    return 0;
}