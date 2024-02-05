#include <stdio.h>

// Write a program in C to print the elements of an array in reverse 
// order. Test Data 

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;
    p = arr;
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");  
return 0 ; 
}