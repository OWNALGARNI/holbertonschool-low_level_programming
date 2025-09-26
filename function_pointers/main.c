#include "function_pointers.h"

/**
 * print_with_putchar - Prints a string using _putchar
 * @str: The string to print
 *
 * Return: Nothing
 */
void print_with_putchar(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}

/**
 * main - Entry point to test print_name
 *
 * Return: Always 0
 */
int main(void)
{
    print_name("Riyadh", print_with_putchar);
    return (0);
}

