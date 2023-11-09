#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337.
 * @s: string
 *
 * return: Always 0.
 */
char *leet(char *s)
{
char *a = s;

while (*s != '\0')
{
if ((*s == 'a') || (*s == 'A'))
*s = '4';
else if ((*s == 'e') || (*s == 'E'))
*s = '3';
else if ((*s == 'o') || (*s == 'O'))
*s = '0';
else if ((*s == 't') || (*s == 'T'))
*s = '7';
else if ((*s == 'l') || (*s == 'L'))
*s = '1';
s++;
}
return (a);
}
