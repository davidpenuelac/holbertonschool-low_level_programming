#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be represented in binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int s = sizeof(unsigned long int) * 8;
	int i = 1 << (s - 1);

	while (i > 0)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
		i >>= 1;
	}
}
