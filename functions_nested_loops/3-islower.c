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

if (c >= 'a' && c <= 'z')
a = 1;
else
a = 0;
return (a);
}
