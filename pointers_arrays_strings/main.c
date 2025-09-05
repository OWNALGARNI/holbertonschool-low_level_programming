#include "main.h"
#include <stdio.h>

int main(void)
{
    char *s1 = "+++---++123abc";
    char *s2 = "no digits";
    char *s3 = "--+--42";

    printf("s1: %d\n", _atoi(s1)); // Output: -123
    printf("s2: %d\n", _atoi(s2)); // Output: 0
    printf("s3: %d\n", _atoi(s3)); // Output: -42

    return (0);
}

