#include "main.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Riyadh";

    printf("Before: %s\n", str);
    rev_string(str);
    printf("After: %s\n", str);

    return (0);
}

