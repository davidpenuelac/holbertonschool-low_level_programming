#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @n: number of parameters
 * @separator: string to be printed between strings
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ar;
unsigned int i = 0;

va_start(ar, n);
while (i < n)
{
const char *c = va_arg(ar, const char *);
if (c == NULL)
printf("(nil)");
else
printf("%s", c);
if ((i < (n - 1)) && (separator != NULL))
printf("%s", separator);
i++;
}
va_end(ar);
printf("\n");
}
