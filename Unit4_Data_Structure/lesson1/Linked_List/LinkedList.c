/*
 ============================================================================
 Name        : Student_Linked_list.c
 Author      : Shehab hassan
 Version     : 1.0.0
 Copyright   :
 Description : First Project using linked list
 ============================================================================
 */
#include "linkedlist1.h"

extern Student_Node_t *HeadP_student;

int main(void) {
     // choice is for user to select the options from the list.
     uint8_t Choice = 0;
     uint8_t prog_Run = 0;
    // First Start the Program ,
     printf("Welome to Student DataBase System \n");
     printf("==================================\n");
    while(True)
     {
          printf("Please Enter One of Your Option\n");
          printf("1)- Add New student \n");
          printf("2)- Delete Student \n");
          printf("3)- View_All_student \n");
          printf("4)- Delete ALL Student \n");
          printf("5)- Get ID from Last index \n");
          printf("6)- Get ID from number index \n");
          printf("7)- End Of The Program \n");
   	    scanf("%d",&Choice);
               if (Choice == 1)
               {Add_New_Student();}
               else if (Choice == 2)
               {Delete_Student();}
               else if (Choice == 3)
               {View_All_student();}
               else if (Choice == 4)
               {Delete_All_Student();}
               else if(Choice == 5){
                 printf("Please Enter the number of last index \n");
                uint8_t index1;
                scanf("%d",&index1);
                 print_node_Selected_node(HeadP_student, index1);
               }
               else if (Choice == 6){
                printf("Please Enter the number of index \n");
                uint8_t index;
                scanf("%d",&index);
                 printf("ID of student is : %d\n",Get_ID_Student(HeadP_student, index));
               }else if(Choice == 7){break;}
}
	return EXIT_SUCCESS;
}
