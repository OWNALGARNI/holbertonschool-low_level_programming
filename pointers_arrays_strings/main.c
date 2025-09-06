#include "main.h"
#include <stdio.h>

int main(void)
{
    char *a = "Riyadh";
    char *b = "Riyadh";
    char *c = "Riyad";
    char *d = "Riyadh2025";

    printf("a vs b: %d\n", _strcmp(a, b)); // 0
    printf("a vs c: %d\n", _strcmp(a, c)); // > 0
    printf("a vs d: %d\n", _strcmp(a, d)); // < 0

    return (0);
}

