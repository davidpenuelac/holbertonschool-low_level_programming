#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings.
* @s1: string 1
* @s2: string 2
*
* Return: Always 0.
*/

char *str_concat(char *s1, char *s2)
{
unsigned int i = 0;
unsigned int l = 0;
unsigned int r = 0;
char *s4 = NULL;

if (s1 != NULL)
{
while (s1[i] != '\0')
i++;
}
if (s2 != NULL)
{
while (s2[r] != '\0')
r++;
}
s4 = (char *) malloc((i + r + 1) * sizeof(char));
if (s4 == NULL)
{
return (NULL);
}
for (l = 0; l < i; l++)
{
s4[l] = s1[l];
}
for (l = 0; l < r; l++)
{
s4[l + i] = s2[l];
}
s4[i + r] = '\0';
return ((char *)s4);
}
