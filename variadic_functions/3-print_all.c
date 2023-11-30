#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  print_all - prints anything.
 * @format: list of types of arguments passed to the function
 *
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
va_list ar;
unsigned int i = 0;
char *c = "";

va_start(ar, format);
while ((format[i] != '\0') && format)
{
switch (format[i])
{
case 'c':
printf("%s%c", c, va_arg(ar, int));
break;
case 'i':
printf("%s%d", c, va_arg(ar, int));
break;
case 'f':
printf("%s%f", c, va_arg(ar, double));
break;
case 's': {
char *s = va_arg(ar, char *);
if (s == NULL)
printf("%s(nil)", c);
if (s != NULL)
printf("%s%s", c, s);
break;
}
}
c = ", ";
i++;
}
va_end(ar);
printf("\n");
}
