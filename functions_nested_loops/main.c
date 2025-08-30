#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int r;

    r = _islower('a');
    _putchar(r + '0');
    _putchar('\n');

    r = _islower('A');
    _putchar(r + '0');
    _putchar('\n');

    return (0);
}
