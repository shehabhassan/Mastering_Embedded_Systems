#include <stdio.h>

// Write a program in C to demonstrate how to handle the pointers in the program

int main()
{
  int m = 29;
  int *ab = &m;
  printf("Address of m and value : %p, %d\n", &m, m);
  m = 34 ;
    printf("changem , Value of *ab: %d\n", *ab);
  *ab = 7;
    printf("change ab , Value of m: %d\n", m);  
return 0 ; 
}