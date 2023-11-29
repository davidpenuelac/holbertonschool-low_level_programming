#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list arg;
int sum = 0;
unsigned int i = 0;

if (n == 0)
return (0);
va_start(arg, n);
while (i < n)
{
int s = va_arg(arg, int);
sum += s;
i++;
}
va_end(arg);
return (sum);
}
