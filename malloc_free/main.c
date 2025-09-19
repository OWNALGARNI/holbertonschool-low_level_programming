#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point to test _strdup function
 *
 * Return: Always 0
 */
int main(void)
{
    char *original = "Hello";
    char *copy;
    int i;

    copy = _strdup(original);
    if (copy == NULL)
    {
        _putchar('E');
        _putchar('R');
        _putchar('R');
        _putchar('O');
        _putchar('R');
        _putchar('\n');
        return (1);
    }

    for (i = 0; copy[i] != '\0'; i++)
    {
        _putchar(copy[i]);
    }
    _putchar('\n');

    free(copy);
    return (0);
}

