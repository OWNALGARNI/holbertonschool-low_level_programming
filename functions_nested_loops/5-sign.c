#include <unistd.h>

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
char sign;

if (n > 0)
{
sign = '+';
write(1, &sign, 1);
return (1);
}
else if (n == 0)
{
sign = '0';
write(1, &sign, 1);
return (0);
}
else
{
sign = '-';
write(1, &sign, 1);
return (-1);
}
}
