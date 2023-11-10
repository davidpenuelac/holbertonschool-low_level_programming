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
unsigned char *c = (unsigned char *) s;
unsigned char a = (unsigned char) b;

while (n > 0)
{
*c = a;
n--;
c++;
}
return (s);
}
