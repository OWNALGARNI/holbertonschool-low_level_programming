#include <stdio.h>
#include "dog.h"

/**
 * main - Tests the init_dog and print_dog functions
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");
    print_dog(&my_dog);

    init_dog(NULL, "Ghost", 4.75, "Jon Snow");
    print_dog(NULL);

    return (0);
}
