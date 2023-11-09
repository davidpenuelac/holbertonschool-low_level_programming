#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 *
 * Return: Always 0.
 */

char *cap_string(char *s)
{
int c = 0;
char *n = s;

while (*s != '\0')
{
if ((*s >= 'a') && (*s <= 'z') && (c == 1))
{
*s -= 32;
c = 0;
}
if ((*s == ' ') || (*s == '\n') || (*s == '\t') || (*s == ','))
c = 1;
else if ((*s == ';') || (*s == '.') || (*s == '!') || (*s == '?'))
c = 1;
else if ((*s == '{') || (*s == ')') || (*s == '(') || (*s == '"'))
c = 1;
else if (*s == '}')
c = 1;
else
c = 0;
s++;
}
return (n);
}
