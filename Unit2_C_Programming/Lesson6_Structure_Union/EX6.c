#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union job{
    char name[32];
    float salary;
    int worker_no;
}u;

struct job1{
    char name[32]; // 32 / 4 = 8
    float salary;  // 4 
    int worker_no; // 4 , 16 
}s;

int main()
{    
    printf("size of unoin  : %d\n",sizeof(u)); // 32 
    printf("size of struct : %d",sizeof(s));   // 40 
    return 0;
}