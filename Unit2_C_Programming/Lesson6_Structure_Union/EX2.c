#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct DIS_system{
    float inch;
    int feet;
};

int main()
{
    struct DIS_system dis_system,dis_system2,Result;
    int count = 0;
    printf("Enter information for Distance 1 : ");
    printf("Enter Feet: ");
    scanf("%d",&dis_system.feet);
    printf("Enter inch: ");  
    scanf("%f",&dis_system.inch);
    printf("Enter information for Distance 1 : ");
    printf("Enter Feet: ");
    scanf("%d",&dis_system2.feet);
    printf("Enter inch: ");  
    scanf("%f",&dis_system2.inch);
    Result.feet = dis_system.feet + dis_system2.feet;
    Result.inch = dis_system.inch + dis_system2.inch;
    printf("Result in feet is: %d\n Result in inch is: %0.2f\n",Result.feet,Result.inch); 
    
    return 0;
}