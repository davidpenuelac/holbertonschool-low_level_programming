#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
char *d = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (d);
}
