#include"header.h"

void menu_sort(void)
{
        printf(" ____________________________________________\n");
        printf("|                                            |\n");
        printf("| Enter                                      |\n");
        printf("| N/n : Sort with Name                       |\n");
        printf("| P/p : Sort with Percentage                 |\n");
        printf("|____________________________________________|\n");
}



void menu_exit(void)
{
        printf(" ____________________________________________\n");
        printf("|                                            |\n");
        printf("| S/s : Save and Exit                        |\n");
        printf("| E/e : Exit without saving                  |\n");
        printf("|____________________________________________|\n");
}



void menu_mod(void)
{
        printf(" _______________________________________________________\n");
        printf("|                                                       |\n");
        printf("| Enter which record to search for modification         |\n");
        printf("| R/r : To Search a Roll No.                            |\n");
        printf("| N/n : To Search a Name                                |\n");
        printf("| P/p : To Search a Percentage Based                    |\n");
        printf("|                                                       |\n");
        printf("|_______________________________________________________|\n");
}


void menu_del(void)
{
        printf(" ____________________________________________\n");
        printf("|                                            |\n");
        printf("| R/r : Enter the Roll to Delete             |\n");
        printf("| N/n : Enter the Name to Delete             |\n");
        printf("|                                            |\n");
        printf("|____________________________________________|\n");

}



void menu_main(void)
{
        printf(" ___________________________________________\n");
        printf("|                                           |\n");
        printf("|  ********* STUDENT RECORD MENU *********  |\n");
        printf("|___________________________________________|\n");
        printf("|                                           |\n");
        printf("|   a/A : add new record                    |\n");
        printf("|   d/D : delete a record                   |\n");
        printf("|   s/S : show the list                     |\n");
        printf("|   m/M : modify a record                   |\n");
        printf("|   v/V : save                              |\n");
        printf("|   e/E : exit                              |\n");
        printf("|   t/T : sort the list                     |\n");
        printf("|   l/L : delete all records                |\n");
        printf("|   r/R : reverse the list                  |\n");
        printf("|                                           |\n");
        printf("|   Enter your choice:                      |\n");
        printf("|___________________________________________|\n");
}

