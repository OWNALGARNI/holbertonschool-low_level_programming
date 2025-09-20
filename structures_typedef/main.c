#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - Tests all dog functions
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
dog_t *my_dog;

my_dog = new_dog("Ghost", 4.75, "Jon Snow");
if (my_dog == NULL)
{
printf("Failed to create dog\n");
return (1);
}

print_dog(my_dog);
free(my_dog->name);
free(my_dog->owner);
free(my_dog);

return (0);
}

