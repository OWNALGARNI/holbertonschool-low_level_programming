#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet except 'q' and 'e',
 * followed by a new line. Uses only putchar twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch != 'q' && ch != 'e')
putchar(ch);
ch++;
}

putchar('\n');

return (0);
}
