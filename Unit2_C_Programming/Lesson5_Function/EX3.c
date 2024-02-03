#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 /******** 3 reverse string USING RECURSION*******************/                        
char *reverse_string(char *str)
{
    int i = 0, j = strlen(str) - 1;
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}   
void recur()
    {
    char c ; 
     scanf("%c",&c);
        if (c != '\n')
        {
        recur();  
        printf("%c",c); 
        }
    }
int main()
{
   
  recur();
  
return 0;
}
 