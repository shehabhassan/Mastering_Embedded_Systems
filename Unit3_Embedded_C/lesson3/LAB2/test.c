#include <stdio.h>

#define message "Hello\
World"

#if X == 1
#define message "Hello World"
#endif
int main()
{ 
    printf("%s",message);
    return 0;
}