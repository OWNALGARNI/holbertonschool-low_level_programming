#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    dlistint_t *head = NULL;
    dlistint_t node1 = {8, NULL, NULL};
    dlistint_t *node2;
    size_t count;

    head = &node1;

    node2 = malloc(sizeof(dlistint_t));
    if (node2 == NULL)
    {
        printf("Error: malloc failed\n");
        return (1);
    }

    node2->n = 9;
    node2->prev = NULL;
    node2->next = head;
    head->prev = node2;
    head = node2;

    count = print_dlistint(head);
    printf("-> %lu elements\n", count);

    free(node2);

    return (0);
}

~           /**
 * main - Test add_dnodeint function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	dlistint_t *head = NULL;

	add_dnodeint(&head, 5);
	add_dnodeint(&head, 10);
	add_dnodeint(&head, 15);

	print_dlistint(head);

	return (0);
}                                                                                                                                                                                        



/**
 * main - Entry point of the program
 * Description: Demonstrates how to create a doubly linked list,
 * add nodes at the beginning and the end, and print the list.
 * Return: Always 0 (Success)
 */
int main(void)
{
    dlistint_t *head = NULL;
    dlistint_t *node;

    node = add_dnodeint(&head, 10);
    if (node == NULL)
    {
        printf("Failed to add node at beginning\n");
        return (1);
    }
    node = add_dnodeint(&head, 20);
    if (node == NULL)
    {
        printf("Failed to add node at beginning\n");
        return (1);
    }

    node = add_dnodeint_end(&head, 30);
    if (node == NULL)
    {
        printf("Failed to add node at end\n");
        return (1);
    }

    printf("Current list:\n");
    print_dlistint(head);


    return (0);
}




/**
 * main - Entry point to test doubly linked list functions
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    dlistint_t *head = NULL;
    dlistint_t *new_node;
    size_t len;

    new_node = add_dnodeint(&head, 10);
    if (!new_node)
        return (EXIT_FAILURE);

    new_node = add_dnodeint(&head, 20);
    if (!new_node)
        return (EXIT_FAILURE);

    new_node = add_dnodeint_end(&head, 30);
    if (!new_node)
        return (EXIT_FAILURE);

    new_node = add_dnodeint_end(&head, 40);
    if (!new_node)
        return (EXIT_FAILURE);

    printf("List contents:\n");
    print_dlistint(head);

    len = dlistint_len(head);
    printf("List length: %lu\n", len);

    free_dlistint(head);

    return (EXIT_SUCCESS);
}
















