#include "main.h"
#include <stdlib.h>
/**
* create_array - return a pointer to an array
* @size: size of the array
* @c: specific char
*
* Return: Always 0.
*/
char *create_array(unsigned int size, char c)
{
char *ar = NULL;
unsigned int i = 0;

if (size == 0)
{
return (NULL);
}
ar = (char *) malloc(size * sizeof(char));
if (ar == NULL)
{
return (NULL);
}
while (i < size)
{
ar[i] = c;
i++;
}
return (ar);
}
