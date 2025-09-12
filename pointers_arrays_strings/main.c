#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to test _strchr function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char str[] = "Hello, world!";
    char *result;

    result = _strchr(str, 'w');

    if (result != NULL)
    {
        printf("Character found: %c\n", *result);
        printf("Pointer position: %ld\n", result - str);
    }
    else
    {
        printf("Character not found.\n");
    }

    return (0);
}

