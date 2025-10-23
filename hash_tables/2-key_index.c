#include "hash_table.h"

/**
 * key_index - Gives the index of a key for the hash table
 * @key: The key string
 * @size: Size of the hash table array
 *
 * Return: Index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;

hash = hash_djb2(key);
return (hash % size);
}
