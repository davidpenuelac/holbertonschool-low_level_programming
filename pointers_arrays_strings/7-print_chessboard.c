#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: array doble
 *
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
int c = 0, b;

while (c < 8)
{
b = 0;
while (b < 8)
{
_putchar(a[c][b]);
b++;
}
_putchar('\n');
c++;
}
}
