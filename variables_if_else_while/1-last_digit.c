#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand();
last_digit = n % 98;

printf("Last digit of %d is %d", n, last_digit);

if (last_digit > 5)
{
printf(" and is greater than 5\n");
}
else if (last_digit == 0)
{
printf(" and is 0\n");
}
else
{
printf(" and is less than 8 and not 0\n");
}
return (0);
}
