#include "list.h"

/**
 * _puts - print a string followed by a new line using _putchar
 * @str: string to print
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
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
_puts(current->str);
current = current->next;
count++;
}
return (count);
}
