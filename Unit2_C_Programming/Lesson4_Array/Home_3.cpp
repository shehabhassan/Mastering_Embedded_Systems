#include <stdio.h>
#include <string.h>


int main()
{ 

   // break statment used  
    // float num,avarge=0, sum = 0 ,number; 
    //  int i;
    // printf("Enter number of elements : ");
    // scanf("%f", &num);
    // for (i = 0; i < num; i++)     
    //  {
    //      scanf("%f", &number);
    //      if (number < 0)
    //      {
    //       break;
    //      }
    //      sum+=number;
    //  }
    //  avarge = sum/num;
    //  printf("Average = %.2f", avarge); 
  // // continue statment used  in if statment 
   // c program to sum to materix order using multidimensial arrays 
  //  int i,j,a[2][2],b[2][2],c[2][2];
  //  int sum = 0 ;
  // int size  = 2; 
  //  printf("Enter the first materix order : ");
  //  for (int i = 0; i < 2; i++)
  //  {
  //     for (int j = 0; j < 2; j++)
  //     { 
  //        scanf("%d",&a[i][j]); 
  //     }
  //  }
  //   printf("Enter the Second materix order : ");
  //  for (int i = 0; i < size; i++)
  //  {
  //     for (int j = 0; j < size; j++)
  //     { 
  //        scanf("%d",&b[i][j]); 
  //     }
  //  }
  //  for (int i = 0; i < size; i++)
  //  {
  //     for (int j = 0; j < size; j++)
  //     { 
  //        c[i][j] = a[i][j] + b[i][j]; 
  //     }
  //  }
  //  for (int i = 0; i < size; i++)
  //  {
  //     for (int j = 0; j < size; j++)
  //     { 
  //        printf("%d ",a[i][j]); 
  //     }
  //     printf("\n");
  //  }
  //  printf("\n");
  //  for (int i = 0; i < size; i++)
  //  {
  //     for (int j = 0; j < size; j++)
  //     { 
  //        printf("%d ",b[i][j]); 
  //     }
  //     printf("\n");
  //  }
  //  printf("\n");
  //  for (int i = 0; i < size; i++)
  //  {
  //     for (int j = 0; j < size; j++)
  //     { 
  //        printf("%d ",c[i][j]); 
  //     }
  //     printf("\n");
  //  }
  //  int n , arr[100];
  //  int i, sum = 0, average = 0;

  // EX 2 AVERAGE OF ARRAY AND SUM OF ARRAY
  //  printf("please Enter number from 1 to 100 \n");
  //  scanf("%d",&n);
  //  printf("please Enter %d number \n",n);
  //  for(int i =0;i<n;i++) 
  //  scanf("%d",&arr[i]);
  //  for(int i =0;i<n;i++) 
  //  sum+=arr[i];
  //  average = sum/n;    
  //  printf("sum = %d\n",sum);
  //  printf("average = %d\n",average);
    
  // find transpose of a matrix
  // int r,c,i,j,a[10][10],b[10][10];
  //  printf("Enter the number of row and column : ");
  //  scanf("%d %d",&r,&c);
  //  printf("Enter the first materix order : ");
  //  for (int i = 0; i < r; i++)
  //  {
  //     for (int j = 0; j < c; j++)
  //     {
  //        scanf("%d",&a[i][j]);
  //     }
  //  }
  // for (int i = 0; i < r; i++)
  //  {
  //     for (int j = 0; j < c; j++)
  //     {
  //          printf("%d ",a[i][j]);
  //     }
  //     printf("\n");
  // } 
  //   printf("\n");  
  // // find transpose of a matrix
  //  for (int i = 0; i < r; i++)
  //  {
  //   for (int j = 0; j < c; j++)
  //   {
  //        b[j][i] = a[i][j];
  //   }
  //  }
  //  for (int i = 0; i < c; i++)
  //  {
  //     for (int j = 0; j < r; j++)
  //     {
  //          printf("%d ",b[i][j]);
  //     }
  //     printf("\n");
  // }
  /****** create space in array ******/
  // int num ; 
  // int arr[20];
  // int i,location,elemant;
  //  printf("please Enter number  \n");
  //  scanf("%d",&num);
  //  printf("please Enter %d number in array\n",num);  
  // for (int i = 0; i < num; i++)
  // {
  //    scanf("%d",&arr[i]);
  // }
  // num++;
  // printf("please Enter location and elemant \n");
  // scanf("%d %d",&location,&elemant);
  // for (int i = num-1; i >= location-1; i--)
  // {
  //    arr[i+1] = arr[i];
  // }
  // arr[location-1] = elemant;
  // for (int i = 0; i < num; i++)
  // {
  //    printf("%d ",arr[i]);
  // }

  /** Searching element in array   **/
  // int n; 
  // int arr[20];
  // int i,elemant;
  // int index = -1;
  // printf("please Enter number  \n");
  // scanf("%d",&n);
  // printf("please Enter %d number in array\n",n);
  // for (i = 0; i < n; i++)
  // {
  //   scanf("%d",&arr[i]);
  // } 
  // printf("please Enter elemant you want to search  \n");
  //  scanf("%d",&elemant);
   
  //  for (int i = 0; i < n; i++)
  //  {
  //   if (arr[i] == elemant)
  //      index = i; 
  //  }
  // printf("index = %d",index+1);
  
  /** ***/
  // char str[100];
  // int i,count;
  // char ch ; 
  
  // printf("Enter string : ");
  // gets(str);
  // printf("Enter character to be searched: ");
  // scanf("%c",&ch);
  // count = 0;
  // for (i = 0; str[i] != '\0'; i++)
  // {
  //   if (str[i] == ch)
  //   {
  //     count++;
  //   }
  // }
  // printf("Frequency of character: %c count = %d",ch,count);
  
  /*** string length ***/
  // char str[100];
  // int i;
  // printf("Enter string : ");
  // gets(str);
  // for (i = 0; str[i]!='\0'; i++)
  // {}
  // printf("Length = %d",i);
  /*****************reverse string *************/
  //  char str[100],temp;
  //  int size,i,j;
  //  printf("Enter string : ");
  //  gets(str); 
  //  i =0;
  //  j = strlen(str) - 1;  
  //  for ( i = 0; i < j ; i++,j--)
  //  {
  //   temp = str[i];
  //   str[i] = str[j];
  //   str[j] = temp;
  //  }
  //  printf("Reverse string : %s",str);

  return 0;
}



    //  int number,product=1;
    //  int n;
    //  printf("Enter number of elements : ");
    //  scanf("%d",&n);
    //  for (int i = 0; i < n; i++)
    //  {
    //   scanf("%d", &number);
    //   if (number == 0)
    //   {
    //     continue;
    //   }
    //   product*=number;
    //  }
    //  printf("Product = %d", product);