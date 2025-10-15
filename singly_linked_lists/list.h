#ifndef LIST_H
#define LIST_H

#include <stddef.h>

typedef struct list_s
{
    char *str;
    struct list_s *next;
} list_t;

size_t list_len(const list_t *h);

#endif /* LIST_H */

