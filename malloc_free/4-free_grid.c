#include "main.h"
#include <stdlib.h>

/**
* free_grid - check the code
* @grid: previous function
* @height: height of 2D array
*
* Return: Always 0.
*/
void free_grid(int **grid, int height)
{
int i;

for (i = height - 1; i >= 0; i--)
free(grid[i]);
free(grid);
}
