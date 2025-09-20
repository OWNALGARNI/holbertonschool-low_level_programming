#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to struct dog
 *
 * Description: If any element of the struct is NULL,
 * it prints (nil) instead. If d is NULL, it prints nothing.
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);

printf("Age: %.2f\n", d->age);

if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
