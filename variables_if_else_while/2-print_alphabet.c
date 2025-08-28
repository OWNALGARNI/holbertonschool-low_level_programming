#include <stdio.h>
/**
 * main - Entry point
 *
 * Descreption :alphabet in lowercase,
 * followed by new line
 *
 * Return : Always 0 (success)
 */

int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
int i = 0;

while (alphabet[i] != '\0')
{
putchar(alphabet[i]);
i++;
}

return (0);
}
