#include <stdio.h>
#include <string.h>

/****** create space in array ******/
void create_space(void)
{
  int num ; 
  int arr[20];
  int i,location,elemant;
   printf("please Enter number  \n");
   scanf("%d",&num);
   printf("please Enter %d number in array\n",num);  
  for (int i = 0; i < num; i++)
  {
     scanf("%d",&arr[i]);
  }
  num++;
  printf("please Enter location and elemant \n");
  scanf("%d %d",&location,&elemant);
  for (int i = num-1; i >= location-1; i--)
  {
     arr[i+1] = arr[i];
  }
  arr[location-1] = elemant;
  for (int i = 0; i < num; i++)
  {
     printf("%d ",arr[i]);
  }

  }
int main()
{ 
    create_space();
    return 0;
}