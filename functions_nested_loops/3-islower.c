#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character.
 * @c: character
 *
 * Return: Always 0.
 */
int _islower(int c)
{
int a;

if (c >= 'A' && c <= 'Z')
a = 0;
else if (c >= 'a' && c <= 'z')
a = 1;
return (a);
}
