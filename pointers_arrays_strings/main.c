#include "main.h"
#include <stdio.h>

int main(void)
{
    char src[] = "Riyadh";
    char dest[100];

    _strcpy(dest, src);
    printf("Copied string: %s\n", dest);

    return (0);
}

