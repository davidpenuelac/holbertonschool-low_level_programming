#include "main.h"

/**
 * print_diagonal - check the code
 * @n: n
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
int c = 0;
int a;

if (n <= 0)
_putchar('\n');
else
{
while (c < n)
{
_putchar(92);
_putchar('\n');
a = 0;
if (c == (n - 1))
break;
while (a <= c)
{
_putchar(' ');
a++;
}
c++;
}
}
}
