#include "main.h"  // Assuming _putchar is declared here

void print_alphabet_x10(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
int i = 0;

while (i < 10)
{
int j = 0;
while (alphabet[j] != '\0')
{
_putchar(alphabet[j]);
j++;
}
i++;
}
}
