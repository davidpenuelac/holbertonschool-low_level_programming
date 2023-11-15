#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - check the code
* @width: anchura
* @height: altura
*
* Return: Always 0.
*/
int **alloc_grid(int width, int height)
{
int **ar = NULL;
int i = 0, r = 0, w = width, h = height;

if (w <= 0 || h <= 0)
return (NULL);
ar = (int **) malloc(h * sizeof(int *));
if (ar == NULL)
return (NULL);
for (i = 0; i < h; i++)
{
ar[i] = (int *) malloc(w * sizeof(int));
if (ar[i] == NULL)
{
for (; i >= 0; i--)
free(ar[i]);
free(ar);
return (NULL);
}
}
for (i = 0; i < h; i++)
{
for (r = 0; r < w; r++)
ar[i][r] = 0;
}
return (ar);
}
