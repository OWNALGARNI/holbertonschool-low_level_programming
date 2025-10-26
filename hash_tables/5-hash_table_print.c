#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table.
 *
 * Description: Prints all key/value pairs in the hash table
 * in the order they appear in the array and in the linked lists.
 * Format: {'key': 'value', ...}
 * Does nothing if ht is NULL.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;
int first;

if (ht == NULL)
return;

first = 1;
printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
if (first)
{
printf("'%s': '%s'", node->key, node->value);
first = 0;
}
else
printf(", '%s': '%s'", node->key, node->value);
node = node->next;
}
}
printf("}\n");
}
