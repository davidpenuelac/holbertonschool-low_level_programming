#include "main.h"
#include <stdlib.h>

/**
* _calloc - check the code
* @nmemb: number of elements
* @size: size of each element
*
* Return: Always 0.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ar;
unsigned int t = nmemb * size, i = 0;

if (nmemb == 0 || size == 0)
return (NULL);
ar = malloc(t);
if (ar != NULL)
{
unsigned char *b = (unsigned char *)ar;

for (i = 0; i < t; i++)
b[i] = 0;
}
else
return (NULL);
return (ar);
}
