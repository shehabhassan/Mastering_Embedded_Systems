#include <stdio.h>


int main()
{

    int x=10; 
const char *s = "Hello";
printf("\t[%10s]\n\t[%-10s]\n\t[%*s]\n\t[%-10.*s]\n\t[%-*.*s]\n",s,s,10,s,4,s,10,4,s);
printf("Characters :\t%c %%\n",65);

printf("Integers : \n");
printf("Decimal :\t%i %d %.6i %i %.0i %+i %u\n",1,2,3,0,0,4,-1);
printf("Hexadecimal :\t%x %x %X %#x\n",5,10,10,6);
printf("Octal :\t%o %#o %#o\n",10,10,4);
printf("Floating point numbers :\n");
printf("Rounding :\t%f %.0f %.32f\n",1.5,1.5,1.3);
printf("Padding :\t%05.2f %.2f %5.2f\n",1.5,1.5,1.5);
printf("Scientific :\t%E %e\n",1.5,1.5);
printf("Hexadecimal floating point : \t%a %A\n",1.5,1.5);
printf("Special values :\t0/0=%g 1/0=%g\n",0.0/0.0,1.0/0.0);

printf("C tricks: \t %d %d %d \n",++x,x,x++);
    return 0;
}
