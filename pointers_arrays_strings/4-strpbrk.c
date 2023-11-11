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
char *l = s;

if (*accept == '\0')
return (0);
while (*l != '\0')
{
a = 0;
while (accept[a] != '\0')
{
if (*l == accept[a])
{
return (l);
}
a++;
}
l++;
}
return (0);
}
