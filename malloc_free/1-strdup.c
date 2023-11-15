#include "main.h"
#include <stdlib.h>

/**
* _strdup - return a copy of the string given as a parameter
* @str: string
*
* Return: Always 0.
*/

char *_strdup(char *str)
{
unsigned int i = 0;
unsigned int n = 0;
char *c = NULL;

if (str == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
i++;
}
i++;
c = (char *) malloc(i *sizeof(char));
if (c == NULL)
{
return (NULL);
}
for (n = 0; n < i; n++)
{
c[n] = str[n];
}
return (c);
}
