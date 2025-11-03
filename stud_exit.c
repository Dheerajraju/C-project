#include"header.h"
void stud_exit(ST *ptr)
{
        char op;
        label:
                menu_exit();
                scanf(" %c",&op);
                switch(op)
                {
                        case 'S':
                        case 's': printf("Saved ");stud_save(ptr);
                        case 'E':
                        case 'e': printf("\nExitted\n"); break;
                        default : printf("Option Mismatched\n"); goto label;
                }

}


