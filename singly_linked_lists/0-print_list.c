# include <stdio.h>
# include "lists.h"

**/ print_list print all elements of a list _t list
*h: pointer to the first node@
*Rutern number of nodes
*/

size_t print_list(const list_t *h)
{
size_t count =0;
while(h !=Null)
}
if(h->str ==Null)
{
printf("[0](nil")\n);
}else
{printf("[%u]%s\n",h->len,h->str);
h = h->next;
count++;
}

return count ;
}
