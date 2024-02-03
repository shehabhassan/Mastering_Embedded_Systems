#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Complex_system{
    float real_number;
    float imag_number;
};

int main()
{
    struct Complex_system number1,number2,Result;
    int count = 0;
    printf("Enter information for first complex number : ");
    printf("Enter real number: ");
    scanf("%f",&number1.real_number);
    printf("Enter imaginary number: ");  
    scanf("%f",&number1.imag_number);
    printf("Enter information for second complex: ");
    printf("Enter real number: ");
    scanf("%f",&number2.real_number);
    printf("Enter imaginary number: ");  
    scanf("%f",&number2.imag_number);
    Result.real_number = number1.real_number + number2.real_number;
    Result.imag_number = number1.imag_number + number2.imag_number;
    printf("%0.2f + j %0.2f\n",Result.real_number,Result.imag_number); 
    return 0;
}