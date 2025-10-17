#include <stdio.h>
#include "lists.h"

/**
 * main - test add_node and free_list functions
 *
 * Return: 0 on success
 */
int main(void)
{
    list_t *head = NULL;

    add_node(&head, "Hello");
    add_node(&head, "World");
    add_node(&head, "Linked List");


    free_list(head);

    return (0);
}
