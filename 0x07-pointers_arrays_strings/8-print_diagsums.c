#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - print the diagonal sum of a square matrix of integers
 *
 * @a: pointer to a multidimensional area
 * @size: dimension of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int leftsum, rightsum, i, j, k;

	j = 0, k = size - 1;
	leftsum = rightsum = 0;
	for (i = 0; i < size; ++i, j += size + 1, k += size - 1)
	{
		leftsum += *(a + j);
		rightsum += *(a + k);
	}
	printf("%d, %d\n", leftsum, rightsum);
}
