#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point to test malloc_checked function
 *
 * Return: Always 0
 */
int main(void)
{
char *buffer;
unsigned int size = 20;
unsigned int i;

buffer = malloc_checked(size);
for (i = 0; i < size; i++)
{
buffer[i] = 'A';
_putchar(buffer[i]);
}
_putchar('\n');

free(buffer);
return (0);
}

