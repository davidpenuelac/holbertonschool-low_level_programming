#include "main.h"
#include <stdlib.h>

/**
* *array_range - creates an array of integers
* @min: inicio array
* @max: maximo array
*
* Return: Always 0.
*/
int *array_range(int min, int max)
{
int *a, i = 0;

if (min < max)
return (NULL);
a = malloc((min + max + 1) * sizeof(int));
if (a == NULL)
return (NULL);
while (i <= (max - min))
a[i] = i + min;
return (a);
}
