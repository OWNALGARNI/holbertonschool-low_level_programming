#include "main.h"
#include <stdio.h>

int main(void)
{
    char str[] = "I love programming in C";
    char sub[] = "programming";
    char *result;

    result = _strstr(str, sub);

    if (result != NULL)
        printf("Substring found: %s\n", result);
    else
        printf("Substring not found.\n");

    return (0);
}
