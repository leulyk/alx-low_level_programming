#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - search a number in an array of integers using the
 * linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: the value to search for
 *
 *
 * Return: the first index where the value is located, or -1 if array
 * is NULL or value is not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
