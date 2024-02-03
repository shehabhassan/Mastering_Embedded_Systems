#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPrime(int num)
{
if (num<=1)
{
    return 0;
}
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
} 
/*********** 1 homework 4  ***********/            
int prime_between(int num1, int num2)
{
        for (int i = num1; i < num2; i++)
        {
            if(isPrime(i)==1)
            printf("%d ",i);
        }       
}
int main()
{
   
 prime_between(5,10);
  
return 0;
}
 