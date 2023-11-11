#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals.
 * @a: matrix
 * @size: size of the matrix
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
int b = 0, i = 0, n = 0;

while (b < size)
{
i += *(a + b * size + b);
b++;
}
b = 0;
while (b < size)
{
n += *(a + b *size + (size - 1 - b));
b++;
}
printf("%d, %d\n", i, n);
}
