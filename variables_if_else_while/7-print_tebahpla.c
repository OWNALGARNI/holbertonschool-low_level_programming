#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse,
 * followed by a new line. Uses only putchar twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch = 'z';

while (ch >= 'a')
{
putchar(ch);
ch--;
}

putchar('\n');

return (0);
}
