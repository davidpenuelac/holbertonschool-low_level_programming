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
int *ar, i = 0;

if (min > max)
return (NULL);
ar = malloc((min + max + 1) * sizeof(int));
if (ar == NULL)
return (NULL);
for (i = 0; i <= max - min; i++)
ar[i] = i + min;
return (ar);
}
