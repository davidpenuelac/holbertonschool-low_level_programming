#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: prefix
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int c = 0;
char *n = accept;
int a, b = 0;

while (n[b] != '\0')
b++;
while (*s != '\0')
{
a = 0;
b = 0;
while (n[b] != '\0')
{
if (*s == n[b])
{
a = 1;
break;
}
b++;
}
if (a == 0)
break;
c++;
s++;
}
return (c);
}
