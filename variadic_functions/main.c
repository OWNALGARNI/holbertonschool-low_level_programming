#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - Test print_strings function
 *
 * Return: Always 0
 */
int main(void)
{
    print_strings(", ", 4, "Hello", "world", NULL, "!");
    print_strings(NULL, 2, "No", "separator");
    return (0);
}

