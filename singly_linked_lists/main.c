#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"

int main(void)
{
list_t node1, node2, node3;
node1.str = "A";
node1.next = &node2;
node2.str = "B";
node2.next = &node3;
node3.str = "C";
node3.next = NULL;

size_t len = list_len(&node1);

printf("length of the list: %zu\n", len);
return 0;
}
