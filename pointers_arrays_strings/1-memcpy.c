#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination
 * @src: source
 * @n: size
 *
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned char *a = (unsigned char *) dest;
unsigned char *b = (unsigned char *) src;

while (n > 0)
{
*a = *b;
a++;
b++;
n--;
}
return (dest);
}
