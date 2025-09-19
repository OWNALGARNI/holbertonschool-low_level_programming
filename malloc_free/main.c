#include "main.h"

/**
 * main - Entry point to test create_array function
 *
 * Return: Always 0
 */
int main(void)
{
    char *array;
    unsigned int i;
    unsigned int size = 10;
    char init_char = 'X';

    array = create_array(size, init_char);
    if (array == NULL)
    {
        _putchar('E');
        _putchar('R');
        _putchar('R');
        _putchar('O');
        _putchar('R');
        _putchar('\n');
        return (1);
    }

    for (i = 0; i < size; i++)
    {
        _putchar(array[i]);
    }
    _putchar('\n');

    free(array);
    return (0);
}

