#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: size of the triangle
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
int c = 0;
int a;
int b;
int y = 1;
int x = size - 1;

if (size <= 0)
_putchar('\n');
else
{
while (c < size)
{
b = 0;
a = 0;
while (a < x)
{
_putchar(' ');
a++;
}
while (b < y)
{
_putchar('#');
b++;
}
_putchar('\n');
x--;
c++;
y++;
}
}
}
