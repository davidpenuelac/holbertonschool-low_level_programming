#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - executes a function given as a parameter
 * @array: array
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
while (i < size)
{
if (cmp(array[i]) != 0)
return (i);
i++;
}
return (-1);
}
