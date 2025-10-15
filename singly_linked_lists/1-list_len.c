#include <stdio.h>
#include <stdlib.h>
#include "list.h"


/**
 * list_len - Counts the number of elements in a linked list
 * and prints each string
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *current = h;
while (current != NULL)
{
printf("%s\n", current->str);
current = current->next;
count++;
}
return (count);
}
