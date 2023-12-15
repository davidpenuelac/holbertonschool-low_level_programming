#include <stdlib.h>
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
	unsigned int i = 0;

	for (i = 1 << 31; i > 0; i = i / 2)
		(n & i) ? _putchar('1') : _putchar('0');
}
