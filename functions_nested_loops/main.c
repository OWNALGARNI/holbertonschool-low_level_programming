#include "main.h"
#include <unistd.h>

int main(void)
{
    int val = _abs(-5);
    char c = val + '0';  /* Only works for single-digit values */
    write(1, &c, 1);
    write(1, "\n", 1);
    return (0);
}
