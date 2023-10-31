#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @a: integer
 *
 * Return: Always 0.
 */
int _abs(int a)
{
if (a < 0)
a = a * (-1);
return (a);
}
