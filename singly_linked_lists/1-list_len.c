#include <stdio.h>
#include <stdlib.h>
#include "list.h"

size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *current = h);
while (current != NULL)
{
printf("%s\n", current->str);
current = current->next;
count++;
}
return (count);
}
