#include "main.h"
#include <stdio.h>

int main(void)
{
    char dest[100] = "Hello, ";
    char src[] = "Riyadh2025";

    _strncat(dest, src, 6);
    printf("%s\n", dest); // Output: Hello, Riyadh2

    return (0);
}

