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

/**
 * main - Entry point to test get_dnodeint_at_index
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	dlistint_t *head = NULL;
	dlistint_t *node;
	int i;

	for (i = 0; i < 10; i++)
		add_dnodeint_end(&head, i * 10);

	node = get_dnodeint_at_index(head, 5);
	if (node != NULL)
		printf("Node at index 5: %d\n", node->n);
	else
		printf("Node at index 5 not found\n");

	node = get_dnodeint_at_index(head, 15);
	if (node != NULL)
		printf("Node at index 15: %d\n", node->n);
	else
		printf("Node at index 15 not found\n");


	free_dlistint(head);

	return (0);
}


/**
 * main - tests the sum_dlistint function that sums all the node values
 * Return: 0 on success
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node;

  
    head = malloc(sizeof(dlistint_t));
    if (!head)
        return (1);
    head->n = 5;          
    head->prev = NULL;    

   
    node = malloc(sizeof(dlistint_t));
    if (!node)
    {
        free(head);       
        return (1);
    }
    node->n = 10;         
    node->prev = head;   
    head->next = node;    

   
    node = malloc(sizeof(dlistint_t));
    if (!node)
    {
        free(head->next);
        free(head);
        return (1);
    }
    node->n = 15;                 
    node->prev = head->next;     
    head->next->next = node;     
    node->next = NULL;           

   
    printf("Sum of list: %d\n", sum_dlistint(head));

  
    while (head)
    {
        node = head->next;
        free(head);
        head = node;
    }

    return (0);
}

/**
 * main - check the insert_dnodeint_at_index function
 *
 * Return: Always 0.
 */
int main(void)
{
    dlistint_t *head = NULL;
    dlistint_t *new_node;
    size_t i;

  
    add_dnodeint(&head, 10);
    add_dnodeint(&head, 20);
    add_dnodeint(&head, 30);
    printf("Initial list:\n");
    print_dlistint(head);

  
    new_node = insert_dnodeint_at_index(&head, 1, 99);
    if (new_node == NULL)
    {
        printf("Failed to insert node at index 1\n");
        return (1);
    }

    printf("After inserting 99 at index 1:\n");
    print_dlistint(head);

   
    insert_dnodeint_at_index(&head, 0, 100);
    printf("After inserting 100 at index 0:\n");
    print_dlistint(head);

   
    insert_dnodeint_at_index(&head, 5, 200);
    printf("After inserting 200 at index 5:\n");
    print_dlistint(head);

   
    new_node = insert_dnodeint_at_index(&head, 10, 300);
    if (new_node == NULL)
        printf("Cannot insert at index 10 (out of range)\n");

  
    free_dlistint(head);

    return (0);
}




