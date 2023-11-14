#include "main.h"
/**
 * sqrt_aux - auxiliar function.
 *@x: number
 *@i: counter
 *
 * Return: Always 0.
 */
int sqrt_aux(int x, int i)
{
if (i * i == x)
{
return (i);
}
else if (i * i > x)
{
return (-1);
}
return (sqrt_aux(x, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: number
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
int x = n;
int q;
q = sqrt_aux(x, 0);
return (q);
}
