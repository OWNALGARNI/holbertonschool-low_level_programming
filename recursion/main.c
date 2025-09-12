#include "main.h"
#include <stdio.h>

int main(void)
{
    int base = 2;
    int exponent = 4;
    int result;

    result = _pow_recursion(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);

    return (0);
}

