#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: number of parameters
 * @separator: string to be printed between numbers
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list a;
unsigned int i = 0;

va_start(a, n);
while (i < n)
{
printf("%d", va_arg(a, int));
if ((i < (n - 1)) && (separator != NULL))
printf("%s", separator);
i++;
}
va_end(a);
printf("\n");
}
