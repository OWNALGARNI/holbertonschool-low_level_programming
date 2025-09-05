#include "main.h"
#include <stdio.h>

int main(void)
{
    char *str = "Riyadh";
    int len;

    len = _strlen(str);
    printf("Length: %d\n", len);

    return (0);
}

