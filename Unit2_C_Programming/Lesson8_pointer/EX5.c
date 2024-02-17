#include <stdio.h>
#include <string.h>
// Write a program in C to show a pointer to an array which contents 
// are pointer to structure.

struct student
{
    char name[50];
    int age;
};

int main()
{
    struct student s1 = {"John", 25};
    struct student s2 = {"Jane", 22};
    struct student s3 = {"Doe", 24};
    struct student *ptr1 = &s1;
    // char str[] = "shehab";
    // strcpy(ptr1->name,str);
    // printf("Enter the name of the student: ");
    // scanf("%s",s1.name);
    // struct student *ptr[3] = {&s1, &s2, &s3};
    // printf("%s\n",ptr1->name);
    // for (int i = 0; i < 3; i++)
    // {
        // printf("Name: %s, Age: %d\n", ptr[i]->name, ptr[i]->age);
    // }   
return 0 ; 
}