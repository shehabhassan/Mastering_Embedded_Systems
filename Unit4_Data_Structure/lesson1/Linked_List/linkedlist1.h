/*
 *  linked_list.h
 *  Created on: Mar 26, 2024
 *  Author: Shehab Hassan
 */

#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_


#include <stdio.h>
#include <stdlib.h>

#define DEBUG  True
#define True   1
#define False  0
// define the data type of element .
typedef unsigned int  uint32_t;
typedef unsigned char uint8_t;
// define the all element data type
#define Element_type uint32_t
// define the Max of element
#define MAX_CHAR_NAME 30
// struct of student and define the data type

typedef struct DataStu DataStu_t;
struct DataStu{
    Element_type ID;
    uint8_t Name[MAX_CHAR_NAME];
    uint8_t Hight;
};

// First Node in student .

typedef struct Student_Node Student_Node_t;
struct Student_Node{
DataStu_t Student;
Student_Node_t *PNextStudent;
};

// prototypes of function .

void Add_new_record(Student_Node_t *NewRecord);
void Add_New_Student();
void Delete_Student();
void View_All_student();
void Delete_All_Student();

#endif /* _LINKED_LIST_H_ */
