#include"header.h"


int main()
{
    char op;         
    ST *hptr = 0;     // Head pointer of the linked list (initially NULL)

    while(1)        
    {
        label:
        menu_main();             
        scanf(" %c", &op);       

        switch(op)
        {
            case 'a':            // Add new student record (lowercase input)
            case 'A':            // Add new student record (uppercase input)
                stud_add(&hptr);
                break;

            case 'd':            // Delete a student record
            case 'D':
                stud_del(&hptr);
                break;

            case 's':            // Show all student records
            case 'S':
                stud_show(hptr);
                break;

            case 'm':            // Modify a student record
            case 'M':
                stud_mod(&hptr);
                break;

            case 'v':            // Save student records to a file
            case 'V':
                stud_save(hptr);
                break;

            case 'e':            // Exit the program
            case 'E':
                stud_exit(hptr); // Optional save or cleanup before exit
                return 0;        // Exit program successfully

            case 't':            // Sort student records
            case 'T':
                stud_sort(hptr);
                break;

            case 'l':            // Delete all student records
            case 'L':
                delete_all(&hptr);
                break;

            case 'r':            // Reverse the linked list
            case 'R':
                rev_list(&hptr);
                break;

            default:             // Invalid input handling
                printf("Invalid Option! Please try again.\n");
                goto label;      // Go back to menu (label)
        }
    }
}
