#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int c = 0, i = 0;
char *p = dest;

while (dest[c] != '\0')
c++;
while ((src[i] != '\0') && (i < n))
{
dest[c] = src[i];
i++;
c++;
}
dest[c] = '\0';
return (p);
}
