#include"header.h"

// Function to delete all nodes from the linked list
void delete_all(ST **ptr)
{
    // If the head pointer is NULL, there are no records to delete
    if (!*ptr)
    {
        printf("No Records available to delete\n");
        return;
    }

    ST *temp; // Temporary pointer to store the node being deleted

    // Loop through the entire linked list and delete each node
    while (*ptr)
    {
        temp = *ptr;       // Store the current head node
        *ptr = temp->next; // Move head pointer to the next node
        free(temp);        // Free memory of the current node
    }

    printf("All Records Deleted successfully\n");
}
