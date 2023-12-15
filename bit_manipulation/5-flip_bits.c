#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns a number of bits
 * @n: idk
 * @m: idk
 *
 * Return: number of bits you would need to flip to get from one number to a
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int c = 0;

	while (x > 0)
	{
		c += x & 1;
		x >>= 1;
	}
	return (c);
}
