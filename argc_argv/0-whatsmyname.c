#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program followed by a new line
 * @argc: Argument count (unused)
 * @argv: Argument vector (contains program name at index 0)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argc;

printf("%s\n", argv[0]);
return (0);
}
