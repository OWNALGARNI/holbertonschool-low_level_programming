#include "main.h"

int main(void)
{
    int result;

    result = _isupper('G');
    _putchar(result + '0');

    result = _isupper('g');
    _putchar(result + '0');

    _putchar('\n');
    return (0);
}
