#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 * @a: number
 *
 * Return: Always 0.
 */
int print_last_digit(int a)
{
int c;

c = a % 10;
if (c < 0)
c = c * (-1);
_putchar(48 + c);
return (c);
}
