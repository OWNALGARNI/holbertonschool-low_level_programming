#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_node - Creates a new hash node
 * @key: Key string
 * @value: Value string
 *
 * Return: Pointer to the new node or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value_copy;

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (NULL);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(value_copy);
		free(new_node);
		return (NULL);
	}

	new_node->value = value_copy;
	new_node->next = NULL;

	return (new_node);
}

/**
 * update_node_value - Updates the value of an existing node
 * @node: Pointer to the node
 * @value: New value string
 *
 * Return: 1 on success, 0 on failure
 */
int update_node_value(hash_node_t *node, const char *value)
{
	char *value_copy;

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	free(node->value);
	node->value = value_copy;

	return (1);
}

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: Pointer to the hash table
 * @key: Key string (cannot be empty)
 * @value: Value associated with the key (will be duplicated)
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (update_node_value(node, value));
		node = node->next;
	}

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

