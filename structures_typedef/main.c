#include <stdio.h>
#include "dog.h"

/**
 * main - tests the init_dog function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");
    printf("Dog's Name: %s\n", my_dog.name);
    printf("Dog's Age: %.2f\n", my_dog.age);
    printf("Dog's Owner: %s\n", my_dog.owner);

    init_dog(NULL, "Ghost", 4.75, "Jon Snow");

    return (0);
}

