#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
int line, num;
char tens, units;

for (line = 0; line < 10; line++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
tens = '1';
units = num % 10 + '0';
_putchar(tens);
_putchar(units);
}
else
{
_putchar(num + '0');
}
}
_putchar('\n');
}
}
