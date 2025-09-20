#include <stdio.h>
#include "dog.h"

/**
 * main - Tests the print_dog function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
struct dog my_dog = {"Ghost", 4.75, "Jon Snow"};
struct dog no_name = {NULL, 3.5, "Arya"};
struct dog no_owner = {"Nymeria", 2.0, NULL};
struct dog empty_dog = {NULL, 0.0, NULL};

print_dog(&my_dog);
print_dog(&no_name);
print_dog(&no_owner);
print_dog(&empty_dog);
print_dog(NULL);

return (0);
}

