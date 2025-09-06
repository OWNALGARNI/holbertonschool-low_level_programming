#include "main.h"

/**
 * main - Entry point to test print_rev
 *
 * Return: Always 0
 */
int main(void)
{
    char str1[] = "Holberton!";
    char str2[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit...";
    char str3[] = "";

    print_rev(str1);
    print_rev(str2);
    print_rev(str3); 

    return (0);
}
