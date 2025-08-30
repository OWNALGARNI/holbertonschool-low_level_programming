#include "main.h"
int _isalpha(int c);
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    _putchar('\n');
    r = _isalpha('9');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

