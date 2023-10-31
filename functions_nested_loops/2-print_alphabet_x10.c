#include "main.h"
/**
 * print_alphabet_x10 -  prints the alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int c;
int a = 0;

while (a < 10)
{
c = 97;
while (c <= 122)
{
_putchar(c);
c++;
}
_putchar(10);
a++;
}
}
