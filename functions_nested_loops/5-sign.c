#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: number
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
int a;
if (n > 0)
{
_putchar('+');
a = 1;
}
else if (n == 0)
{
_putchar(48);
a = 0;
}
else if (n < 0)
{
_putchar('-');
a = -1;
}
return (a);
}
