#include "main.h"
#include <stdio.h>

int main(void)
{
    char str[] = "abcde123";
    char accept[] = "abcde";
    unsigned int len;

    len = _strspn(str, accept);
    printf("Length of prefix substring: %u\n", len);

    return (0);
}

