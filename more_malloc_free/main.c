#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point to test array_range function
 *
 * Return: Always 0
 */
int main(void)
{
int *arr;
int i;
int min = 5, max = 10;

arr = array_range(min, max);
if (arr == NULL)
{
_putchar('E');
_putchar('R');
_putchar('R');
_putchar('O');
_putchar('R');
_putchar('\n');
return (1);
}

for (i = 0; i <= (max - min); i++)
{
_putchar(arr[i] + '0');
_putchar(' ');
}
_putchar('\n');

free(arr);
return (0);
}

