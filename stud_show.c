// sub function show particular record
#include "header.h"

void show(ST *ptr)
{
    if (ptr == NULL)
    {
        printf("No record to show\n");
        return;
    }
    
    printf(" ____________________________________\n");
    printf("| Roll | Name          | Percentage |\n");
    printf("|______|_______________|____________|\n");
    printf("| %-4d |     %-13s     |   %6.2f    |\n", ptr->roll, ptr->name, ptr->percentage);
    printf("|______|_______________|____________|\n");
}

// main function for show the records
void stud_show(ST *ptr)
{
    if (ptr == NULL)
    {
        printf("No records to display\n");
        return;
    }
    ST *temp = ptr;
    printf(" ____________________________________\n");
    printf("| Roll | Name          | Percentage |\n");
    printf("|______|_______________|____________|\n");
    
    while(temp)
    {
        printf("| %-4d | %-13s | %6.2f     |\n", temp->roll, temp->name, temp->percentage);
        temp = temp->next;
    }
    
    printf("|______|_______________|____________|\n");
}

