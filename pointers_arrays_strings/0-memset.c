#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: string
 * @b: constant byte
 * @n: number
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
while (n > 0)
{
*s = b;
n--;
s++;
}
return (s);
}
