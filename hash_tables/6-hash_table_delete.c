#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table and frees all memory.
* @ht: Pointer to the hash table to delete.
* This function iterates through each index of the hash table array,
* frees all nodes in the linked list at that index, then frees
* the array itself and finally the hash table structure.
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;
hash_node_t *next;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
next = node->next;
free(node->key);
free(node->value);
free(node);
node = next;
}
}

free(ht->array);
free(ht);
}

