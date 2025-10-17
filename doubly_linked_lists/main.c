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

