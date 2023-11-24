#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter.
 * @array: array
 * @size: size of the array
 * @action: function pointer
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (array == NULL)
return;
else if (action == NULL)
return;
while (i < size)
{
action(array[i]);
i++;
}
}
