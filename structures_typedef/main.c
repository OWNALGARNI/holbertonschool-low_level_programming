#include "dog.h"

int main(void)
{
    struct dog my_dog = {"Buddy", 3.5, "Alice"};

    print_dog(&my_dog);
    return (0);
}

