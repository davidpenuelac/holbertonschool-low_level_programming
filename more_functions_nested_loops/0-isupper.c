#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: character
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
int a;

if ((c >= 'A') && (c <= 'Z'))
a = 1;
else
a = 0;
return (a);
}
