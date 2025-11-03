#include"header.h"
void show(ST *ptr)
{
        ST *temp=ptr;
        printf(" _______________________________________________________\n");
        printf("|                                                       |\n");
        printf("|       %-3d       |      %-13s   |    %6.2f    |\n",temp->roll,temp->name,temp->percentage);
        printf("|                                                       |\n");
        printf("|_______________________________________________________|\n");
}


void stud_show(ST *ptr)
{
        ST *temp=ptr;
        printf(" _______________________________________________________\n");
        printf("|                                                       |\n");
        while(temp)
        {
                printf("|       %-3d       |      %-13s   |    %6.2f    |\n",temp->roll,temp->name,temp->percentage);
                temp=temp->next;
        }
        printf("|                                                       |\n");
        printf("|_______________________________________________________|\n");

}


