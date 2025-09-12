#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * is_number - Checks if a string contains only digits
 * @s: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_number(char *s)
{
int i = 0;

if (s[0] == '\0')
return (0);

while (s[i])
{
if (!isdigit(s[i]))
return (0);
i++;
}

return (1);
}

/**
 * main - Adds positive numbers passed as arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
