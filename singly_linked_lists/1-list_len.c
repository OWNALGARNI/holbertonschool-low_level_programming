#include <stddef.h>
#include "lists.h"

/**
 * list_len - Returns number of elements in a list_t linked list
 * @h: Pointer to the head node
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h)
{
count++;
h = h->next;
}

return (count);
}
