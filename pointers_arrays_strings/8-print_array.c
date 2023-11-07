#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers.
 * @a: array
 * @n: elements of the array
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int c = 0;

if (n > 0)
{
while (c < (n - 1))
{
printf("%d, ", a[c]);
c++;
}
printf("%d\n", a[c]);
}
}
