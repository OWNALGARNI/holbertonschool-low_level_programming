#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: Pointer to the string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
int i = 0;
int capitalize = 1;

while (s[i] != '\0')
{
if (capitalize && s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= ('a' - 'A');
capitalize = 0;
}
else if (
s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == ',' || s[i] == ';' || s[i] == '.' ||
s[i] == '!' || s[i] == '?' || s[i] == '"' ||
s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
{
capitalize = 1;
}
else
{
capitalize = 0;
}
i++;
}

return (s);
}
