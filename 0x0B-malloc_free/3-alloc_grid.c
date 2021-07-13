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
	int **matrix, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(width * sizeof(int *));
	for (i = 0; i < width; ++i)
		matrix[i] = malloc(height * sizeof(int));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < width; ++i)
		for (j = 0; j < width; ++j)
			matrix[i][j] = 0;
	return (matrix);
}