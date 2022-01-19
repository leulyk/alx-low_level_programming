#include <stdio.h>
#include <math.h>
#include "search_algos.h"


/**
 * jump_search - search an array of integers using Jump Search algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size: size of the array to search
 * @value: value to search for
 *
 * Return: the first index the value is found at, otherwise -1 if array
 * is null or value can't be found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, block_size;

	if (!array)
		return (-1);
	block_size = (size_t)sqrt((double)size);
	for (i = 0; i <= block_size; ++i)
	{
		if (array[i * block_size] >= value)
		{
			if (i == 0)
			{
				printf("Value found between indexes [0] and [%ld]\n",
					(i + 1) * block_size);
				printf("Value checked array[0] = [%d]\n", array[0]);
				return (0);
			}
			printf("Value found between indexes [%ld] and [%ld]\n",
				(i - 1) * block_size, i * block_size);
			for (j = (i - 1) * block_size; j <= (i * block_size); j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j,
					array[j]);
				if (array[j] == value)
					return (j);
			}
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", i * block_size,
			array[i * block_size]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		(i - 1) * block_size, i * block_size);
	for (j = (i - 1) * block_size; j < size; ++j)
	{
		printf("Value checked array[%ld] = [%d]\n", j,
			array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
