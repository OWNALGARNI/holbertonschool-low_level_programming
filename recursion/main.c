#include "main.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Recursion!";
    int len;

    len = _strlen_recursion(str);
    printf("Length: %d\n", len);

    return (0);
}

