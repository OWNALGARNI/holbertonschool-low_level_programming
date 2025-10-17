#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h)
    {
        if (h->str)
            printf("[%u] %s\n", h->len, h->str);
        else
            printf("[0] (nil)\n");

        h = h->next;
        count++;
    }

    return (count);
}

/**
 * main - Entry point to test add_node
 *
 * Return: Always 0
 */
int main(void)
{
    list_t *head = NULL;

    add_node(&head, "Hello");
    add_node(&head, "World");
    add_node(&head, "");

    print_list(head);

    return (0);
}

