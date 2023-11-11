#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: bytes
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
int a;

if (*accept == '\0')
return (0);
while (*s != '\0')
{
a = 0;
while (accept[a] != '\0')
{
if (*s == accept[a])
{
return (s);
}
a++;
}
s++;
}
return (s);
}
