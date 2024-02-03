#include <stdio.h>
#include <string.h>

/** ***/
 void string_frequency(void)
 {
   char str[100];
  int i,count;
  char ch ; 
  printf("Enter string : ");
  gets(str);
  printf("Enter character to be searched: ");
  scanf("%c",&ch);
  count = 0;
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ch)
    {
      count++;
    }
  }
  printf("Frequency of character: %c count = %d",ch,count);    
 }


int main()
{ 
    return 0;
}