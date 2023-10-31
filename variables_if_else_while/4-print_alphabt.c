#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 97;

while (a <= 122)
{
if (a == 101 || a == 113)
continue;
putchar(a);
a++;
}
putchar(10);
return (0);
}
