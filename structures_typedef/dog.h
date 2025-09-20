#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

