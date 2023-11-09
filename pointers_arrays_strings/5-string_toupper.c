#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string
 *
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
char *c = s;

while (*s)
{
if ((*s >= 'a') && (*s <= 'z'))
*s -= 32;
s++;
}
return (c);
}
