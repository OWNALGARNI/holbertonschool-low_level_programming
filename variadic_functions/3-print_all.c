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
char type;
char *sep = "";

va_start(args, format);

while (format && format[i])
{
type = format[i];

if (type == 'c' || type == 'i' || type == 'f' || type == 's')
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
if (str == NULL)
printf("(nil)");
if (str != NULL)
printf("%s", str);
}
sep = ", ";
}
i++;
}

va_end(args);
printf("\n");
}
