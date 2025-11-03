#include<stdio.h>      
#include<stdlib.h>     
#include<string.h>   


typedef struct st
{
    int roll;               // Roll number of the student
    char name[20];          // Name of the student
    float percentage;       // Percentage/Marks of the student
    struct st *next;        // Pointer to the next student (for linked list)
} ST;


void stud_add(ST **);// Adds a new student record to the list
void stud_del(ST **);// Deletes student record(s) from the list
void stud_show(ST *);// Displays all student records
void stud_mod(ST **);// Modify student details
void stud_save(ST *);// Saves student records to a file
void stud_exit(ST *);// Exit program after saving/deallocating memory
void stud_sort(ST *);// Sorts the list of students based on given criteria (name, roll, percentage)
void delete_all(ST **);// Deletes all student records
void rev_list(ST **);// Reverses the linked list of student records
void show(ST *);// Displays student information


void menu_main(void);  // Main menu interface
void menu_del(void);   // Delete submenu
void menu_mod(void);   // Modify submenu
void menu_save(void);  // Save submenu
void menu_sort(void);  // Sort submenu
void menu_exit(void);  // Exit confirmation menu
void delete_roll(ST **);  // Delete student by roll number
void delete_name(ST **);  // Delete student by name
void mod_per(ST **);   // Modify student percentage
void mod_roll(ST **);  // Modify student roll number
void mod_name(ST **);  // Modify student name
int node_count(ST *);
