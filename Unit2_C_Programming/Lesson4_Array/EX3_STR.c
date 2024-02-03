#include <stdio.h>
#include <string.h>

   /*****************reverse string *************/
 void reverse_string(void) 
 {
   char str[100],temp;
   int size,i,j;
   printf("Enter string : ");
   gets(str); 
   i =0;
   j = strlen(str) - 1;  
   for ( i = 0; i < j ; i++,j--)
   {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
   }
   printf("Reverse string : %s",str);
 }
int main()
{ 

    reverse_string();
    return 0;
}