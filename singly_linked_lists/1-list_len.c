#include <stdio.h>
#include <stdlib.h>

typedef struct list_s
{
char *str;
struct list_s *next;
}
list_t;
size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *current =h;
while (current != NULL)
{
printf("%s\n", current->str);
current = current->next;
count++;
}
return count;
}
