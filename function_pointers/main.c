#include "function_pointers.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
    int divisor = 1;
    int digit;

    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    while ((n / divisor) >= 10)
        divisor *= 10;

    while (divisor > 0)
    {
        digit = n / divisor;
        _putchar(digit + '0');
        n %= divisor;
        divisor /= 10;
    }
    _putchar('\n');
}

/**
 * main
