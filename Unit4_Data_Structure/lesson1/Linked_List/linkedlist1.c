/*
 * linked_list.c
 *  Created on: Mar 26, 2024
 *      Author: shehab Hassan
 */

#include "linkedList1.h"
Student_Node_t *HeadP_student = NULL;
void Add_new_record(Student_Node_t *NewRecord)
{
     uint8_t temp_text[20];
     printf("Please Enter the Student ID \n");
     fflush(stdin);
     gets(temp_text);
     NewRecord->Student.ID= atoi(temp_text);
     
     printf("Please Enter the Student Name \n");
     gets(NewRecord->Student.Name);
     fflush(stdin);
     printf("Please Enter the Student Hight \n");
     gets(temp_text);
     fflush(stdin);
     NewRecord->Student.Hight = atoi(temp_text);
}
void Add_New_Student()
{
     // create new node of student 
     Student_Node_t *NewNodeStudent ;
     // create Last node of student
     Student_Node_t *LastNodeStudent;
     // CHECK IF THE HEAD IS NULL
   if (HeadP_student == NULL)
   {
     // student is the first node in the linked list 
       NewNodeStudent = (Student_Node_t *)malloc(sizeof(Student_Node_t));
       HeadP_student = NewNodeStudent;
   }else
   {
        // check the last node in the linked list
         LastNodeStudent = HeadP_student;
         while(LastNodeStudent->PNextStudent != NULL)
         LastNodeStudent = LastNodeStudent->PNextStudent;
        // student is not the first node in the linked list 
         NewNodeStudent = (Student_Node_t *)malloc(sizeof(Student_Node_t));
         LastNodeStudent->PNextStudent = NewNodeStudent;
   }   
    // add the new record to the new node
    Add_new_record(NewNodeStudent);
    NewNodeStudent->PNextStudent = NULL;
}
void Delete_Student()
{
    // create temp ID Read ID from student user.
     uint8_t temp_text[20];
     printf("Please Enter the Student ID \n");
     fflush(stdin);
     gets(temp_text);
     int ID = atoi(temp_text);  
    /* create the two pointers */
     Student_Node_t *selectedNodeStudent = HeadP_student;
     Student_Node_t *previuseNodeStudent = NULL;
     while (selectedNodeStudent != NULL)
     {
          if (selectedNodeStudent->Student.ID == ID)
          {
               printf("The Student ID is Deleted \n");
               if (previuseNodeStudent == NULL)
               {
                    HeadP_student = selectedNodeStudent->PNextStudent;
               }else
               {
                    previuseNodeStudent->PNextStudent = selectedNodeStudent->PNextStudent;
               }
               free(selectedNodeStudent);
               return 1;
          }
          previuseNodeStudent = selectedNodeStudent;
          selectedNodeStudent = selectedNodeStudent->PNextStudent;
     }
     printf("The Student ID is not found \n");
}
void View_All_student()
{
     // create current node student . 
     Student_Node_t *CurrentNodeStudent;
     // check if the head is null
      int count = 0;
     if (HeadP_student == NULL)
     {
          printf("There is no student in the linked list \n");
     }else
     {
          // loop to print all student in the linked list
          CurrentNodeStudent = HeadP_student;
          while(CurrentNodeStudent != NULL)
          {
               printf("==================================\n");
               printf("Number of Records %d\n",count);
               printf("ID   :%d, ",CurrentNodeStudent->Student.ID);
               printf("Name :%s, ",CurrentNodeStudent->Student.Name);
               printf("Hight:%d  ",CurrentNodeStudent->Student.Hight);
               printf("\n==================================\n");
               CurrentNodeStudent = CurrentNodeStudent->PNextStudent;
               count++;
          }
     }     
}
void Delete_All_Student()
{
// create current node student . 
  Student_Node_t *tempNodeStudent;
     // check if the head is null
     if (HeadP_student == NULL)
     {
          printf("There is no student in the linked list \n");
     }else
     {
          // loop to print all student in the linked list
          tempNodeStudent = HeadP_student;
          while(tempNodeStudent != NULL)
          {
               HeadP_student = tempNodeStudent->PNextStudent;
               free(tempNodeStudent);
               tempNodeStudent = HeadP_student;
          }
     }     

}

uint32_t Get_ID_Student(Student_Node_t *student, uint32_t Node_index)
{
     // create current node student . 
     Student_Node_t *CurrentNodeStudent;
     // check if the head is null 
     int count = 0;
     if (HeadP_student == NULL)
     {
          printf("There is no student in the linked list \n");
     }else
     {
          // loop to print all student in the linked list
          CurrentNodeStudent = HeadP_student;
          while(CurrentNodeStudent != NULL)
          {
               if (count == Node_index)
               {
                    return CurrentNodeStudent->Student.ID;
               }
               CurrentNodeStudent = CurrentNodeStudent->PNextStudent;
               count++;
          }
     }     
     return 0;
}

int Print_Length_node(Student_Node_t *student)
{
     // create current node student . 
     Student_Node_t *CurrentNodeStudent;
     // check if the head is null 
     int count = 0;
     if (HeadP_student == NULL)
     {
          printf("There is no student in the linked list \n");
     }else
     {
          // loop to print all student in the linked list
          CurrentNodeStudent = HeadP_student;
          while(CurrentNodeStudent != NULL)
          {
               CurrentNodeStudent = CurrentNodeStudent->PNextStudent;
               count++;
          }
     }     
     // printf("The Length of the linked list is : %d\n",count);
     return count;
}


void print_node_Selected_node(Student_Node_t *student, uint32_t Node_index)
{
     // create current node student . 
     Student_Node_t *CurrentNodeStudent;
     // check if the head is null 
     int count = 0;
     int node_from_last = Print_Length_node(student) - Node_index + 1;
     if (HeadP_student == NULL)
     {
          printf("There is no student in the linked list \n");
     }else
     {
          // loop to print all student in the linked list
          CurrentNodeStudent = HeadP_student;
          while(CurrentNodeStudent != NULL)
          {
               if (count == node_from_last)
               {
                    printf("==================================\n");
                    printf("Number of Records %d\n",count);
                    printf("ID   :%d, ",CurrentNodeStudent->Student.ID);
                    printf("Name :%s, ",CurrentNodeStudent->Student.Name);
                    printf("Hight:%d  ",CurrentNodeStudent->Student.Hight);
                    printf("\n==================================\n");
                    return;
               }
               CurrentNodeStudent = CurrentNodeStudent->PNextStudent;
               count++;
          }
     }     
     printf("The Node is not found \n");
}

void print_Middle_node(Student_Node_t *student)
{
     // create current node student . 
     Student_Node_t *CurrentNodeStudent;
     // check if the head is null 
     int count = 0;
     int length = Print_Length_node(student);
     if (HeadP_student == NULL)
     {
          printf("There is no student in the linked list \n");
     }else
     {
          // loop to print all student in the linked list
          CurrentNodeStudent = HeadP_student;
          while(CurrentNodeStudent != NULL)
          {
               if (count == length/2)
               {
                    printf("==================================\n");
                    printf("Number of Records %d\n",count);
                    printf("ID   :%d, ",CurrentNodeStudent->Student.ID);
                    printf("Name :%s, ",CurrentNodeStudent->Student.Name);
                    printf("Hight:%d  ",CurrentNodeStudent->Student.Hight);
                    printf("\n==================================\n");
                    return;
               }
               CurrentNodeStudent = CurrentNodeStudent->PNextStudent;
               count++;
          }
     }     
     printf("The Node is not found \n");
}