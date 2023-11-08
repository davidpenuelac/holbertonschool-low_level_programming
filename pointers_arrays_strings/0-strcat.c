#include "main.h"

/**
 * _strcat -  concatenates two strings.
 * @dest: destination
 * @src: source
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
int c = 0, i = 0;
char *n = dest;

while (dest[c] != '\0')
c++;
while (src[i] != '\0')
{
dest[c] = src[i];
i++;
c++;
}
dest[c] = '\0';
return (n);
}
