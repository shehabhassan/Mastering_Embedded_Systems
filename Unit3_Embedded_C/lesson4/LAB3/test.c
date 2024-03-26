#include <stdio.h>



int main()
{
    float x = 5.1;
    double y  = 5.1;
    // int temp = 25.5 *100;// 2550 /100 25.5 25 
    if(x==y)
    {
        printf("x : %ld and y: %f are equal\n",x,y);
    }else
    {
        printf("are not equal x : %.10f , y : %.10f \n",x,y);
    } 
    // printf("%f\n",x/0);
    return 0;
}