#include <stdio.h>
#include "hash_tables.h"

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
