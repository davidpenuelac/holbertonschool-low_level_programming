#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings.
* @s1: firs string
* @s2: second string
* @n: number
*
* Return: Always 0.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, r = 0, c = 0;
char *sr;

if (s1 != NULL)
{
while (s1[i] != '\0')
i++;
}
if (s2 != NULL)
{
while (s2[c] != '\0')
c++;
}
sr = malloc(sizeof(*sr) * i + n + 1);
if (sr == NULL)
return (NULL);
for (r = 0; r < i; r++)
sr[r] = s1[r];
for (r = 0; r < n; r++)
{
sr[r + i] = s2[r];
if (r > c)
break;
}
sr[r + i] = '\0';
return (sr);
}
