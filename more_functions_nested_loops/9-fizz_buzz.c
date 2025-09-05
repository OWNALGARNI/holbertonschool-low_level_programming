#include <stdio.h>
/**
 * fizzbuzz - Prints numbers from 1 to 100 with FizzBuzz logic
 *
 * Description:
 * - Prints "Fizz" for multiples of 3
 * - Prints "Buzz" for multiples of 5
 * - Prints "FizzBuzz" for multiples of both 3 and 5
 * - Prints the number itself otherwise
 * - Each output is separated by a space
 * - Ends with a newline
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);

if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
