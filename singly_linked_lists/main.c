#include "list.h"

int _putchar(char c);

int main(void)
{
list_t node1, node2, node3;
size_t len;
node1.str = "A";
node1.next = &node2;
node2.str = "B";
node2.next = &node3;
node3.str = "C";
node3.next = NULL;

len = list_len(&node1);

char *msg = "length: ";
while (*msg)
_putchar(*msg++);
if (len < 10)
	_putchar('0' + len);
else
}
_putchar('?');

return (0);
}
