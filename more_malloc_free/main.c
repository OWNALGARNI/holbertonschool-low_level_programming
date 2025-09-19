#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point to test _calloc function
 *
 * Return: Always 0
 */
int main(void)
{
int *array;
unsigned int i, count = 5;

array = _calloc(count, sizeof(int));
if (array == NULL)
{
_putchar('E');
_putchar('R');
_putchar('R');
_putchar('O');
_putchar('R');
_putchar('\n');
return (1);
}

for (i = 0; i < count; i++)
{
_putchar(array[i] + '0');
_putchar(' ');
}
_putchar('\n');

free(array);
return (0);
}

