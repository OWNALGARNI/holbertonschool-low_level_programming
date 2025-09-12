#include "main.h"
#include <stdio.h>

int main(void)
{
    char str[] = "hello world";
    char accept[] = "xyzol";
    char *result;

    result = _strpbrk(str, accept);

    if (result != NULL)
        printf("First matching character: %c\n", *result);
    else
        printf("No matching character found.\n");

    return (0);
}
