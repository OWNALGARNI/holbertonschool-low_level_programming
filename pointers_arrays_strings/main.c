#include "main.h"
#include <stdio.h>

int main(void)
{
    char src[] = "Riyadh";
    char dest[10];

    _strncpy(dest, src, 4);
    printf("%s\n", dest);

    _strncpy(dest, src, 10);
    printf("%s\n", dest);

    return (0);
}

