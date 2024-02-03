#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  /********** 2 Factorial number ******/
int Factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * Factorial(num - 1);
}
#define NUMBER 15
int main()
{
   
Factorial(NUMBER);
  
return 0;
}
 