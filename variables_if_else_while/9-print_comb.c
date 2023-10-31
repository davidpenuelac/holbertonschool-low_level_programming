#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c = 48;

while (c)
{
putchar(c);
if (c == 57)
break;
putchar(44);
putchar(32);
c++;
}
putchar(10);
return (0);
}
