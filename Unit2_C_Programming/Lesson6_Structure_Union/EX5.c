#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PI 3.14

struct Area{
    float Redius;
};

int main()
{
    
    struct Area Area;
    printf("Enter the value of Redius: "); 
    scanf("%f",&Area.Redius);
    printf("Area of Circle = %f",PI*Area.Redius*Area.Redius);
     
    return 0;
}