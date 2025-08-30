#include <unistd.h>
#include "main.h"

int main(void)
{
    print_sign(98);
    write(1, "\n", 1);

    print_sign(0);
    write(1, "\n", 1);

    print_sign(-1);
    write(1, "\n", 1);

    return 0;
}

