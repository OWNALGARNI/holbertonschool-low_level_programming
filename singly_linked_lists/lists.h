#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stddef.h> 

/**
 * struct list_s - singly linked list node structure
 * @str: string - malloc'ed string
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: node structure for singly linked list used in this project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t list_len(const list_t *h); 
list_t *add_node(list_t **head, const char *str);

#endif /* LISTS_H */

