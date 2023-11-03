#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
int c = 1;

while (c <= 99)
{
if ((c % 3 == 0) && (c % 5 == 0))
printf("FizzBuzz ");
else if (c % 3 == 0)
printf("Fizz ");
else if (c % 5 == 0)
printf("Buzz ");
else
printf("%d ", c);
c++;
}
printf("Buzz\n");
return (0);
}
