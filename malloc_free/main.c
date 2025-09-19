#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point to test alloc_grid function
 *
 * Return: Always 0
 */
int main(void)
{
    int **grid;
    int i, j;
    int width = 4, height = 3;

    grid = alloc_grid(width, height);
    if (grid == NULL)
    {
        _putchar('E');
        _putchar('R');
        _putchar('R');
        _putchar('O');
        _putchar('R');
        _putchar('\n');
        return (1);
    }

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            _putchar(grid[i][j] + '0');
            if (j < width - 1)
                _putchar(' ');
        }
        _putchar('\n');
    }

    for (i = 0; i < height; i++)
        free(grid[i]);
    free(grid);

    return (0);
}

