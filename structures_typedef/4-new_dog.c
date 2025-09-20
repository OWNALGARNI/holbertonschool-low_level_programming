#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Creates a copy of a string using malloc
 * @str: String to copy
 *
 * Return: Pointer to new string, or NULL if allocation fails
 */
char *_strdup(char *str)
{
char *copy;
int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

copy = malloc(sizeof(char) * (len + 1));
if (copy == NULL)
return (NULL);

for (i = 0; i <= len; i++)
copy[i] = str[i];

return (copy);
}

/**
 * new_dog - Creates a new dog and stores copies of name and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to new dog_t, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

d->name = _strdup(name);
if (d->name == NULL)
{
free(d);
return (NULL);
}

d->owner = _strdup(owner);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}

d->age = age;

return (d);
}
