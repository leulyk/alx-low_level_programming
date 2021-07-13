#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - create a multidimensional array initialized to 0
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the array, or NULL if negative dimensions provided
 */
int **alloc_grid(int width, int height)
{
	int **matrix, i, j, fail;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);

	fail = 0;
	for (i = 0; i < height; ++i)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			fail = 1;
			break;
		}

		for (j = 0; j < width; ++j)
			matrix[i][j] = 0;
	}
	if (fail)
	{
		for (j = 0; j <= i; ++j)
			free(matrix[j]);
		free(matrix);
	}
	return (matrix);
}
