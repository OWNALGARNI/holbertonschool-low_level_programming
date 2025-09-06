#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
int i = 0;
int temp;

while (i < n - 1 - i)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
i++;
}
}
