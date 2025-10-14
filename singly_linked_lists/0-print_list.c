# include <stdio.h>
# include "lists.h"

/**
* print_list print all elements of a list _t list.
*
* This function traverses a singly linked list and prints
* the string and length of each node in the format: [len] str.
* if a node has NULL string, it prints [0] (nil).
*
* @h: pointer to the first node in the list
*
* Return: The  number of nodes in the list
*/

size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
