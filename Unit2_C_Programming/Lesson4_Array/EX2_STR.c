#include <stdio.h>
#include <string.h>


  /*** string length ***/
void string_length(void)
{
  char str[100];
  int i;
  printf("Enter string : ");
  gets(str);
  for (i = 0; str[i]!='\0'; i++);
  printf("Length = %d",i);  
}
  

int main()
{ 
    string_length();
    return 0;
}