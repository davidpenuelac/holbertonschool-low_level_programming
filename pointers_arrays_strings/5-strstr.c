#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
char *h = haystack;

while (*haystack != '\0')
{
while (*needle != '\0' && *h == *needle)
{
needle++;
h++;
}
if (*needle == '\0')
return (haystack);
haystack++;
h++;
}
return (0);
}
