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

if (a < 0)
a = a * (-1);
c = a % 10;
_putchar(48 + c);
return (c);
}
