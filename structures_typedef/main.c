#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - Tests new_dog and verifies string copies
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

printf("Name: %s\n", my_dog->name);
printf("Age: %.2f\n", my_dog->age);
printf("Owner: %s\n", my_dog->owner);

/* Check that strings are copied */
if (my_dog->name == "Ghost" || my_dog->owner == "Jon Snow")
printf("Strings not copied properly\n");
else
printf("Strings copied successfully\n");

free(my_dog->name);
free(my_dog->owner);
free(my_dog);

return (0);
}
