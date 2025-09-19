#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point to test string_nconcat function
 *
 * Return: Always 0
 */
int main(void)
{
char *s1 = "Hello, ";
char *s2 = "World!";
char *result;
unsigned int n = 3;
unsigned int i;

result = string_nconcat(s1, s2, n);
if (result == NULL)
{
_putchar('E');
_putchar('R');
_putchar('R');
_putchar('O');
_putchar('R');
_putchar('\n');
return (1);
}

for (i = 0; result[i] != '\0'; i++)
{
_putchar(result[i]);
}
_putchar('\n');

free(result);
return (0);
}

