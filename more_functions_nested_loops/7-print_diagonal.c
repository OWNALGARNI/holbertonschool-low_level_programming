#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using '\'
 * @n: Number of times '\' should be printed
 */
void print_diagonal(int n)
{
int line, space;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (line = 0; line < n; line++)
{
for (space = 0; space < line; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
