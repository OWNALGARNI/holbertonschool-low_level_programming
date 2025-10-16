#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int main(void)
{
    list_t *node1 = malloc(sizeof(list_t));
    list_t *node2 = malloc(sizeof(list_t));
    list_t *node3 = malloc(sizeof(list_t));
    list_t *head;

    if (!node1 || !node2 || !node3)
        return (1);

    node1->str = strdup("One");
    node1->len = 3;
    node1->next = node2;

    node2->str = strdup("Two");
    node2->len = 3;
    node2->next = node3;

    node3->str = strdup("Three");
    node3->len = 5;
    node3->next = NULL;

    head = node1;

    printf("Number of elements: %lu\n", (unsigned long) list_len(head));

    /* Free memory */
    free(node1->str);
    free(node1);
    free(node2->str);
    free(node2);
    free(node3->str);
    free(node3);

    return (0);
}

