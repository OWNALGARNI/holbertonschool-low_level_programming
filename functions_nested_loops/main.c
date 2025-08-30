#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int result;

    result = add(3, 7);
    _putchar(result + '0'); /* Only works for single-digit results */
    _putchar('\n');

    return (0);
}
