#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 97;
int c = 65;

while (a <= 122)
{
putchar(a);
a++;
}
while (c <= 90)
{
putchar(c);
c++;
}
putchar(10);
return (0);
}
