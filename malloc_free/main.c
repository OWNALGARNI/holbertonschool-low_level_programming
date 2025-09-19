#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point to test str_concat function
 *
 * Return: Always 0
 */
int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "World!";
    char *result;
    int i;

    result = str_concat(s1, s2);
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

