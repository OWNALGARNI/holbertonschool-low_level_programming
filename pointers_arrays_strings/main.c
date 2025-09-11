#include "main.h"
#include <sdio.h>

/**
 * main - Entry point to test _memset
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char buffer[10];
    int i;

    _memset(buffer, 'x', 10);

    for (i = 0; i < 10; i++)
    {
        _putchar(buffer[i]);
    }

    _putchar('\n');

    return (0);
}
