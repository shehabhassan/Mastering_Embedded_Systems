#include <stdio.h>
// Write a program in C to print a string in reverse using a pointer
// The Alphabets are :
int string_len(char *str)
{
     int len = 0;
     for (int i = 0; str[i]; i++)
     {
         len++;
     }
    return len;
} 
void reverse_string(char *str)
{
    for (int i= 0; i<string_len(str)/2; i++)
    {
        char temp = str[i];
        str[i] = str[string_len(str) - i - 1];
        str[string_len(str) - i - 1] = temp;
    }
}
void print_string(char *str)
{
  for (int i= 0; str[i]; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
int main()
{
    char *p;
    char str[10];
    printf("Input a string: ");
    scanf("%s",str);
    p = str;
    print_string(p);
    reverse_string(p);  
    print_string(p);
return 0 ; 
}