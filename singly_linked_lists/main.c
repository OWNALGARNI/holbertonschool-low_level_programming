#include <stdio.h>
#include "lists.h"

/* Function prototype to print the list */
size_t print_list(const list_t *h);

int main(void)
{
    list_t *head = NULL;
    list_t *node;

    node = add_node_end(&head, "Hello");
    if (node == NULL)
        return (1);

    node = add_node_end(&head, "World");
    if (node == NULL)
        return (1);

    node = add_node_end(&head, "!");
    if (node == NULL)
        return (1);

    print_list(head);

    /* Here you should ideally free the list */

    return (0);
}

/* Simple print_list implementation for testing */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h)
    {
        printf("[%u] %s\n", h->len, h->str);
        h = h->next;
        count++;
    }
    re

