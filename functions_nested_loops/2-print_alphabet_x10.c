#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * This function prints the alphabet in lowercase followed by a newline,
 * repeated 10 times using _putchar.
 */
void print_alphabet_x10(void)
{
char line[] = "abcdefghijklmnopqrstuvwxyz\n";
int i;

for (i = 0; i < 10; i++)
{
int j = 0;
while (line[j])
{
_putchar(line[j]);
j++;
}
}
}
