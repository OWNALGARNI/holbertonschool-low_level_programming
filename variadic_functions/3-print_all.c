#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on format specifiers.
 * @format: List of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char *sep = "";
char type;
int is_valid;

va_start(args, format);

while (format && format[i])
{
type = format[i];
is_valid = (type == 'c' || type == 'i' || type == 'f' || type == 's');

if (is_valid)
{
printf("%s", sep);
if (type == 'c')
printf("%c", va_arg(args, int));
if (type == 'i')
printf("%d", va_arg(args, int));
if (type == 'f')
printf("%f", va_arg(args, double));
if (type == 's')
{
str = va_arg(args, char *);
printf("%s", str ? str : "(nil)");
}
sep = ", ";
}
i++;
}
va_end(args);
printf("\n");
}
