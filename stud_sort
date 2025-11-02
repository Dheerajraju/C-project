#include"header.h"

int node_count(ST *ptr)
{
        int c=0;
        while(ptr!=0)
        {
                c++;
                ptr=ptr->next;
        }
        return c;
}

void stud_sort(ST *ptr)
{
        char op;
        ST *p=ptr;
        int i=0,size=sizeof(ST)-8,c=node_count(ptr);
        if (!ptr)
        {
                printf("No records to sort.\n");
                return;
        }
        label:
                menu_sort();
                scanf(" %c", &op);

                if (op!='N' && op!='n' && op!='P' && op!='p')
                {
                        printf("Option Mismatched\n");
                        goto label;
                }
                ST **p2=(ST**)malloc((c+1)*sizeof(ST*));
                ST temp;
                while(p)
                {
                        p2[i++]=p;
                        p=p->next;
                }
                if(op=='N' || op=='n')
                {
                        p=ptr;
                        for(int j=0;j<i-1;j++)
                        {
                                for(int k=j+1;k<i;k++)
                                {
                                        if(strcmp(p2[j]->name,p2[k]->name)>0)
                                        {
                                                memcpy(&temp,p2[j],size);
                                                memcpy(p2[j],p2[k],size);
                                                memcpy(p2[k],&temp,size);
                                        }
                                }
                        }
                }
                else if(op=='P' || op=='p')
                {
                        p=ptr;
                        for(int j=0;j<i-1;j++)
                        {
                                for(int k=j+1;k<i;k++)
                                {
                                        if(p2[j]->percentage>p2[k]->percentage)
                                        {
                                                memcpy(&temp,p2[j],size);
                                                memcpy(p2[j],p2[k],size);
                                                memcpy(p2[k],&temp,size);
                                        }
                                }
                        }
                }
    printf("Sorting completed.\n");
} 
