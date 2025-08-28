#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then uppercase,
 * followed by a new line using only putchar three times.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

for (i = 'a'; i <= 'z'; i++)
putchar(i);

for (i = 'A'; i <= 'Z'; i++)
putchar(i);

putchar('\n');

return (0);
}
