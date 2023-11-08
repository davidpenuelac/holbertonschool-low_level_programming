#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int c = 0;

while (c < n)
{
dest[c] = src[c];
c++;
}
return (dest);
}
