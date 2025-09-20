#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point to test init_dog function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Buddy", 3.5, "Alice");

    printf("Dog's Name: %s\n", my_dog.name);
    printf("Dog's Age: %.1f\n", my_dog.age);
    printf("Dog's Owner: %s\n", my_dog.owner);

    return (0);
}

