#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to test _atoi
 *
 * Return: Always 0
 */
int main(void)
{
    char *s1 = "Holberton 123";
    char *s2 = "---+--+4567ab89";
    char *s3 = "abc";
    char *s4 = "-2147483648";
    char *s5 = "++--++--00123";
    char *s6 = "";

    printf("s1: %d\n", _atoi(s1));
    printf("s2: %d\n", _atoi(s2));
    printf("s3: %d\n", _atoi(s3));
    printf("s4: %d\n", _atoi(s4));
    printf("s5: %d\n", _atoi(s5));
    printf("s6: %d\n", _atoi(s6));

    return (0);
}
