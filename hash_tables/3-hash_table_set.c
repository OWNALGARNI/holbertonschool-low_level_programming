#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: Pointer to the hash table
 * @key: Key string (cannot be empty)
 * @value: Value associated with the key (will be duplicated)
 *
 * Return: 1 on success, 0 on failure
 *
 * This function handles collisions using chaining. If the key already
 * exists in the table, its value is updated. Otherwise, a new node is
 * added at the beginning of the list at the calculated index.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node, *new_node;
char *value_copy;
unsigned long int index;

if (ht == NULL || key == NULL || key[0] == '\0')
return (0);

value_copy = strdup(value);
if (value_copy == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);

node = ht->array[index];
while (node)
{
if (strcmp(node->key, key) == 0)
{
free(node->value);
node->value = value_copy;
return (1);
}
node = node->next;
}

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
free(value_copy);
return (0);
}

new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(value_copy);
free(new_node);
return (0);
}

new_node->value = value_copy;
new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
