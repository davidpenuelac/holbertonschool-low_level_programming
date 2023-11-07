#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 * @s: string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int l = 0;

while (s[l] != '\0')
l++;
l = l - 1;
while (l >= 0)
{
_putchar(s[l]);
l--;
}
_putchar('\n');
}
