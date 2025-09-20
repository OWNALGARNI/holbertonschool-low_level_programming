#include <stdio.h>
#include "dog.h"

/**
 * main - Demonstrates usage of dog_t typedef
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
dog_t my_dog;

init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");
print_dog(&my_dog);

return (0);
}

