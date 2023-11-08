#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
int si = 1, c = 0, r = 0, p = 0;

while ((s[c] < '0') || (s[c] > '9'))
{
if (s[c] == '-')
si = -si;
c++;
}
while ((s[c] >= '0') && (s[c] <= '9'))
{
r = r * 10 + (s[c] - '0');
c++;
p++;
}
r = r *si;
if (p == 0)
return (0);
else
return (r);
}
