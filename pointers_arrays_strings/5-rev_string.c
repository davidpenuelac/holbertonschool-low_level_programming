#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
int a = 0, b, l = 0;
char t;

while (s[l] != '\0')
l++;
b = l - 1;
while (a < b)
{
t = s[a];
s[a] = s[b];
s[b] = t;
a++;
b--;
}
}
