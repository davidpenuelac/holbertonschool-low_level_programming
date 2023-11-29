#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i = 0;

if (n == 0)
return (0);
va_list ar;
va_start(ar, n);
while (i < n)
{
sum += va_arg(ar, int);
i++;
}
va_end(ar);
return (sum);
}
