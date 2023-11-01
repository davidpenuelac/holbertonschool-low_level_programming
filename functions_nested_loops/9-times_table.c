#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
int a = 0;
int b = 0;
int c;

for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
c = a * b;
if (b == 0)
{
_putchar('0');
continue;
}
_putchar(',');
_putchar(' ');
if (c < 10)
_putchar (' ');
if (c >= 10)
_putchar((c / 10) + '0');
_putchar((c % 10 + '0'));
}
_putchar('\n');
}
}
