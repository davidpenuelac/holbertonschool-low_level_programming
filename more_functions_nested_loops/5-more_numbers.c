#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int c = 0;
int a;

while (c < 10)
{
a = 0;
while (a <= 14)
{
if (a >= 10)
_putchar('1');
_putchar((a % 10) + '0');
a++;
}
_putchar('\n');
c++;
}
}
