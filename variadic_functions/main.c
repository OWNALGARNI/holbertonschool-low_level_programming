#include "variadic_functions.h"

/**
 * main - Test print_all function
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
    print_all("fcsi", 3.14435, 'H', "#Cisfun", 0);
    print_all("mnbvfqcepolsbxzi", 3.14435, 'H', "#Cisfun", 0);
    print_all("qwertyuopadghjklzxvbnm");
    print_all("");
    print_all(NULL);
    print_all("fcsi", 3.14435, 'H', NULL, 402);
    return (0);
}

