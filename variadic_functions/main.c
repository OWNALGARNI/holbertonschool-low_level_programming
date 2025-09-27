#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - Entry point to test sum_them_all
 *
 * Return: Always 0
 */
int main(void)
{
    int result;

    result = sum_them_all(4, 10, 20, 30, 40);
    printf("Sum: %d\n", result);

    result = sum_them_all(0);
    printf("Sum with zero arguments: %d\n", result);

    result = sum_them_all(2, -5, 15);
    printf("Sum with negative and positive: %d\n", result);

    return (0);
}

