#include "main.h"

/**
 * main - Entry point to test _memcpy function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char source[] = "Hello";
    char destination[6];
    int i;

    _memcpy(destination, source, 5);

    destination[5] = '\0';

    for (i = 0; destination[i] != '\0'; i++)
    {
        _putchar(destination[i]);
    }
    _putchar('\n');

    return (0);
}

