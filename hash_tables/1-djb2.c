#include "hash_tables.h"

/**
 * hash_djb2 - Hashes a string using the djb2 algorithm
 * @str: The string to hash
 *
 * Return: The resulting hash as an unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash = 5381;
int c;

while (*str)
{
c = *str;
str++;
hash = hash * 33 + c;
}

return (hash);
}
