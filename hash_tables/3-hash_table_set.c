#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* create_node - Creates a new hash node
* @key: Key string
* @value: Value string
*
* Return: Pointer to the new node, or NULL on failure
*/
hash_node_t *create_node(const char *key, const char *value)
{
hash_node_t *new_node;

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (NULL);

new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (NULL);
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (NULL);
}

new_node->next = NULL;
return (new_node);
}

/**
* update_node_value - Updates the value of an existing node
* @node: Node to update
* @value: New value string
*
* Return: 1 on success, 0 on failure
*/
int update_node_value(hash_node_t *node, const char *value)
{
char *new_value;

new_value = strdup(value);
if (new_value == NULL)
return (0);

free(node->value);
node->value = new_value;
return (1);
}

/**
* hash_table_set - Adds or updates an element in the hash table
* @ht: Pointer to the hash table
* @key: Key string (cannot be empty)
* @value: Value string associated with the key
*
* Return: 1 on success, 0 on failure
*
* Description: Adds a new element to the hash table. If the key already
* exists, updates its value. In case of collision, the new node is
* added at the beginning of the
*/

