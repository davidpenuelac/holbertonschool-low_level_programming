#include "main.h"

/**
 * print_square - prints a square.
 * @size: size of the square
 *
 * Return: Always 0.
 */

void print_square(int size)
{
int c = 0;
int a;

if (size <= 0)
_putchar('\n');
else
{
while (c < size)
{
a = 0;
while (a < size)
{
_putchar('#');
a++;
}
_putchar('\n');
c++;
}
}
}
