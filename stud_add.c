#include"header.h"
void stud_add(ST **ptr)
{
        ST *temp=(ST *)malloc(sizeof(ST));
        printf("Enter the Name,Percentage for the new record\n");
        scanf("%s %f",temp->name,&temp->percentage);
        temp->next=0;
        if(*ptr==0)
        {
                temp->roll=1;
                //temp->next=*ptr;
                *ptr=temp;
        }
        else
        {
                ST *last=*ptr;
                while(last->next!=0 && (last->next->roll - last->roll==1))
                {
                                last=last->next;
                }
                temp->roll=(last->roll)+1;
                temp->next=last->next;
                last->next=temp;
        }

}

