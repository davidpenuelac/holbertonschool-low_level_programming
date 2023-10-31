#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 96;

while (a <= 121)
{
a++;
if (a == 101 || a == 113)
continue;
putchar(a);
}
putchar(10);
return (0);
}
