#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
    char name[20];
    int Roll_no;
    float mark;
};

int main()
{
    struct student student_member[100];
    int count=0;
    char name[20];
    do
    {
      printf("Enter information of students : ");
     printf("Enter name: ");
     scanf("%s",&name);
     strcpy(student_member[count].name,name);  
     printf("Enter Roll no: ");
     scanf("%d",&student_member[count].Roll_no);
     printf("Enter mark: ");
     scanf("%f",&student_member[count].mark);
     count++;    

    /************* Print all information of students ***************/
     for (int i = 0; i < count; i++)
     {
        printf("Display all information about student \n");
        printf("Name: %s\n",student_member[i].name);
        printf("Roll no: %d\n",student_member[i].Roll_no);
        printf("Mark: %f\n",student_member[i].mark);
     }
     
        printf("if you want to continue enter 'y':or 'n' for stop\n");
        fflush(stdin);
    } while (getchar()=='y');
    return 0;
}