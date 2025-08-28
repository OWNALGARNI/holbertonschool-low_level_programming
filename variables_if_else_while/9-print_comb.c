#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers separated by ", ",
 * using only putchar four times and no char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + 48);
if (i != 9)
{
putchar(44);  /* ASCII for ',' */
putchar(32);  /* ASCII for space */
}
}

putchar('\n');

return (0);
}
