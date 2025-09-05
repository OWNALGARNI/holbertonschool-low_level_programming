#include "main.h"

int main(void)
{
    int result;

    result = mul(3, 4);
    _putchar(result / 10 + '0');  
    _putchar(result % 10 + '0'); 
    _putchar('\n');
    return (0);
}

