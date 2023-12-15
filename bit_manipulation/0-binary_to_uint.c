#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if ((*b == '0') || (*b == '1'))
			i = i * 2 + (*b - '0');
		else
			return (0);
		b++;
	}
	return (i);
}
