#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    /******** 4 POWER OF NUMBER USING RECURSION*******************/            
int power_num(int num1, int num2)  
{
    if (num2 == 0)
    {
        return 1;
    }
    return num1 * power_num(num1, num2 - 1);
}
#define NUMBER1 2
#define NUMBER2 10
int main()
{
   power_num(NUMBER1,NUMBER2);
  return 0;
}
 