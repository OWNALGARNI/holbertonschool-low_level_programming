#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - Test print_numbers function
 *
 * Return: Always 0
 */
int main(void)
{
    print_numbers(", ", 4, 10, 20, 30, 40);
    print_numbers(NULL, 3, 1, 2, 3);
    return (0);
}

