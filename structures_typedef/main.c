#include "dog.h"

/**
 * main - Tests the print_dog function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
struct dog my_dog = {"Ghost", 4.75, "Jon Snow"};
struct dog null_dog = {NULL, 4.75, NULL};

print_dog(&my_dog);
print_dog(&null_dog);
print_dog(NULL);

return (0);
}

