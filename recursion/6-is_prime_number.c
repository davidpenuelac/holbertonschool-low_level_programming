#include "main.h"
/**
 * aux_prime - axiliar function
 *@x: number
 *@y: counter
 *
 * Return: Always 0.
 */
int aux_prime(int x, int y)
{
if (x > 2 && x % 2 == 0)
{
return (0);
}
if (x % y == 0 && y > 1)
{
return (0);
}
if (x % y == 0 && y == 1)
{
return (1);
}
return (aux_prime(x, y - 1));
}
/**
 * is_prime_number - return 1 or 0
 *@n: number
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
int x = n;
int y = (n / 2) + 1;
int q;
if (n == 2 || n == 3)
{
return (1);
}
if (n == 1 || n == -1)
{
return (0);
}
q = aux_prime(x, y);
return (q);
}
