#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337.
 * @s: string
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
char *a = s;
char c[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
int b;

while (*s != '\0')
{
b = 0;
while (b < 10)
{
if (*s == c[b])
{
*s = n[b];
break;
}
b++;
}
s++;
}
return (a);
}
