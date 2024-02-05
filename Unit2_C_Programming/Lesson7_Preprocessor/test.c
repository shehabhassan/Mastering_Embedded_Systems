#include  <stdio.h>
#include <stdlib.h>

// #define C   12.2
// #define M  (float)10 
// #define shehab1
// #ifdef  shehab1
// #define shehab(...)  printf(__VA_ARGS__)
// #define print_name(a,...) printf(a,__VA_ARGS__)
// #define SUM(x,y)  x+y
// #define sum_string(x,y)  x+(float)y 
// #define c  0
// #define m  0
// #endif

// #if c == m 
//     #define MAX 100
// #endif
// void fun1();
// void fun2();
// #pragma startup func1 100
// #pragma exit    func1 100  
// #pragma startup func2 50
// #pragma exit    func2 50
// #define debug_enable 1 
// #if  (debug_enable==1) 
// #define Dubprintf(debug_in,...)    if(debug_enable)  {\
//                                    if(debug_in > 1) printf("func :%s file :%s line : %s ",__func__,__FILE__,__LINE__);\
//                                    printf(">>\t");\
//                                    printf(__VA_ARGS__);}
// #else 
// #define noprintf(none)
// #endif 

#define CAT(a,...) PRIMITIVE_CAT(a,__VA_ARGS__)
#define PRIMITIVE_CAT(a,...) a ## __VA_ARGS__


#define DEC(x)

typedef struct{
    int a;
    int b;
}shehab;
struct  shehabb
{
  int a;
  int b;
}shehab2;

shehab *shehab1;

int main()
{
 
  //  char arr[10];
  //  arr = "shehab"; 
  // printf("%s\n",arr); 
  // printf("%f",sum_string(C,M));
  // printf("main func\n");
  // shehab("shehab",3);
  // printf("%d\n",SUM(10,20));
  // print_name("shehab",3);
  // Dubprintf(1,"main\n");
    return 0;
}

void func1()
{
  printf("helllo i am here \n");
   Dubprintf(1,"func1\n");
}

void fun2()
{
  printf("everything is good\n");
  Dubprintf(1,"func1\n");
}