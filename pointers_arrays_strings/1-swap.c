#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: integer1
 * @b: integer2
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int c = *a;

*a = *b;
*b = c;
}
