#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: lenght of the line
 *
 * Return: Always 0.
 */

void print_line(int n)
{
int c = 0;

if (n <= 0)
_putchar('\n');
else
{
while (c < n)
{
_putchar('_');
c++;
}
_putchar('\n');
}
}
