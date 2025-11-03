#include"header.h"
void stud_del(ST **ptr)
{
        char op;
        label:
                menu_del();
                scanf(" %c",&op);
                switch(op)
                {
                        case 'R':
                        case 'r':delete_roll(ptr); break;
                        case 'N':
                        case 'n':delete_name(ptr); break;
                        default: printf("Option Mismatched.\n"); goto label;
                }
}


void delete_roll(ST **ptr)
{
        label:
                int n;
                ST *temp=*ptr;
                ST *prev=NULL;
                printf("Enter the Roll Number\n");
                scanf("%d",&n);
                while(temp)
                {
                        if(temp->roll==n)
                        {
                                if(temp==*ptr)
                                {
                                        *ptr=temp->next;
                                }
                                else
                                {
                                        prev->next=temp->next;
                                }
                                free(temp);
                                temp=NULL;
                                return;
                        }
                        else
                        {
                                prev=temp;
                                temp=temp->next;
                        }
                }
                printf("Roll Numbers are not matched\n");
                goto label;
}


void delete_name(ST **ptr)
{
        ST *temp=*ptr;
        ST *prev=NULL;
        char name[20];
        int count=0;
        int flag=1;
        printf("Enter the Name\n");
        scanf("%s",name);
        while(temp)
        {
                if(strcmp(temp->name,name)==0)
                {
                        count++;
                        if(count==1)
                                prev=temp;
                        if(count>1)
                        {
                                if(flag==1)
                                {
                                        show(prev);
                                        flag=0;
                                }
                                show(temp);
                        }
                }
                temp=temp->next;
        }
        if(count==1)
        {
                if(prev==*ptr)
                {
                        *ptr=prev->next;
                }
                else
                {
                        ST *temp=*ptr;
                        while(temp->next!=prev)
                                temp=temp->next;
                        temp->next=prev->next;
                }
                free(prev);
                prev=NULL;
                return;
        }
        else if(count>1)
                delete_roll(ptr);
        else
        {
                printf("Record Mismatch for the given name\n");
                return;
        }

}

