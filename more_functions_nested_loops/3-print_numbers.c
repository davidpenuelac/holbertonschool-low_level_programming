#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int c = 0;

while (c <= 9)
{
_putchar(c + '0');
c++;
}
_putchar('\n');
}
