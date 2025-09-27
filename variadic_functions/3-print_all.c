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

va_start(args, format);

while (format && format[i])
{
type = format[i];

if (type == 'c' || type == 'i' || type == 'f' || type == 's')
{
printf("%s", sep);
switch (type)
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
printf("%s", str ? str : "(nil)");
break;
}
sep = ", ";
}
i++;
}
va_end(args);
printf("\n");
}
