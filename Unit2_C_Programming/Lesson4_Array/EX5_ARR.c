#include <stdio.h>
#include <string.h>
/** Searching element in array   **/
void search_elemant(void)
{
  int n; 
  int arr[20];
  int i,elemant;
  int index = -1;
  printf("please Enter number  \n");
  scanf("%d",&n);
  printf("please Enter %d number in array\n",n);
  for (i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  } 
  printf("please Enter elemant you want to search  \n");
   scanf("%d",&elemant);
   
   for (int i = 0; i < n; i++)
   {
    if (arr[i] == elemant)
       index = i; 
   }
  printf("index = %d",index+1);
    }
int main()
{

    search_elemant(); 
    return 0;
}