#include "main.h"

/**
 * _strcmp - compare two strings.
 * @s1: string1
 * @s2: string2
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
int c = 0;

while ((*s1 != '\0') && (*s2 != '\0'))
{
c = *s1 - *s2;
if (c != 0)
break;
s1++;
s2++;
}
return (c);
}
