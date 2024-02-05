#include  <stdio.h>
#include <stdlib.h>

#define c 
#ifdef c
#define print() printf(__AV_AG)  
#endif 
#define get(C) #C 
int main()
{ 
     printf("%s\n",get(12.2));   
     printf("%d",get(12.2));   
    return 0;
}