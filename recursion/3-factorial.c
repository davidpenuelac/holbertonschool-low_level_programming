#include "main.h"
/**
 * factorial - return the factorial of a number
 *@n: number
 *
 * Return: Always 0.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
