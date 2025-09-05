#include "main.h"
/**
* print_numbers - prints the number from 0 to 9 followed by anwe line 
*/
void print_number(void)
{
char nums[] = "123456789\n";
int i = 0;
while (nums[i] != '\0')
{
_putchar(nums[i]);
i++;
}
}
