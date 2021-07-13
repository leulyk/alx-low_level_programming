#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - free a dynamically allocated multidimensional array
 *
 * @grid: the multidimensional array
 * @height: height of the array
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
		free(grid[i]);
	free(grid);
}
