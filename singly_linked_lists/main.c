#include <stdlib.h>
#include <string.h>
#include "lists.h"

int main(void)
{
lists_t node3 = {NULL, 0, NULL};
lists_t node2 = {"", 0 &node3};
lists_t node1 = {"Hello", 5 , &node2};

size_t n = print_list(&node1);

printf("-> %lu elements\n", n);
return 0;
}
