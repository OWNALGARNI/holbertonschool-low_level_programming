#include "main.h"
#include <stdio.h>

int main(void)
{
    int num = 25;
    int result = _sqrt_recursion(num);

    printf("Square root of %d is %d\n", num, result);
    return (0);
}

