#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - Tests the free_dog function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
dog_t *my_dog;

my_dog = malloc(sizeof(dog_t));
if (my_dog == NULL)
return (1);

my_dog->name = malloc(sizeof(char) * 6);
my_dog->owner = malloc(sizeof(char) * 9);

if (my_dog->name == NULL || my_dog->owner == NULL)
{
free_dog(my_dog);
return (1);
}

my_dog->name = "Ghost";
my_dog->age = 4.75;
my_dog->owner = "Jon Snow";

free_dog(my_dog);

return (0);
}

