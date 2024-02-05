#include <stdio.h>

// Write a program in C to print all the alphabets using a pointer. Go to the editor
// Expected Output :
// The Alphabets are :                                                                                         
// Expected Output :
// A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  
// R  S  T  U  V  W  X  Y  Z 

int main()
{
    char *p;
    char c;
    for (c = 'A'; c <= 'Z'; c++)
    {
        p = &c;
        printf("%c ", *p);
    }  
return 0 ; 
}