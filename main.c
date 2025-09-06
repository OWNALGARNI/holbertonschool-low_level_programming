#include "main.h"
#include <stdio.h>

int main(void)
{
    char dest[100] = "Hello, ";
    char src[] = "Riyadh!";

    _strcat(dest, src);
    printf("%s\n", dest);

    return (0);
}

