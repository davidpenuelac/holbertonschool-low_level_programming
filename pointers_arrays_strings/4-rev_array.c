#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: size of array
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
int c = 0;
int s = 0;

n = n - 1;
while (n > s)
{
c = a[s];
a[s] = a[n];
a[n] = c;
n--;
s++;
}
}
